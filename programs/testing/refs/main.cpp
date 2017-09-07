#include <iostream>

/* ARRAYS ARE PASSED AS FUCKING POINTERS KILL ME */
int getSum(int arr[], int size)
{
	int sum = 0;
	for(int i=0;i<size;i++)
	{
		sum += arr[i];
	}

	return sum;
}

int main()
{
	int a[] = {1,2,3,4,5};
	
	std::cout << sizeof(a)/sizeof(a[0]) << getSum(a,sizeof(a)/sizeof(a[0])) << "\n";
	return 0;
}
