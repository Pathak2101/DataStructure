#include<iostream>
#include<cstring>
using namespace std;
void replaceCharacter(char input[], char c1, char c2) {
    // Write your code here
    int i=0;
    int j=strlen(input);
    for(i;i<j;i++){
        if(input[i]==c1){
            input[i]=c2;
               }
    }
}
int main(){
    char input[10000];
    cin>>input;
    char c1,c2;
    cin>>c1>>c2;
    replaceCharacter(input,c1,c2);
    cout<<input<<endl;
}