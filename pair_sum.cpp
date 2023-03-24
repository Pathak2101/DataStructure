#include <iostream>
using namespace std;


int pairSum(int *input, int size, int x)
{
	//Write your code here
	 int count=0;
	for(int i=0;i<size;i++){
		int sum=0;
		for(int j=i+1;j<size;j++){
			sum=input[i]+input[j];
            
			if (sum==x){
				count++;
			}
		}
	

	}
	return count;
}



int main()
{
		int size;
		int x;

		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cin >> x;

		cout << pairSum(input, size, x) << endl;

		delete[] input;
	
	
	return 0;
}