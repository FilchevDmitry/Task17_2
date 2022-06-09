#include <iostream>
void reverse(int num[], const int SIZE)
{
	for (int i = 0; i < SIZE/2; i++)
	{
		int temp = num[SIZE - 1 - i];
		num[SIZE - 1 - i] = num[i];
		num[i] = temp;
	}
}
int main()
{
	const int SIZE = 10;
	int num[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
	reverse(num, SIZE);
	for (int a : num)
	{
		std::cout << a << " ";
	}
}
