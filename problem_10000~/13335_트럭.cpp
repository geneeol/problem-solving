#include <bits/stdc++.h>

using namespace std;

//고민... 어렵네 실버1 맞나 ㅠ
//접근 자체를 이상하게 함

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	queue<int>	bridge;
	vector<int>	truck;
	int	n;
	int	w;
	int	L;
	int	weight;
	int	time;
	int	total;
	int	ans;

	time = 0;
	total = 0;
	ans = 0;
	cin >> n >> w >> L;
	truck.resize(n);
	for (int i = 0; i < n; i++)
	{
		cin >> weight;
		truck[i] = weight;
	}
	for (int i = 0; i < n; i++)
	{
		while (bridge.size() < w && total <= L)
		{
			total += arr[i]
			bridge.push(arr[i++]);
			ans++;
		}
	}
	return (0);
}
