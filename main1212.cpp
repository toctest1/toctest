#include <iostream>
#include<string>
using namespace std;



int main()
{
	const int r = 10;
	int arr[r];
	for (int i = 0; i < r; i++) {
		int* y = new int;
		*y = i;
		arr[i] = *y;
	}
	for (int i = 0; i < r; i++)
		cout << arr[i] << '\n';


}
