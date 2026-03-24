#include <iostream>
#include <string>
using namespace std;

int main() {
  string str = "hello world";
int vowels = 0, constants = 0;

for(int i = 0; i<str.length(); i++) {
char ch = tolowe (str[i]);
if(ch >= 'a' && ch <= 'z') {
if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
  vowels++;
else
  consonants++:
}
}
cout << "vowels: " << vowels <<endl;
cout << "consonants: " << consonants;
return 0;
}
