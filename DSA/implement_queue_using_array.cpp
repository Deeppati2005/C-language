#include <stdio.h>
#include <stdlib.h>
#define size 5
int rear = -1, front = 0;
int arr[size];
void insert(int n)
{
	if (rear == size - 1)
	{
		printf("\n Overflow");
		return;
	}
	rear++;
	arr[rear] = n;
}
int Delete()
{
	if (rear < front)
	{
		printf("\n underflow");
		return 0;
	}
	int n = arr[front];
	front++;
	return n;
}
void show()
{
	int i;
	printf("\n Queue status:");
	for (i = front; i <= rear; i++)
	{
		printf("%4d", arr[i]);
	}
}
int main()
{
	int ch, n;
	while (1)
	{
		printf("\n1...insert \n2...delete \n0...exit\n");
		scanf("%d", &ch);
		switch (ch)
		{
		case 0:
			exit(0);
			break;
		case 1:
			printf("\n Enter the eliment:");
			scanf("%d", &n);
			insert(n);
			show();
			break;
		case 2:
			n = Delete();
			if (n != 0)
			{
				printf("deleted item=%d", n);
				show();
			}
			break;
		}
	}
}
