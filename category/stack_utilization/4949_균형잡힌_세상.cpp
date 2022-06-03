#include <iostream>
#include <stack>

//만약 결과 끝에 스택이 안비는 경우도 고려해줘야함
//기계가 안잡는 테케. 만약 인풋이 .abc라면?

using namespace std;

bool	is_invalid(stack<char> &stk, char ch)
{
	if (stk.empty())
		return (true);
	else
		if ((ch == ')' && stk.top() == '(')
			|| (ch == ']' && stk.top() == '['))
			return (false);
	return (true);
}

bool	is_balanced(string const & str)
{
	stack<char>	stk;

	for (auto ch : str)
	{
		if (ch == '(' || ch == '[')
			stk.push(ch);
		else if (ch == ')' || ch == ']')
		{
			if (is_invalid(stk, ch))
				return (false);
			else
				stk.pop();
		}
	}
	if (stk.empty())
		return (true);
	else
		return (false);
}

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	string	str;

	while (1)
	{
		getline(cin, str);
		//str.front() == '.'은 문제있음
		if (str == '.')
			break ;
		if (is_balanced(str))
			cout << "yes\n";
		else
			cout << "no\n";
	}
	return (0);
}
