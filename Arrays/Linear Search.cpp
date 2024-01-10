#include <iostream>


using namespace std;
int main()
{
	int A[5], n = 5, key;
	
	cout << "Enter 5 numbers to fill the array: ";
	for (int i=0; i<n; i++)
	{
		cin >> A[i];
	}
	cout << "Enter a key to search in array: ";
	cin >> key;
	for (int i=0; i<n; i++)
	{
		if (key==A[i])
		{
			cout << "Key found at position: " << i << endl;
			system("pause");
			exit(0);
		}
		cout << "Key not found" << endl;
		system("pause");
		return 0;
	}
}