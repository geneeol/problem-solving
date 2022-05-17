#include <iostream>

using namespace std;

int	func2(int arr[], int N)
{
	int	occur[101];
	int	i;

	fill(occur, occur + 101, 0);
	i = 0;
	while (i < N)
	{
		if (occur[100 - arr[i]])
			return (1);
		occur[arr[i]] = 1;
		i++;
	}
	return (0);
}

int	main(void)
{
	int	arr1[] = {1, 52, 48};
	int	arr2[] = {50, 42};
	int	arr3[] = {4, 13, 63, 87};

	cout << func2(arr1, 3) <<'\n';
	cout << func2(arr2, 2) <<'\n';
	cout << func2(arr3, 4) <<'\n';
	return (0);
}
