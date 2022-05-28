#include <iostream>
#include <list>

int	data[5050];
int	prev[5050];
int	next[5050];

int	main(void)
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(false);

	int	N;
	int	K;
	int	curr;

	cin >> N >> K;
	for (int i = 1; i <= N; i++)
	{
		pre[i] = (i == 1) ? N : i - 1;
		next[i] = (i == N) ? 1 : i + 1;
	}
	curr = 0;
	while (v.size != N) 
	{

	
