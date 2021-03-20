#include<stdio.h>
int main(){
	
	volatile  int val=10;
	printf("val++=%d ++val=%d val++=%d\n",val++,++val,val++);
}
