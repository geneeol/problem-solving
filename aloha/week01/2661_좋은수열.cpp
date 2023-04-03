#include <bits/stdc++.h>

using namespace std;

int	n;
int	arr[85];

bool	is_good_seq(int depth, int num)
{
	int	len = depth + 1;
	for (int i = 1; i <= 3; i++)
	{
		if (len - i >= i)
		{
			for (int j = 0; j < i; j++)
			{
				// memcmp로 해결가능할듯?
			}

		}
	}
}

void	good_seq(int depth)
{
	if (n == 0)
	{
		for (int i = 0; i < n; i++)
			cout << arr[i];
		return ;
	}
	for (int i = 1; i <= 3; i++)
	{
		if (is_good_seq(depth, i))
		{
			arr[depth] = i;
			good_seq(depth + 1);
		}
	}
}

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);


	cin >> n;
	good_seq(0);
	return (0);
}