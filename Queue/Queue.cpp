#include <iostream>
#define MAX_SIZE 10
using namespace std;

int queue[MAX_SIZE];
int front = 0, rear = 0;

void Endqueue(int data)
{
	if (rear == MAX_SIZE) // kiem tra da day chua
		cout << "Full" << endl;
	else
	{
		//them 1 phan tu vao queue
		queue[rear++] = data;
	}
}
void Dequeue()
{
	if (front == rear) // kiem tra rong
		cout << "Queue rong";
	else
	{
		// xoa phan tu khoi queue
		queue[front] = 0;
		front++;
	}
}
int Front()
{
	return queue[front];
}
int Size()
{
	return rear - front;
}
int main()
{
	Endqueue(8);
	Endqueue(10);
	Endqueue(12);
	Endqueue(19);
	Endqueue(28);
	Dequeue();
	Endqueue(100);
	cout << Front()<<endl;
	cout << Size()<<endl;
	return 0;
}
