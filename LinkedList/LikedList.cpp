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
// Insert in position
Node* Insert_at(Node* root, int data, int pos)
{
	if (pos == 0 || root == NULL)
		return Insert_head(root, data);
	else
	{
		int cnt = 1;
		Node* curr = root;
		while (curr->next != NULL && cnt != pos)
		{
			curr = curr->next;
			cnt++;
			
		}
		if (cnt != pos)
		{
			cout << "Ban da nhap sai vi tri nen se chen vao duoi" << endl;
			return Insert_tail(root, data);
		}
		else
		{
			Node* temp = new Node(data);
			temp->next = curr->next;
			curr->next = temp;
		}
	}
	return root;
}

Node* Delete_element(Node *root, int data)
{
	if (root->data == data)
	{
		root = root->next;
		return root;
	}
	Node* curr = root;
	while (curr->next)
	{
		if (curr->next->data == data)
		{
			curr->next = curr->next->next;
			return root;
		}
		curr = curr->next;
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
	root = Insert_at(root, 96, 4);
	root = Delete_element(root, 69);
	Print_LinkedList(root);
	return 0;
}
