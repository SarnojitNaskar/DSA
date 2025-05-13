#include<stdio.h>
void push(int);
int pop();
void display();
int s[50], max, top=-1;

main()
{	int ch,a;
	printf("Enter The Size of The Stack : ");
	scanf("%d",&max);
	printf("\n\n---- Stack Operations----\n");
	printf("1. Push\n");
	printf("2. Pop\n");
	printf("3. Display the Stack.\n");
	printf("4. Exit\n");

do
{
	printf("Enter your choice : ");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			push(a);
			break;
		case 2:
			a=pop();
			if(a!=-1)
			printf("The Pop Element : %d\n",a);
			break;
		case 3:
			display();
			break;
		case 4:
			printf("Thank You");
			break;
		default:
			printf("Invalid Input.\n");
	}

}
while(ch!=4);
}

void push(int b){
	int a;
	if(top==max-1){
		printf("Stack is Full.\n");
	}
	else{
		printf("Enter a value for push : ");
		scanf("%d",&a);
		top++;
		s[top]=a;
		printf("The Push Element : %d\n",a);
	}
}

int pop(){
	int x;
	if(top==-1){
		printf("Stack is Empty.\n");
		return -1;
	}
	else{
		x=s[top];
		top--;
		return x;
	}
}

void display(){
	int i;
	printf("All Elements of The Stack : \n");
	for(i=0;i<=top;i++){
		printf("%d\t",s[i]);
	}
	printf("\n");
}

