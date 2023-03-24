#include<iostream>
using namespace std;
void printArray(int input[], int n ){
    cout<<"printArray:"<<endl;
    for(int i=0;i<n;i++){
        cout<<input[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int input[10000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    printArray(input,n);
}