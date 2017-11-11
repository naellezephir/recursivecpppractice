#include <iostream>

using namespace std;

int gcd (int m, int n)
{
	if ( m < 0 || n < 0)
	{
		return 0;
	}		
	else if (m % n == 0)
	{
		return n;
	}
	else
	{
		gcd (n, m % n);
	}
}

int main()
{
	int m;
	int n;

	cout << "Enter m: ";
	cin >> m;

	cout << "Enter n: ";
	cin >> n;

	int answer =gcd (n, m);
	cout << "GCD is: " << answer << endl;
	
	return 0;
}

