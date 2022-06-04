#include <iostream>
#include <stack>

using namespace std;

//if (!stk.empty() && stk.top == ch) stk.pop()
//else stk.push(ch)
//이렇게 두 줄로 가능

int	is_good_word(string const &str)
{
	stack<char>	stk;

	for (auto ch : str)
	{
		if (stk.empty())
			stk.push(ch);
		else
		{
			if (stk.top() != ch)
				stk.push(ch);
			else
				stk.pop();
		}
	}
	if (stk.empty())
		return (1);
	else
		return (0);
}

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int	N;
	int	sum;
	string	str;

	sum = 0;
	cin >> N;
	while (N--)
	{
		cin >> str;
		sum += is_good_word(str);
	}
	cout << sum;
	return (0);
}
