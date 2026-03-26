#include <iostream>
using namespace std;

int main() {
    string str;
    
    cout << "Enter string: ";
    getline(cin, str);

    int freq[256] = {0};  // ASCII characters ke liye

    // Frequency count
    for(int i = 0; i < str.length(); i++) {
        freq[str[i]]++;
    }

    // Print result
    cout << "Character Frequency:\n";
    for(int i = 0; i < 256; i++) {
        if(freq[i] != 0) {
            cout << (char)i << " : " << freq[i] << endl;
        }
    }

    return 0;
}
