#include <bits/stdc++.h>

using namespace std;


int		n;
string	img[65];

bool	all_same_color(int x, int y, int n)
{
	for (int i = y; i < y + n; i++)
	{
		for (int j = x; j < x + n; j++)
		{
			if (img[y][x] != img[i][j])
				return (false);
		}
	}
	return (true);
}

void	solver(int x, int y, int n)	
{
	int	half;

	if (all_same_color(x, y, n))
	{
		if (img[y][x] == '0')
			cout << '0';
		else
			cout << '1';
		return ;
	}
	half = n / 2;
	cout << "(";
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)
			solver(x + half * j, y + half * i, n / 2);
	cout << ")";
}

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> img[i];
	solver(0, 0, n);
	return (0);
}