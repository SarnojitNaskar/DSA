#include <stdio.h>
int deque[50];
int MAX, left = -1, right = -1;
void input_deque(void);
void output_deque(void);
void insert_left(void);
void insert_right(void);
void delete_left(void);
void delete_right(void);
void display(void);
int main(){
	int option;
	printf("Enter The Size of The Queue : ");
	scanf("%d",&MAX);
	printf("\n\n---- Deque Operations----\n");
	printf("1. Input restricted deque\n");
	printf("2. Output restricted deque\n");
	printf("3. Quit\n\n");
	printf("Enter your option : ");
	scanf("%d",&option);
	switch(option){
		case 1:
			input_deque();
			break;
		case 2:
			output_deque();
			break;
		case 3:
			printf("Thank You");
			break;
		default:
			printf("Invalid Input.\n");
	}
	return 0;
}

void input_deque(){
	int option;
	printf("INPUT RESTRICTED DEQUE\n");
	printf("1. Insert at right\n");
	printf("2. Delete from left\n");
	printf("3. Delete from right\n");
	printf("4. Display\n");
	printf("5. Quit\n\n");
	do{
		printf("Enter your option : ");
		scanf("%d",&option);
		switch(option){
			case 1:
				insert_right();
				break;
			case 2:
				delete_left();
				break;
			case 3:
				delete_right();
				break;
			case 4:
				display();
				break;
			case 5:
				printf("Thank You");
				break;
			default:
				printf("Invalid Input.\n");
		}
	}while(option!=5);
}

void output_deque(){
	int option;
	printf("OUTPUT RESTRICTED DEQUE\n");
	printf("1. Insert at right\n");
	printf("2. Insert at left\n");
	printf("3. Delete from left\n");
	printf("4. Display\n");
	printf("5. Quit\n\n");
	do{
		printf("Enter your option : ");
		scanf("%d",&option);
		switch(option){
			case 1:
				insert_right();
				break;
			case 2:
				insert_left();
				break;
			case 3:
				delete_left();
				break;
			case 4:
				display();
				break;
			case 5:
				printf("Thank You");
				break;
			default:
				printf("Invalid Input.\n");
		}
	}while(option!=5);
}

void insert_right(){
	int val;
	printf("Enter the value to be added :");
	scanf("%d", &val);
	if((left == 0 && right == MAX-1) || (left == right+1)){
		printf("Queue is Full.\n");
		return;
	}
	if (left == -1) /* if queue is initially empty */{
		left = 0;
		right = 0;
	}
	else{
		if(right == MAX-1) /*right is at last position of queue */
			right = 0;
		else
			right = right+1;
	}
	deque[right] = val ;
	printf("Inserted Element : %d\n", val);
}

void insert_left(){
	int val;
	printf("Enter the value to be added : ");
	scanf("%d", &val);
	if((left == 0 && right == MAX-1) || (left == right+1)){
		printf("Queue is Full.\n");
		return;
	}
	if (left == -1)/*If queue is initially empty*/{
		left = 0;
		right = 0;
	}
	else{
		if(left == 0)
			left=MAX-1;
		else
			left=left-1;
	}
	deque[left] = val;
	printf("Inserted Element : %d\n", val);
}

void delete_left(){
	if (left == -1){
		printf("Queue is Empty.\n");
		return ;
	}
	printf("The Deleted Element : %d\n", deque[left]);
	if(left == right) /*Queue has only one element */{
		left = -1;
		right = -1;
	}
	else{
		if(left == MAX-1)
			left = 0;
		else
			left = left+1;
	}
}

void delete_right(){
	if (left == -1){
		printf("Queue is Empty.\n");
		return ;
	}
	printf("The Deleted Element : %d\n", deque[right]);
	if(left == right) /*queue has only one element*/{
		left = -1;
		right = -1;
	}
	else{
		if(right == 0)
			right=MAX-1;
		else
			right=right-1;
	}
}

void display(){
	int front = left, rear = right;
	if(front == -1){
		printf("Queue is Empty.\n");
		return;
	}
	printf("All Elements of The Queue : \n");
	if(front <= rear ){
		while(front <= rear){
			printf("%d\t",deque[front]);
			front++;
		}
	}
	else{
		while(front <= MAX-1){
			printf("%d\t", deque[front]);
			front++;
		}
		front = 0;
		while(front <= rear){
			printf("%d\t",deque[front]);
			front++;
		}
	}
	printf("\n");
}

