#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int>	arr;
	int	N;

	cin >> N;
	arr.resize(N);
	for (int i = 0; i < N; i++)
		cin >> arr[i];
	sort(arr.begin(), arr.end());
	cout << arr[0] << ' ' << arr[N - 1];
	return (0);
}
