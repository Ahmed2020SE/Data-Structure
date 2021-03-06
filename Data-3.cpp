#include<iostream>
#include<iomanip>
using namespace std;

int factorial(int n);
int GCD(int x,int y);
void sortarr(int arr[],int n);

int main()
{
	cout << factorial(4) << endl;
	cout << GCD(36, 28) << endl;
	int arr[] = { 5,1,4,2,8 };
	sortarr(arr, 5);
	for (int i = 0; i < 5; i++)
		cout << arr[i] << " ";
	cout << endl;
    return 0;
}

int factorial(int n) {
	if (n == 1)
		return 1;
	else
		return n*factorial(n - 1);
}
int GCD(int x, int y) {
	if (y == 0)
		return x;
	else {
		return(y ,x%y);
	}
}
void sortarr(int arr[],int n) {
	if (n == 1)
		return;
for (int i = 0; i<n-1; i++)
		if (arr[i] > arr[i + 1])
			swap(arr[i], arr[i + 1]);
	sortarr(arr, n - 1);
}
