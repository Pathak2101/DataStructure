#include<bits/stdc++.h>
void rev(char input[],int s,int e)
{
    while(s<e)
    {
        std::swap(input[s],input[e]);
        s++;
        e--;
    }
}
void reverseStringWordWise(char input[]) {
    // Write your code here
    int n= strlen(input);
    rev(input,0, n-1);

    int i=0;
    int s=0;
    int e=0;
    while(i<=n)
    {
        if(input[i]==' ' || input[i]=='\0')
        {
            e=i-1;
            rev(input,s,e);
            s=i+1;
        }
        i++;
    }


}



#include <iostream>

using namespace std;

int main() {
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    cout << input << endl;
}
