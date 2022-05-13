#include <iostream>

using std::cin;
using std::cout;

int	main(void)
{
	int	a;
	int	b;
	int	c;

	cin >> a >> b >> c;
	if (a > b)
	{
		if (b > c)
			cout << c << ' ' <<  b << ' ' << a;
		else
			a > c ? cout << b << ' ' << c << ' ' << a : cout << b << ' ' << a << ' ' << c; 
	}
	else
	{
		if (a > c)
			cout << c << ' ' << a << ' ' << b;
		else
			b > c ? cout << a << ' ' << c << ' ' << b: cout << a << ' ' << b << ' ' << c;
	}
	return (0);
}
