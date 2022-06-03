#include <iostream>
#include <cmath>

using namespace std;

int	main(void)
{
	int	sum;
	int	num;

	sum = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> num;
		sum += pow(num, 2);
	}
	cout << sum % 10;
	return (0);
}
