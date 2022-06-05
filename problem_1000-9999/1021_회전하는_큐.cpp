#include <iostream>
#include <deque>

int	main(void)
{
	deque<int>	deq;
	int	N;

	cin >> N >> M;
	for (int i = 1; i <= N; i++)
		deq.push_back(i);
	while (
