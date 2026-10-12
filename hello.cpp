#include<iostream>
#include<cmath>
using namespace std;
void Toh(int n, int a, int b, int c)
{
    if(n>0)
    {
        Toh(n-1,a,c,b);
        printf("%d %d\n",a,c);
        Toh(n-1,b,a,c);
    }
}
int main(){
    int number, a=1,b=2, c=3;
    int count;
    cin >>number;
    count=pow(2,number)-1;
    cout << count<< endl;
    Toh(number,a,b,c);
}