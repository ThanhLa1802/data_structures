//#include <iostream>
//using namespace std;
//int arr[4];
//bool check[4];
//void backtrack(int step)
//{
//	if (step > 4)
//	{
//		for (int i = 0; i < 4; i++)
//		{
//			cout << arr[i] << " ";
//		}
//		cout << endl;
//		return;
//	}
//	for (int i = 0; i < 4; i++)
//	{
//		if (check[i] == 0)
//		{
//			arr[i] = step;
//			check[i] = 1;
//			backtrack(step + 1);
//			check[i] = 0;	
//		}
//
//	}
//
//}
//int main()
//{
//	backtrack(1);
//	return 0;
//}
#include <iostream>
using namespace std;
int a[4];
void Queen(int a[], int row)
{
	if (row == 4)
	{
		for (int i = 0; i < 4; i++)
		{
			cout << a[i] << " ";
		}
		cout << endl;
		return;
	}
	else
	{
		//backtrack 
		for (int i = 0; i < 4; i++)
		{
			bool check = 1;
			// kiem tra xem dat dc hay ko
			for (int j = 0; j < row; j++)
				if (i == a[j] || i == a[j] - j + row || i == a[j] + j - row)
					check = 0;
			// neu dat thanh cong
			if (check)
			{
				a[row] = i;
				Queen(a, row + 1);
			}
		}
	}
}
int main()
{
	Queen(a, 0);
	return 0;
}