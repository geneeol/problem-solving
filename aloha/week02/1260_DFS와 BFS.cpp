#include <bits/stdc++.h>

using namespace std;

int	n_v;
int	n_e;
int	start;
bool	visited[1005];
vector<int>	edges[10005];

void	dfs(int v)
{
	visited[v] = true;
	cout << v << " ";
	for (auto nxt : edges[v])
	{
		if (visited[nxt] == true)
			continue ;
		dfs(nxt);
	}
}

void	bfs(int v)
{
	queue<int>	que;
	visited[v] = true;
	que.push(v);
	while (!que.empty())
	{
		int	cur = que.front();
		cout << cur << " ";
		que.pop();
		for (auto nxt : edges[cur])
		{
			if (visited[nxt] == true)
				continue;
			visited[nxt] = true;
			que.push(nxt);
		}
	}
}

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int	v1;
	int	v2;

	cin >> n_v >> n_e >> start;
	for (int i = 0; i < n_e; i++)
	{
		cin >> v1;
		cin >> v2;
		edges[v1].push_back(v2);
		edges[v2].push_back(v1);
	}
	for(int i = 1; i <= n_v; i++) {
		sort(edges[i].begin(), edges[i].end());
	}
	dfs(start);
	cout << "\n";
	memset(visited, 0, sizeof(bool) * 1005);
	bfs(start);
	return (0);
}