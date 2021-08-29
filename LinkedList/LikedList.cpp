#include <iostream>
using  namespace std;
struct Node
{
	int data;
	Node* next;
	Node(int value)
	{
		data = value;
		next = NULL;
	}
};
// insert in head of linked list
Node* Insert_head(Node* root, int data)
{
	if (root == NULL)
		root = new Node(data);
	else
	{
		Node* temp = new Node(data);
		temp->next = root;
		root = temp;
	}
	return root;
}
// insert in tail of linked list
Node* Insert_tail(Node* root, int data)
{
	if (root == NULL)
		root = new Node(data);
	else
	{
		Node* curr = root;
		while (curr->next)
		{
			curr = curr->next;
		}
		curr->next = new Node(data);
	}
	return root;
}
void Print_LinkedList(Node *root)
{
	while (root)
	{
		cout << root->data << " ";
		root = root->next;
	}
	cout << endl;
}
int main()
{
	Node* root = new Node(8);
	root = Insert_head(root, 10);
	root = Insert_tail(root, 100);
	root = Insert_head(root, 1000);
	Print_LinkedList(root);
	return 0;
}
