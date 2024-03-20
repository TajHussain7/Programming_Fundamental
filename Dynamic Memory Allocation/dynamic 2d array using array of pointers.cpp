#include<iostream>
using namespace std;

int main()
{
	int m = 3, n = 4, c = 0;

	int **arr = new int*[m];

	//declare a memory of size n 
	for (int i = 0; i < m; i++)
	{
		arr[i] = new int[n];
	}

	//initialize the 2D array
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = ++c;
		}
	}
	//traverse the 2D array
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < m; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;

	system("pause");
	return 0;
}