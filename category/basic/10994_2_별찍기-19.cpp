#include <iostream>

using	namespace std;

char	arr[397][397];

int	is_border(int i, int j, int num, int N)
{
	if (i == num * 2 || i == (N -1) * 4 - num * 2
		|| j == num * 2 || j == (N - 1) * 4 - num * 2)
		return (1);
	else
		return (0);
}

void	map_init(int num, int N)
{
	int	i;
	int	j;

	if (num == N)
		return ;
	i = num * 2;
	while (i < (N - 1) * 4 - num * 2 + 1) 
	{
		j = num * 2;
		while (j < (N - 1) * 4 - num * 2 + 1) 
		{
			if (is_border(i, j, num, N))
				arr[i][j] = '*';
			else
				arr[i][j] = ' ';
			j++;
		}
		i++;
	}
	map_init(num + 1, N);
}

void	print_map(int N)
{
	int	i;
	int	j;

	i = 0;
	while (i < (N - 1) * 4 + 1)
	{
		j = 0;
		while (j < (N - 1) * 4 + 1)
		{
			cout << arr[i][j];
			j++;
		}
		cout << '\n';
		i++;
	}
}

int	main(void)
{
	int	N;

	cin >> N;
	map_init(0, N);
	print_map(N);
	return (0);
}
