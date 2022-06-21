#include <iostream>

using namespace std;

int	main(void)
{
	int	N;
	int	sum;
	string	str;

	sum = 0;
	cin	>> N;
	cin >> str;
	for (int i = 0; i < N; i++)
		sum += str[i] - '0';
	cout << sum;
	return (0);
}
