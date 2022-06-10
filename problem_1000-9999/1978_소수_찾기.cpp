#include <iostream>

using namespace std;

int	is_prime(int nb)
{
	if (nb == 1)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	for (int i = 2; i * i <= nb; i++)
		if (nb % i == 0)
			return (0);
	return (1);
}

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int	N;
	int	ans;
	int	num;

	ans = 0;
	cin >> N;
	while (N--)
	{
		cin >> num;
		ans += is_prime(num);
	}
	cout << ans;
	return (0);
}
