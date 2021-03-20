#include<stdio.h>
int main(){
	
	char str[] = "sajjadhaider";
	int len = sizeof(str)/sizeof(str[0]);
	char *ptr1 = str;
	char *ptr2 = str+len-2;
	char temp;
	while(ptr2 >= ptr1){
		temp =*ptr2;
		*ptr2 = *ptr1;
		*ptr1= temp;
		 ptr2--;
		 ptr1++;
	}

	printf("%s",str);
		
	
}
