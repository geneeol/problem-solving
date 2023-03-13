#include <bits/stdc++.h>

// 사전식 출력이 안됨.

#define SWAP(x,y,t) ((t) = (x), (x) = (y), (y) = (t))

using namespace std;

void	generate_permutation(int arr[10], int depth , int n)
{
	int	tmp;

	if (depth == n)
	{
		for (int i = 0; i <= n; i++)
			printf("%d ", arr[i]);
		printf("\n");
		return ;
	}
	for (int j = depth; j <= n; j++)
	{
		SWAP(arr[depth], arr[j], tmp);
		generate_permutation(arr, depth + 1, n);
		SWAP(arr[depth], arr[j], tmp);
	}
}

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int	n;
	int	arr[10];

	cin >> n;
	for (int i = 0; i < n; i++)
		arr[i] = i + 1;
	generate_permutation(arr, 0, n - 1);
	return (0);
}