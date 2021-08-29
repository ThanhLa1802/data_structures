#include <iostream>

#include <time.h>
using namespace std;

int fibo1(int N)
{
	if (N <= 1)
		return N;
	return fibo1(N - 1) + fibo1(N - 2);
}

int fibo2(int N)
{
	int temp[50];
	temp[0] = 0;
	temp[1] = 1;
	for (int i = 2; i <= N; i++)
	{
		temp[i] = temp[i - 1] + temp[i - 2];
	}
	return temp[N];
}

int main()
{
	
	int N = 40;
	clock_t start, end;
	start = clock();
	cout << "Result 1: " << fibo1(N)<<endl;
	end = clock();

	//Calculate fibo1
	double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
	cout << "Time taken by fibo1 is : " << fixed << time_taken << " sec " << endl;

	//Calculate fibo2:
	start = clock();
	cout << "Result 2: " << fibo2(N) << endl;
	end = clock();
	double time_taken2 = double(end - start) / double(CLOCKS_PER_SEC);
	cout << "Time taken by fibo1 is : " << fixed<< time_taken2 << " sec " << endl;
	return 0;
}