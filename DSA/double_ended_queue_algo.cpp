#include <stdio.h>
#include <stdlib.h>
#define size 5
int arr[size];
int rear = -1, front = -1;
void insert_left(int n)
{
	if ((front == 0 && rear == size - 1) || (front == rear + 1))
	{
		printf("\n Queue overflow");
		return;
	}
	if (front == -1)
	{
		rear = front = 0;
	}
	else if (front == 0)
	{
		front = size - 1;
	}
	else
	{
		front = front - 1;
	}
	arr[front] = n;
}
void insert_right(int n)
{
	if ((front == 0 && rear == size - 1) || (front == rear + 1))
	{
		printf("\n Queue overflow");
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
int del_left()
{
	if (front == -1 && rear == -1)
	{
		printf("\n queue underflow");
		return -1;
	}
	int n = arr[front];
	if (front == rear)
	{
		rear = front = -1;
	}
	else
	{
		front = (front + 1) % size;
	}
	return n;
}
int del_right()
{
	if (front == -1 && rear == -1)
	{
		printf("\n queue underflow");
		return -1;
	}
	int n = arr[front];
	if (rear == front)
	{
		rear = front = -1;
	}
	else if (rear == 0)
	{
		rear = size - 1;
	}
	else
	{
		rear = rear - 1;
	}
	return n;
}
void display()
{
	int i = front;
	if (front == -1)
	{
		printf("\n Queue is empty");
		return;
	}
	printf("\n Elements in a deque are:");
	while (i != rear)
	{
		printf("%4d", arr[i]);
		i = (i + 1) % size;
	}
	printf("%4d", arr[rear]);
}
int main()
{
	int c, n;
	while (1)
	{
		printf("\n1... Insert at left");
		printf("\n2... Insert at right");
		printf("\n3... Delete from left");
		printf("\n4... Delete from right");
		printf("\n5... Exit");
		printf("\n Enter your choice:");
		scanf("%d", &c);
		switch (c)
		{
		case 1:
			printf("Enter the value to insert at left: ");
			scanf("%d", &n);
			insert_left(n);
			display();
			break;
		case 2:
			printf("Enter the value to insert at right: ");
			scanf("%d", &n);
			insert_right(n);
			display();
			break;
		case 3:
			n = del_left();
			if (n != -1)
			{
				printf("\n Deleted value from left=%d", n);
				display();
			}
			break;
		case 4:
			n = del_right();
			if (n != -1)
			{
				printf("\n Deleted value from right=%d", n);
				display();
			}
			break;
		case 5:
			exit(0);
		}
	}
}
