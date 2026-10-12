#include <iostream>
#include<vector>
using namespace std;
typedef long long ll;
typedef __int128 lll;

const ll MOD = 1000000007;

ll qpow(ll a, ll b, ll mod){
    a%=mod; if(a<0) a+=mod;
    ll r=1%mod;
    while(b>0){
        if(b&1) r=(ll)((lll)r*a%mod);
        a=(ll)((lll)a*a%mod);
        b>>=1;
    }
    return r;
}

const ll NP1=167772161, NG1=3;
const ll NP2=469762049, NG2=3;
const ll NP3=998244353, NG3=3;

void ntt(vector<ll>& a, bool invert, ll mod, ll root){
    int n=a.size();
    for(int i=1,j=0;i<n;i++){
        int bit=n>>1;
        for(;j&bit;bit>>=1) j^=bit;
        j^=bit;
        if(i<j) swap(a[i],a[j]);
    }
    for(int len=2; len<=n; len<<=1){
        ll w=qpow(root,(mod-1)/len,mod);
        if(invert) w=qpow(w,mod-2,mod);
        int half=len/2;
        for(int i=0;i<n;i+=len){
            ll wn=1;
            for(int j=0;j<half;j++){
                ll u=a[i+j];
                ll v=(ll)((lll)a[i+j+half]*wn%mod);
                ll s=u+v; if(s>=mod) s-=mod;
                ll d=u-v; if(d<0) d+=mod;
                a[i+j]=s; a[i+j+half]=d;
                wn=(ll)((lll)wn*w%mod);
            }
        }
    }
    if(invert){
        ll ninv=qpow(n,mod-2,mod);
        for(auto &x:a) x=(ll)((lll)x*ninv%mod);
    }
}

vector<ll> multiply_mod(vector<ll> a, vector<ll> b, ll mod, ll root){
    int rsz=(int)a.size()+(int)b.size()-1;
    if(rsz<=0) return {};
    int sz=1; while(sz<rsz) sz<<=1;
    a.resize(sz); b.resize(sz);
    ntt(a,false,mod,root);
    ntt(b,false,mod,root);
    for(int i=0;i<sz;i++) a[i]=(ll)((lll)a[i]*b[i]%mod);
    ntt(a,true,mod,root);
    a.resize(rsz);
    return a;
}

ll inv_m1_mod_m2, inv_m1m2_mod_m3, M1_mod, M1M2_mod;
void init_crt(){
    inv_m1_mod_m2 = qpow(NP1%NP2, NP2-2, NP2);
    ll m1m2modm3 = (ll)((lll)(NP1%NP3)*(NP2%NP3)%NP3);
    inv_m1m2_mod_m3 = qpow(m1m2modm3, NP3-2, NP3);
    M1_mod = NP1 % MOD;
    M1M2_mod = (ll)((lll)(NP1%MOD)*(NP2%MOD)%MOD);
}

ll crt(ll r1, ll r2, ll r3){
    ll t1=r1;
    ll k2 = ((r2-t1)%NP2+NP2)%NP2;
    k2 = (ll)((lll)k2*inv_m1_mod_m2%NP2);
    ll x_mod_m3 = (ll)(((lll)(t1%NP3) + (lll)(k2%NP3)*(NP1%NP3))%NP3);
    ll k3 = ((r3-x_mod_m3)%NP3+NP3)%NP3;
    k3 = (ll)((lll)k3*inv_m1m2_mod_m3%NP3);
    ll ans = t1%MOD;
    ans = (ans + (ll)((lll)(k2%MOD)*M1_mod))%MOD;
    ans = (ans + (ll)((lll)(k3%MOD)*M1M2_mod))%MOD;
    return ans;
}

vector<ll> multiply_arbitrary(const vector<ll>& A, const vector<ll>& B){
    if(A.empty()||B.empty()) return {};
    vector<ll> r1=multiply_mod(A,B,NP1,NG1);
    vector<ll> r2=multiply_mod(A,B,NP2,NG2);
    vector<ll> r3=multiply_mod(A,B,NP3,NG3);
    int sz=r1.size();
    vector<ll> res(sz);
    for(int i=0;i<sz;i++) res[i]=crt(r1[i],r2[i],r3[i]);
    return res;
}

vector<ll> poly_inverse(vector<ll> Q, int N){
    Q.resize(N);
    vector<ll> F(1, qpow(Q[0], MOD-2, MOD));
    int cur=1;
    while(cur<N){
        int newSize=min(N,cur*2);
        vector<ll> Qs(Q.begin(), Q.begin()+newSize);
        vector<ll> FQ = multiply_arbitrary(F, Qs);
        FQ.resize(newSize);
        vector<ll> t(newSize);
        t[0] = (2 - FQ[0]%MOD + MOD)%MOD;
        for(int i=1;i<newSize;i++) t[i] = (MOD - FQ[i]%MOD)%MOD;
        vector<ll> Fnew = multiply_arbitrary(F, t);
        Fnew.resize(newSize);
        F.swap(Fnew);
        cur=newSize;
    }
    F.resize(N);
    return F;
}

int main(){
    init_crt();
    int T;
    scanf("%d",&T);
    while(T--){
        int n,m;
        scanf("%d %d",&n,&m);
        vector<ll> c(m+1);
        for(int i=1;i<=m;i++){
            ll x; scanf("%lld",&x);
            c[i]=x % MOD;
        }
        int N=n+1;
        vector<ll> Q(N,0);
        Q[0]=1;
        for(int i=1;i<N;i++){
            if((i & m)==i) Q[i]=MOD-1;
        }
        vector<ll> F = poly_inverse(Q, N);
        vector<ll> F2 = multiply_arbitrary(F,F);
        F2.resize(N);
        ll ans=0;
        int lim = min(n,m);
        for(int x=1;x<=lim;x++){
            if((x & m)==x){
                ans = (ans + (ll)((lll)c[x]*F2[n-x]))%MOD;
            }
        }
        printf("%lld\n", ans);
    }
}