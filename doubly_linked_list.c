#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct dnode{
	struct dnode *prev;
	int data;
	struct dnode *next;
};
void d_append(struct dnode**, int);
void d_display(struct dnode*);
void d_rdisplay(struct dnode*);
void d_add_beg(struct dnode**, int);
void d_add_any(struct dnode*, int, int);
int d_count(struct dnode*);
void d_del(struct dnode**, int);
int d_max(struct dnode*);
void d_odd_even(struct dnode*);

main(){
	int ch, no, loc;
	struct dnode *p;
	p=NULL;
	printf("\n----- Doubly Linked List Operations ----\n");
	printf("1. Append List\n");
	printf("2. Display List\n");
	printf("3. Display List in reverse order\n");
	printf("4. Add a node at the beginning\n");
	printf("5. Add a node after a given location\n");
	printf("6. Count no. of nodes\n");
	printf("7. Delete a node\n");
	printf("8. Maximun Value\n");
	printf("9. Odd-Even Count\n");
	printf("0. Exit\n");
	do{
		printf("Enter Your Choice : ");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				//printf("----- Append -----\n");
				printf("Enter a no. to append : ");
				scanf("%d", &no);
				d_append(&p, no);
				break;
			case 2:
				//printf("----- Display -----\n");
				d_display(p);
				break;
			case 3:
				//printf("----- Display in reverse order -----\n");
				d_rdisplay(p);
				break;
			case 4:
				//printf("----- Add at Beginning -----\n");
				printf("Enter a no. to add at beginning : ");
				scanf("%d", &no);
				d_add_beg(&p, no);
				break;
			case 5:
				//printf("----- Add after a given location -----\n");
				printf("Enter a no. to add after a given location : ");
				scanf("%d", &no);
				printf("Enter the location : ");
				scanf("%d", &loc);
				d_add_any(p, loc, no);
				break;
			case 6:
				printf("No. of nodes present in the list : %d\n", d_count(p));
				break;
			case 7:
				printf("Enter a node value to be deleted : ");
				scanf("%d", &no);
				d_del(&p, no);
				break;
			case 8:
				printf("The Maximum value stored in the list : %d\n", d_max(p));
				break;
			case 9:
				d_odd_even(p);
				break;
			case 0:
				printf("Thank You");
				break;
			default:
				printf("Invalid Choice\n");
		}
	}while(ch);
}

void d_append(struct dnode **q, int num){
	struct dnode *r, *temp;
	temp=*q;
	if(temp==NULL){	//create a new node
		*q=(struct dnode*)malloc(sizeof(struct dnode));
		(*q)->prev=NULL;
		(*q)->data=num;
		(*q)->next=NULL;
	}else{	//traverse the linked list till the last node is reached
		while(temp->next!=NULL)
			temp=temp->next;
		r=(struct dnode*)malloc(sizeof(struct dnode));
		r->data=num;
		r->next=NULL;
		r->prev=temp;
		temp->next=r;
	}
}

void d_display(struct dnode *q){
	while(q!=NULL){
		printf("%d\t",q->data);
		q=q->next;
	}
	printf("\n");
}

void d_rdisplay(struct dnode *q){
	while(q->next!=NULL)
		q=q->next;
	while(q!=NULL){
		printf("%d\t",q->data);
		q=q->prev;
	}
	printf("\n");
}

void d_add_beg(struct dnode **q, int num){
	struct dnode *temp;
	temp=(struct dnode*)malloc(sizeof(struct dnode));
	temp->data=num;
	temp->prev=NULL;
	temp->next=*q;
	if(*q!=NULL)
		(*q)->prev=temp;
	*q=temp;
}

void d_add_any(struct dnode *q, int loc, int num){
	struct dnode *temp;
	int i;
	for(i=0;i<loc-1-i;i++){
		q=q->next;
		if(q==NULL){
			return;
		}
	}
	temp=(struct dnode*)malloc(sizeof(struct dnode));
	temp->data=num;
	temp->prev=q;
	temp->next=q->next;
	q->next->prev=temp;
	q->next=temp;
}

int d_count(struct dnode *q){
	int c=0;	//traverse the entire list
	while(q!=NULL){
		q=q->next;
		c++;
	}
	return(c);
	printf("\n");
}

void d_del(struct dnode **q, int num){
	struct dnode *temp;
	temp=*q;
	while(temp!=NULL){	//traverse
		if(temp->data==num){	//check for data to be deleted
			if(temp==*q){	//check if it is the 1st node or not
				*q=temp->next;
				temp->next->prev=NULL;
			}else{	//check if it is the last node or not
				if(temp->next=NULL)
					temp->prev->next=NULL;
				else{	//check for intermediate node
					temp->prev->next=temp->next;
					temp->next->prev=temp->prev;
				}
			}
			free(temp);
			return;
		}
		temp=temp->next;
	}
	printf("Element is not found for Deletion\n");
}

int d_max(struct dnode *q){
	int m;
	m=q->data;
	q=q->next;
	while(q!=NULL){
		if(q->data > m)
			m=q->data;
		q=q->next;
	}
	return(m);
}

void d_odd_even(struct dnode *q){
	int odd=0, even=0;
	while(q!=NULL){
		if(q->data%2==0)
			even++;
		else
			odd++;
		q=q->next;
	}
	printf("No. of odds : %d\nNo. of evens : %d", odd, even);
	printf("\n");
}

