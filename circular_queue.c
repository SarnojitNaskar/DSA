#include<stdio.h>
void enqueue(int);
int dequeue();
void display();
int q[50], max, front=-1, rear=-1;

main()
{	int ch,a;
	printf("Enter The Size of The Queue : ");
	scanf("%d",&max);
	printf("\n\n---- Circular Queue Operations----\n");
	printf("1. Enqueue\n");
	printf("2. Dequeue\n");
	printf("3. Display\n");
	printf("4. Exit\n");

do
{
	printf("Enter your choice : ");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			printf("Enter a No. to insert : ");
			scanf("%d",&a);
			enqueue(a);
			break;
		case 2:
			a=dequeue();
			if(a!=-1)
				printf("The Deleted Element : %d\n",a);
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

void enqueue(int x){
	if((rear+1)%max==front){
		printf("Queue is Full.\n");
		return;
	}
	rear=(rear+1)%max;
	q[rear]=x;
	if(front==-1)
		front=0;
	printf("Inserted Element : %d\n",x);
}

int dequeue(){
	int x;
	if(front==-1 && rear==-1){
		printf("Queue is Empty.\n");
		return -1;
	}
	x=q[front];
	if(front==rear){
		front=-1;
		rear=-1;
	}
	else{
		front=(front+1)%max;
	}
	return x;
}

void display(){
	int i;
	if(front!=-1 && rear!=-1){
		printf("All Elements of The Queue : \n");
		if(front<=rear){
			for(i=front;i<=rear;i++){
				printf("%d\t",q[i]);
			}
		}
		else{
			for(i=front;i<max;i++){
				printf("%d\t",q[i]);
			}
			for(i=0;i<=rear;i++){
				printf("%d\t",q[i]);
			}
		}
	printf("\n");
	}else{
		printf("Queue is Empty.\n");
	}
}

