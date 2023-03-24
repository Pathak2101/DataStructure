#include <iostream>
using namespace std;


int tripletSum(int *input, int size, int x)
{
	//Write your code here
	int i,j,k,temp;  
	int count=0  ;
    for(i=0; i<size; i++)
    {
        for(j = i+1; j < size; j++)
        {
            //If there is a smaller element found on right of the array then swap it.
            if(input[j] < input[i])
            {
                temp = input[i];
                input[i] = input[j];
                input[j] = temp;
            }
        }
    }
	for( i = 0 ; i < size; i++)
	{
		//cout <<"I am in loop";
		for( j = i + 1 ; j < size; j++)
		{
			for( k = j + 1 ; k < size ; k++)
			{
               // cout <<"I am in loop";
				if( (input[i] + input[j] + input[k]) == x)
				{  
					count++;


				}			
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

		cout << tripletSum(input, size, x) << endl;

		delete[] input;
	

	return 0;
}