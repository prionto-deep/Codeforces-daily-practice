#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> lines;
    string current_line;

    cout << "Enter text (Press Ctrl+D on Linux/Mac or Ctrl+Z on Windows + Enter to stop):\n";

    // Loop continues as long as there is text to read
    while (getline(cin, current_line)) {
        lines.push_back(current_line);
    }

    // Displaying the stored lines
    cout << "\nYou entered " << lines.size() << " lines:\n";
    for (const auto& line : lines) {
        cout << line << "\n";
    }

    return 0;
}
