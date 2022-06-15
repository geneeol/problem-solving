#include <iostream>

using namespace std;

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int	T;
	int	A;
	int	B;

	cin >> T;
	while (T--)
	{
		cin >> A >> B;
		cout << A + B << '\n';
	}
	return (0);
}
