#include <iostream>
#include <queue>
#include <algorithm>
#include <utility>

using namespace std;

queue<int>	que;
int	dist[200005];

//10만밖으로 나가는 경우는 없다.
//x2 연산이 필요하더라도 일단 -1연산을 먼저 하다 10만으로 순간이동 하면 된다
//
//만약 문제에서 경로에 다다르는 방법까지 알고 싶다면?
//
//range-based for 문 이용하면 훨씬 간단함...
int	main(void)
{
	int	N;
	int	K;
	int	curr;

	cin >> N >> K;
	fill(dist, dist + 200005, -1);
	dist[N] = 0;
	que.push(N);
	while (!que.empty())
	{
		curr = que.front();
		que.pop();
		if (curr == K)
		{
			cout << dist[curr];
			return (0);
		}
		if (curr - 1 >= 0 && dist[curr - 1] == -1)
		{
			dist[curr - 1] = dist[curr] + 1;
			que.push(curr - 1);
		}
		if (curr + 1 <= 100000 && dist[curr + 1] == -1)
		{
			dist[curr + 1] = dist[curr] + 1;
			que.push(curr + 1);
		}
		if (2 * curr <= 100000 && dist[2 * curr] == -1)
		{
			dist[2 * curr] = dist[curr] + 1;
			que.push(2 * curr);
		}
	}
	return (0);
}
