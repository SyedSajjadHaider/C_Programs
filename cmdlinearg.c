#include<stdio.h>
int main(int argc ,char *argv[]){
	if(argc ==1)
		printf("No argument supplied by user");
	else
		printf("argument is %s",argv[1]);
	
}
