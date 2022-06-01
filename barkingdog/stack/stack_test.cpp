#include <bits/stdc++.h>

using namespace std;

const int MX = 1000005;
int dat[MX];
int pos = 0;

void push(int x){
	if (pos == MX)
	{
		cout << "stack is full!!\n";
		return ;
	}
	dat[pos++] = x;
}

void pop(){
	//stl stack에서 빈 스택 pop하면 런타임 에러
	if (pos == 0)
	{
		cout << "stack is empty\n";
		return ;
	}
	pos--; //dat는 변경하지 않아도 어차피 나중에 새로운 값이 들어옴
}

int top(){
	if (pos != 0)
		return (dat[pos - 1]);
	return (-1);
}


void test(){
  push(5); push(4); push(3);
  cout << top() << '\n'; // 3
  pop(); pop();
  cout << top() << '\n'; // 5
  push(10); push(12);
  cout << top() << '\n'; // 12
  pop();
  cout << top() << '\n'; // 10
}

int main(void) {
	test();
}
