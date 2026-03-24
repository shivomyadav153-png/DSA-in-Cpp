#include <iostream>
#include <string>
using namespace std;
int main(){
  string str = " hello world dsa ";
string result = " ";
for(int i = 0; i < str.length(); i++){
  if(str[i] != ' '){
        result += str[i];
  }
}
cout <<"After removing spaces:" <<result;
  return 0;
}
