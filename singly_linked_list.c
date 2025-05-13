#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
	int data;
	struct node *link;
};
void append(struct node**, int);
void display(struct node*);
void add_beg(struct node**, int);
void add_any(struct node*, int, int);
int count(struct node*);
void del(struct node**, int);
int max(struct node*);
void odd_even(struct node*);

main(){
	int ch, no, loc;
	struct node *p;
	p=NULL;
	printf("\n----- Linked List Operations ----\n");
	printf("1. Append List\n");
	printf("2. Display List\n");
	printf("3. Add a node at the beginning\n");
	printf("4. Add a node after a given location\n");
	printf("5. Count no. of nodes\n");
	printf("6. Delete a node\n");
	printf("7. Maximum Value\n");
	printf("8. Odd-Even Count\n");
	printf("0. Exit\n");
	do{
		printf("Enter Your Choice : ");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				//printf("----- Append -----\n");
				printf("Enter a no. to append : ");
				scanf("%d", &no);
				append(&p, no);
				break;
			case 2:
				//printf("----- Display -----\n");
				display(p);
				break;
			case 3:
				//printf("----- Add at Beginning -----\n");
				printf("Enter a no. to add at beginning : ");
				scanf("%d", &no);
				add_beg(&p, no);
				break;
			case 4:
				//printf("----- Add after a given location -----\n");
				printf("Enter a no. to add after a given location : ");
				scanf("%d", &no);
				printf("Enter the location : ");
				scanf("%d", &loc);
				add_any(p, loc, no);
				break;
			case 5:
				printf("No. of nodes present in the list : %d\n", count(p));
				break;
			case 6:
				printf("Enter a node value to be deleted : ");
				scanf("%d", &no);
				del(&p, no);
				break;
			case 7:
				no=max(p);
				printf("The Maximum value stored in the list : %d\n", no);
				break;
			case 8:
				odd_even(p);
				break;
			case 0:
				printf("Thank You");
				break;
			default:
				printf("Invalid Choice\n");
		}
	}while(ch);
}

void append(struct node **q, int num){
	struct node *temp, *r;
	if(*q==NULL){
		temp=(struct node*)malloc(sizeof(struct node));
		temp->data=num;
		temp->link=NULL;
		*q=temp;
	}else{
		temp=*q;
		while(temp->link!=NULL)
			temp=temp->link;
		r=(struct node*)malloc(sizeof(struct node));
		r->data=num;
		r->link=NULL;
		temp->link=r;
	}
}

void display(struct node *q){
	while(q!=NULL){
		printf("%d\t",q->data);
		q=q->link;
	}
	printf("\n");
}

void add_beg(struct node **q, int num){
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=num;
	temp->link=*q;
	*q=temp;
}

void add_any(struct node *q, int loc, int num){
	struct node *temp, *r;
	int i;
	temp=q;
	for(i=0;i<loc-1-i;i++){
		temp=temp->link;
		if(temp==NULL){
			return;
		}
	}
	r=(struct node*)malloc(sizeof(struct node));
	r->data=num;
	r->link=temp->link;
	temp->link=r;
}

int count(struct node *q){
	int c=0;
	while(q!=NULL){
		q=q->link;
		c++;
	}
	return(c);
	printf("\n");
}

void del(struct node **q, int num){
	struct node *old, *temp;
	temp=*q;
	while(temp!=NULL){	//traverse
		if(temp->data==num){	//check for data to be deleted
			if(temp==*q)	//check if it is the 1st node or not
				*q=temp->link;
			else
				old->link=temp->link;
			free(temp);
			return;
		}else{	//store the previous node to old and increment temp
			old=temp;
			temp=temp->link;
		}
	}
	printf("Element is not found for Deletion\n");
}

int max(struct node *q){
	int m;
	m=q->data;
	q=q->link;
	while(q!=NULL){
		if(q->data > m)
			m=q->data;
		q=q->link;
	}
	return(m);
}

void odd_even(struct node *q){
	int odd=0, even=0;
	while(q!=NULL){
		if(q->data%2==0)
			even++;
		else
			odd++;
		q=q->link;
	}
	printf("No. of odds : %d\nNo. of evens : %d", odd, even);
	printf("\n");
}

