#include<stdio.h>


struct student{

	unsigned a:2;

};

int main(){	
	struct student x;
	x.a =7;
	printf("%d",x.a);
}
