#include<stdio.h>
void bit_count();
void bit_count2();
int main(){

	int var =  0b10110011000110;
	bit_count2(var);
	printf("\n----------------\n");
	bit_count(var);
}

void bit_count(int var){
	int i,count_one=0,count_zero=0;
	for(i=31; i>=0; i--){
		if(var & (1<<i))
			count_one++;
		else
			count_zero++;
	}
	printf("one->%d\nzero->%d",count_one,count_zero);
}

void bit_count2(int var){
	int count_one=0,count_zero=0;
	while(var != 0){
		if(var % 2)
			count_one++;
		else
			count_zero++;
		var /= 2;		
	}
	printf("one->%d\nzero->%d",count_one,count_zero);


}
