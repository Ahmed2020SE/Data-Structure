#include<iostream>
#include<iomanip>
using namespace std;
# define Size 6

void calc(int*b, int size);
void swap(int x, int y);
void Swap_by_pointers(int *x, int *y);
void printarr(int *arr, int size);

int main() {
	/*int x, y, z;
	int *p, *q, *r;
	x = 3;
	p = &y;
	q = &z;
	r = &x;
	*r = x + 9;
	*p = (*r)--;
	*q = *p + *r;
	r = q;
	*r = y / *q;
	*p = *r * *q;
	r = &x;
	cout << x << " " << y << " " << z << endl;
	cout << *p << " " << *q << " " << *r << endl;
	int a[10];
	int *pa;
	pa = a;

	*(pa + 1) = 5;
	cout << a[1] << endl;
	*(a + 1) = 5;
	cout << a[1] << endl;
	pa = a + 1;
	*pa = 5;
	cout << a[1] << endl;
	int a[5] = { 2,6,2,1,10 };
	calc(a, 5);
	int x1, y1;

	cin >> x1 >> y1;

	swap(x1, y1);

	cout << x1 << " " << y1 << endl;

	Swap_by_pointers(&x1, &y1);

	cout << x1 << " " << y1 << endl;
	int arr[Size];

	int *left;
	int *right;

	left = arr;      // left points to index 0 of the array
	right = &arr[Size - 1];  // right points to the last index of         array

	cout << "Enter Array Elements :" << endl;

	while (left <= right)
	{
		cin >> *left;  // enter value of left
		left++;

	}

	left = arr;        // return left to points to index 0

	while (left < right)
	{
		*left ^= *right;
		*right ^= *left;
		*left ^= *right;

		left++;
		right--;

	}

	printarr(arr, Size);
	int **p;
	p = new int*[5];
	for (int i = 0; i < 5; i++) {
		p[i] = new int[3];
	}
	for (int i = 1; i < 5; i++)
		for (int j = 0; j < 3; j++)
			p[i][j] = 2 * i*j;
	for (int i = 1; i < 5; i++) {
		for (int j = 0; j < 3; j++)
			cout << p[i][j] << " ";
		cout << endl;
	}
	int *p;
	int*q;
	p = new int;
	*p = 43;
	cout << *p << endl;
	q = p;
	*q = 52;
	cout << *p << " " <<*q << endl;
	p = new int;
	*p = 78;
	cout << *p << " " << *q << endl;
	q = new int;
	cout << *p << " " << *q << endl;
	*q = *p;
	cout << *p << " " << *q << endl;*/

}

void calc(int*b, int size) {
	int *pc, *pd;
	int sum = 0, avg;
	pd = b + size;
	cout << pd << endl;
	for (pc = b; pc < pd; pc++)
		sum += *pc;
	avg = sum / size;
	cout << avg << endl;
}
void swap(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;

}

void Swap_by_pointers(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;

}
void printarr(int *arr, int size)
{
	int *endarr = arr + size - 1;   //end of array

	while (arr <= endarr)
	{
		cout << *arr << " ";

		arr++;
	}
	cout << endl;

}