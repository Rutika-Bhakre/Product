#include<iostream>
using namespace std;

int main()
{
	int n, last, first, i = 1;
	cout<< "Enter a Number : ";
	cin >> n;
	last = n % 10;
	do{ 
		first = n / i;
		i = i * 10;
	}while(first > 9);
	i = i / 10;
	n = n - last;
	n = n + first;
	n = n - i * first;
	n = n + i * last;
	cout << n;
}
