#include <stdio.h>
#include <stdlib.h>
#define size 5
int arr[size];
int rear = -1, front = -1;
void insert(int n)
{
	if ((rear + 1) % size == front)
	{
		printf("\n Queue Overflow");
		return;
	}
	if (rear == -1)
	{
		rear = front = 0;
	}
	else if (rear == size - 1)
	{
		rear = 0;
	}
	else
	{
		rear = rear + 1;
	}
	arr[rear] = n;
}
int Delete()
{
	if (front == -1)
	{
		printf("\n Queue Underflow");
		return 0;
	}
	int n = arr[front];
	if (rear == front)
	{
		rear = front = -1;
	}
	else if (front == size - 1)
	{
		front = 0;
	}
	else
	{
		front = front + 1;
	}
	return n;
}
void show()
{
	int i;
	printf("\n Status:");
	if (rear != -1)
	{
		if (rear >= front)
		{
			for (i = front; i <= rear; i++)
			{
				printf("%4d", arr[i]);
			}
		}
		else
		{
			for (i = front; i < size; i++)
			{
				printf("%4d", arr[i]);
			}
			for (i = 0; i <= rear; i++)
			{
				printf("%4d", arr[i]);
			}
		}
	}
}
int main()
{
	int n, ch;
	while (1)
	{
		printf("\n1...insert\n2...delete\n0...exit");
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
