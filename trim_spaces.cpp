#include <iostream>
#include <cstring>
using namespace std;




void trimSpaces(char input[]) {
  // Write your code here
  // To keep track of non-space character count
  int j = 0;//j is index for output string

  // Traverse the given string. If current character
  // is not space, then place it at index 'j++'
  for (int i = 0; input[i]!='\0'; i++){
    if (input[i] != ' ')
      input[j++] = input[i]; // here count is
                             // incremented
  }
  input[j] = '\0';
}



int main() {
    char input[1000000];
    cin.getline(input, 1000000);
    trimSpaces(input);
    cout << input << endl;
}
