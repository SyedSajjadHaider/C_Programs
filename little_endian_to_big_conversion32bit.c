#include<stdio.h>
int main(){
	int var = 0X12345678;
	var =  ((0X000000FF & var)<<24)|
	       ((0X0000FF00 & var)<<8) |
	       ((0X00FF0000 & var)>>8)|
               ((0XFF000000 & var)>>24);
	printf("%x",var);

}
