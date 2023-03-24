#include <iostream>
using namespace std;



int binarySearch(int *input, int n, int val)
{
    //Write your code here
    int start = 0;
    int end = n - 1;
    int mid = start;
    while (start <= end) {
      mid = start + (end - start) / 2;
      if (input[mid] > val)
        end = mid - 1;
      else if (input[mid] < val)
        start = mid + 1;
      else
        return mid;
    }
    return -1;
}
int main()
{

	int size;
	cin >> size;
	int *input = new int[size];

	for(int i = 0; i < size; ++i)
	{
		cin >> input[i];
	}
	
		int val;
		cin >> val;
		cout << binarySearch(input, size, val) << endl;
	
	
	delete [] input;
	return 0;
}