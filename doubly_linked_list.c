#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void delete_at_pos();
void display_reverse();
struct node {
	
	int data;
	struct node *prev;
	struct node *next;
	
}*start=NULL;
int main(){
	
	int ch;
	while(1){
		printf("Enter choice\n1-create\n2-Display\n3-exit\n4-Delete at position\nReverse\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				create();
				break;
			case 2:
				display();
				break;
			case 3:
				exit(0);
				break;
			case 4: 
				delete_at_pos();
				break;
			case 5:
				display_reverse();
				break;
		}	
	}
}

void create(){
	
	struct node *tmp = (struct node *)malloc(sizeof(struct node));
	struct node *ptr;
	printf("Enter data\n");
	scanf("%d",&tmp->data);
	if(start == NULL){
		start = tmp;
		tmp->prev = NULL;
		tmp->next = NULL;
	}else{
		ptr=start;
		while(ptr->next != NULL)
			ptr=ptr->next;
		tmp->next = NULL;
		ptr->next = tmp;
		tmp->prev = ptr;
	}
}

void display(){
	if(start == NULL)
		return;
	struct node *ptr=start;
	while(ptr->next != NULL){
		printf(" %d ",ptr->data);
		ptr=ptr->next;
	}
	printf(" %d\n ",ptr->data);

}
void delete_at_pos(){
	int pos,i;
	struct node *tmp;
	struct node *ptr=start;
	printf("Enter position\n");
	scanf("%d",&pos);
	if(start == NULL)
		return;
	if(pos == 1){
		tmp = start;
		free(tmp);
	        start->prev = NULL;
		start= start->next;
	}
	else{
		for(i=1; i<pos-1 && ptr!=NULL; i++)
			ptr=ptr->next;
		if(ptr == NULL || pos == 0)
			return;
		else{
			tmp = ptr->next;
			ptr->next = ptr->next->next;
			ptr->prev = ptr->next->prev;
			free(tmp);
		}
	}
}

void display_reverse(){

	// first while loop can be avoided if we use a pointer which point to last node 
	struct node *tmp,*ptr=start;
	if(start == NULL)
		return;
	while(ptr->next != NULL)
		ptr = ptr->next;
	tmp = ptr;
	while(tmp->prev != NULL){
		printf(" %d ",tmp->data);
		tmp = tmp->prev;
	}
	printf(" %d ",tmp->data);
}
