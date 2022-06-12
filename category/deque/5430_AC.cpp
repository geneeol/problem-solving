#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

void	parser(const string &arr, deque<int> &deq)
{
	int	num;

	for (int i = 0; i < (int)arr.size(); i++)
	{
		if (arr[i] == '[' || arr[i] == ']')
			continue ;
		num = 0;
		while (arr[i] != ',' && arr[i] != ']')
		{
			num *= 10;
			num += arr[i] - '0';
			i++;
		}
		deq.push_back(num);
	}
}

void	ft_operator(void)
{
	deque<int>	deq;
	string	cmd;
	string	arr;	
	int		size;
	int		rev;

	rev = 0;
	cin >> cmd >> size >> arr;
	parser(arr, deq);
	for (auto ch : cmd)
	{
		if (ch == 'R')
			rev++;
		if (ch == 'D')
		{
			if (deq.empty())
			{
				cout << "error\n";
				return ;
			}
			if (rev % 2 == 0)
				deq.pop_front();
			else
				deq.pop_back();
		}
	}
	//여기가 조금 어색한듯.
	cout << '[';
	if (rev % 2 == 0)
		for (auto it = deq.begin(); it != deq.end(); it++)
		{
			if (it != deq.begin())
				cout << ',';
			cout << *it;
		}
	else
		for (deque<int>::reverse_iterator rit = deq.rbegin(); rit != deq.rend(); rit++)
		{
			if (rit != deq.rbegin())
				cout << ',';
			cout << *rit;
		}
	cout << "]\n";
}

int	main(void)
{
	int	T;

	cin >> T;
	while (T--)
		ft_operator();
	return (0);
}
