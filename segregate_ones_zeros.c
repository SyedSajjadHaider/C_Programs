#include<stdio.h>
int main(){
	int arr[] = {0,1,1,1,1,0,0,1};
	int size = sizeof(arr)/sizeof(int);
	segregate(arr, size);
	
}

void segregate(int arr[], int size){
	int i;
	int index = 0;
	int temp;
	for(i=0; i<size; i++){
		if( 0 ==  arr[i]){
			temp = arr[index];
			arr[index] = arr[i];
			arr[i] = temp; 
			index++;	
		}
	}
	
	for(i=0; i<size; i++){
		printf(" %d ",arr[i]);
	}
}
