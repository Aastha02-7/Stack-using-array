#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAXSIZE 10
void push();
int pop();
void traverse();
int stack[MAXSIZE];
int Top=-1;
int main()
{
	int choice;
	char ch;
	do
	{
		printf("\n1. Push");
		printf("\n2. Pop");
		printf("\n3. Traverse");
		printf("\nEnter your choice: ");
		scanf("%d",choice);
		switch(choice)
		{
			case 1:
				push();
				break;
			case2:
				printf("The deleted element is %d",pop());
				break;
			case 3:
				traverse();
				break;
			default:
				printf("You hav entered a wrong choice");
		}
		printf("\nDo you want to continue[Y/N]: ");
		fflush(stdin);
		scanf("%c",&ch);
	}
	while(ch=='Y'||ch=='y');
	return 0;
}
void push()
{
	int item;
	if(Top==MAXSIZE-1)
	{
		printf("\nStack is full");
		getch();
		exit(0);
	}
	else
	{
		printf("Enter the element to be inserted:");
		scanf("%d",&item);
		Top++;
		stack[Top]=item;
	}
}
int pop()
{
	int item;
	if(Top==-1)
	{
		printf("The stack is empty");
		getch();
		exit(0);
	}
	else
	{
		item=stack[Top];
		Top--;
	}
	return(item);
}
void traverse()
{
	int i;
	if(Top==-1)
	{
		printf("Stack is empty");
		getch();
		exit(0);
	}
	else
	{
		for(i=Top;i>=0;i--)
		{
			printf("Travese the element");
			printf("\n%d",stack[i]);
		}
	}
}
