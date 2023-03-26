#include <bits/stdc++.h>

using namespace std;

list<int>	lst;

int	good_seq(int n)
{
	if (n == 0)
	{
		for (auto i : lst)
			cout << i;
		return (1);
	}
	for (int i = 1; i <=3; i++)
	{
		if (is_valid_len(i))
	}
}

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int	n;

	cin >> n;
	good_seq(n);
	return (0);
}