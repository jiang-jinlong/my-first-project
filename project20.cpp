#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int con(int arr[], int len, int num);
int main()
{
	int arr[10];
	srand(time(NULL));
	int len = sizeof(arr) / sizeof(int);
	for (int i = 0; i <= len;)
	{
		int num = rand() % 100 + 1;
		int flag = con(arr,len,num);/*inportant*/
		if (!flag)
		{
			arr[i] = num;
			i++;
		}
	}
	for (int i = 0; i <= 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	int sum=0;
	for (int i = 0; i <= 10; i++)
	{
		sum = sum + arr[i];
	}
	printf("%d\n",sum);
	return 0;
}
int con(int arr[], int len, int num)
{
	for (int i = 0; i <= 10; i++)
	{
		if (arr[i] == num)
			return 1;
	}
	return 0;
}