#include <iostream>
#include <algorithm>
using namespace std;
#include<climits>
void intersection(int *input1, int *input2, int size1, int size2)
{
    //Write your code here
    for(int i=0;i<size1;i++)
    {
        for(int j =0;j<size2;j++)
        {
            if(input1[i]==input2[j])
            {
                cout<<input2[j]<<" ";
                input2[j] = INT_MIN;
                break;
            }
        }
    }
}



int main()
{

		int size1, size2;

		cin >> size1;
		int *input1 = new int[size1];

		for (int i = 0; i < size1; i++)
		{
			cin >> input1[i];
		}

		cin >> size2;
		int *input2 = new int[size2];

		for (int i = 0; i < size2; i++)
		{
			cin >> input2[i];
		}

		intersection(input1, input2, size1, size2);
		
		delete[] input1;
		delete[] input2;
		
		cout << endl;
	

	return 0;
}