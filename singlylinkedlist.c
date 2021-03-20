#include<stdio.h>
#include<stdlib.h>
void create();
void display();
int  delete_last();
void delete_at_pos();
void insert_at_pos(int);
struct node{
	int data;
	struct node *next;

}*start=NULL;

int main(){
	int ch,pos;
	while(1){
		printf("Enter choice\n1-create\n2-Display\n3-Delete last node\n4-Delete at pos\n5-Insert at pos\n6-exit\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				create();
				break;
			case 2:
				display();
				break;
			case 3:
				delete_last();
				break;
			case 4:
			       	printf("Enter pos\n");
				scanf("%d",&pos);
				delete_at_pos(pos);
				break;
			case 5:
				printf("Enter position\n");
				scanf("%d",&pos);
				insert_at_pos(pos);
				break;
			case 6:
				return 0;

			default:
				printf("choose option\n");
		
		}
		
	}
}

void create(){
	struct node *ptr = (struct node *)malloc(sizeof(struct node));
	printf("Enter data for given node\n");
	scanf("%d",&(ptr->data));
	if(start == NULL){
		// first node
		start = ptr;
		ptr->next =NULL;
	}else{
		struct node *temp;
		temp = start;
		while(temp->next != NULL){
			temp = temp->next;
			
		}
		temp->next = ptr;
		ptr->next = NULL;
	
	}	
		
}

void display(){
	if(start==NULL)
		return;
	struct node *temp=start;
	while(temp->next != NULL ){
		printf(" %d ",temp->data);
		temp = temp->next;
	}
	printf(" %d\n ",temp->data);
}

int delete_last(){
	struct node *temp = start;
	struct node *ptr;
	if(start == NULL){
		printf("Error No node\n");
		return 1;
	}else if(start->next == NULL){
		free(start);
		start =NULL;
	}else{
		while(temp->next->next != NULL){
		temp = temp->next;
		}
		ptr = temp->next;
		free(ptr);
		temp->next =NULL;
	}
}

void delete_at_pos(int pos){
	struct node *ptr,*tmp;
	int i;
	if(pos ==1){
		tmp =start;
		start = start->next;
		free(tmp);
	}
	else{
		ptr = start;
		for(i=1; i<pos-1 && ptr != NULL; i++ ){
			ptr = ptr->next;
		}
		if(ptr==NULL)
			printf("Enter valid position\n");
		else{
			tmp = ptr->next; 
			ptr->next = ptr->next->next;
			free(tmp);
		}
	
	
	}

}

void insert_at_pos(int pos){
	struct node *tmp,*ptr;
	int i;
	tmp = (struct node*)malloc(sizeof(struct node));
	tmp->data = 40;	
	if(pos == 1 ){
		tmp->next = start;
		start = tmp;
		return;
	}
	else{  
	       	ptr=start;
		for(i=1; i<pos-1 && ptr!=NULL; i++)
			ptr = ptr->next;
		if(ptr == NULL)
			printf("There are less than %d elements\n",pos);
		else{
			tmp->next=ptr->next;
			ptr->next=tmp;
		}
	}
}


