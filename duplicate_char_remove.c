#include<stdio.h>
int main(){
	int i,j,index=0;
	char str[] = "abcabc";
	int len = sizeof(str);
	printf("len->%d\n",len);
	for(i=0; i<=len; i++){
		for(j=0; j<i; j++){
			if(str[i] == str[j])
				break;	
		}
		if(i == j)
			str[index++] = str[i];
	}
	printf("%s",str);	

}

