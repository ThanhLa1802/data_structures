#include <iostream>
#define HASH_SIZE 10
#define  MAX_LENGTH 20
using namespace std;

struct Node {
	char word[MAX_LENGTH];
	Node* next;
};

Node* hash_table[HASH_SIZE];
int mstrcmp(const char* a, const char* b)
{
	int i;
	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] != b[i])
		{
			return a[i] - b[i];
		}
	}
	return a[i] - b[i];
}

void mstrcpy(char* a, char* b)
{
	int n = 0;
	do {
		a[n] = b[n];
		n++;
	} while (b[n] != '\0');
	a[n] = '\0';
}
int hashString(const char a[])
{
	int i = 0;
	int j = 9;
	while (a[i] != '\0')
	{
		j = (31 * j + a[i]) % HASH_SIZE;
		i++;
	}
	return j;
}

void insert(char* word)
{

}

int check(char* word)
{
	
	return 0;
}
int main()
{

	return 0;
}