#include <bits/stdc++.h>

using namespace std;

int		n, k;
bool	erased[1005];

// 리팩토링 할 것
int	solver()
{
	int	cnt;
	int	next_prime;

	cnt = 0;
	next_prime = 2;
	while (true)
	{
		for (int i = 1; i * next_prime <= n; i++)
		{
			if (!erased[next_prime * i])
			{
				erased[next_prime * i] = true;
				cnt++;
				// cout << "num: " << next_prime * i << ", ";
				// cout << "cnt: " << cnt << "\n";
				// cout << "\n";
				if (cnt == k)
					return (i * next_prime);
			}
		}
		// 이 부분에 비효율이 존재하지 않을까
		while (!erased[next_prime++])
			;
	}
	return (-1);
}

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> k;
	cout << solver();
	return (0);
}