#include <iostream>
#define MAX 4
int top = -1;
int arr[MAX];
//kiem tra day
bool is_full()
{
	if (top >= MAX - 1)
		return true;
	else
		return false;
}
//kiem tra rong
bool is_empty1()
{
	if (top == -1)
		return true;
	else
		return false;
}
void push(int data)
{
	if (is_full())
		return;
	else {
		top++;
		arr[top] = data;
	}
}

void pop()
{
	if (is_empty1())
		return;
	else
	{
		--top;
	}
}
int current_size()
{
	return top + 1;
}
int peak()
{
	return arr[top];
}

using namespace std;

int main()
{
	push(100);
	push(69);
	push(78);
	pop();
	push(10);
	cout << peak();
	push(11);
	push(20);
	return 0;
}

