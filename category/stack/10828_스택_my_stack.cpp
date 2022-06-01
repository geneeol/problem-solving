#include <bits/stdc++.h>

using std::cin;
using std::cout;

template <class T>
class MyStack
{
	int	tos;
	T	data[10005];
public:
	MyStack();
	void push(T element);
	void pop();
	int	size();
	int	empty();
	int top();
};

template <class T>
MyStack<T>::MyStack()
{
	tos = 0;
}
template <class T>
void	MyStack<T>::push(T element)
{
	data[tos] = element;
	tos++;
}

template <class T>
void	MyStack<T>::pop(void)
{
	tos--;
}

template <class T>
int	MyStack<T>::size(void)
{
	return (tos);
}
template <class T>
int	MyStack<T>::empty(void)
{
	if (tos <= 0)
		return (1);
	else
		return (0);
}

template <class T>
int	MyStack<T>::top(void)
{
	if (tos == 0)
		return (-1);
	else
		return (data[tos - 1]);
}

int	main(void)
{
	MyStack<int> stk;
	int	N;
	int	data;
	std::string	command;

	cin >> N;
	while (N--)
	{
		cin >> command;
		if (command == "push")
		{
			cin >> data;
			stk.push(data);
		}
		else if (command == "pop")
		{
			if (stk.empty())
				cout << "-1\n";
			else
			{
				cout << stk.top() << '\n';
				stk.pop();
			}
		}
		else if (command == "size")
			cout << stk.size() << '\n';
		else if (command == "empty")
			cout << stk.empty() << '\n';
		else if (command == "top")
		{
			cout << stk.top() << '\n';
		}
	}
	return (0);
}
