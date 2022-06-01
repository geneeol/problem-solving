#include <bits/stdc++.h>

using namespace std;

int	main(void)
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	int	N;
	int	height;
	stack<pair<int, int>>	tower; //왜 탭인데 위 아래 간격이 달라보이지?
	vector<int>	ans;//둘다 탭인데 왜 정렬이 위 아래 다르지?(vector일 때였음)

	cin >> N;
	ans.resize(N);
	for (int i = 0; i < N; i++)
	{
		cin >> height;
		if (tower.empty() == false)
		{
			tower.push(make_pair(data, i));
	}

	while (!tower.empty())
	{
		if (stk.empty() == true)
		{
			stk.push(tower.top());
			tower.pop();
		}
		if (tower.empty() == false)
		{
			if (tower.top() > stk.top())
			{
				ans[stk.top().second] = tower.size();
				stk.pop();
			}
			else
			{
				stk.push(tower.top());
				tower.pop();
			}
		}
	}
	for (auto i : ans)
		cout << i << ' ';
	return (0);
}

/*
cnt = 1;
		while (!tower.empty() && tower.top() < tmp) //empty반환값 0 이랑 비교하면 당연히 거짓.. 
		{
			printf("top: %d\n", tower.top());
				tower.pop();
				cnt++;
		}
		while (cnt--)
			ans.push_front(tower.size());

*/
