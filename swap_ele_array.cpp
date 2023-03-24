#include<iostream>
using namespace std;
void swapAlternate(int input[],int n){
    for(int i=0;i<n-1;i=i+2){
        int temp=input[i];
        input[i]=input[i+1];
        input[i+1]=temp;
    }
}

int main(){
    int n;
    cin>>n;
    int input[]={1,2,3,4,5,6};
    swapAlternate(input,6);
    for (int i = 0; i <= n-1; i++)
		{
			cout << input[i] << " ";
		}
		cout << endl;
}
