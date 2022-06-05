#include <iostream>
#include <queue>

//생각보다 고민..
//pair쓸 생각을 못해서 한참 고민..
//코드 지저분함..
//우선순위 큐로 훨씬 간단히 풀림 일단 보류

using namespace std;

int	print_ord(int cnt, int query)
{
	queue<pair<int,int>>	que;
	int	pry;
	int	max;
	int	ord;

	max = 0;
	ord = 0;
	for (int i = 0; i < cnt; i++)
	{
		cin >> pry;
		if (pry > max)
			max = pry;
		que.push(make_pair(pry, i));
	}
	while (que.front() != max)
	{
		que.push(que.front());
		que.pop();
	}
	while (que.front().second != query)
	{
		que.pop();
		ord++;
	}


int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int	N;
	int	cnt;
	int	query;

	cin >> N;
	while (N--)
	{
		cin >> cnt >> query;
		cout << print_ord(cnt, query) << '\n';
