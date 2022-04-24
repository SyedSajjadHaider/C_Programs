#include<stdio.h>
int smallest_number(int arr[], int total);
int largest_number(int arr[], int total);

int main(){
    int result;
    int array[] = {12,56,78,43,90,32,88,5,7,9,3,4,100,2,200};
    int length = sizeof(array)/sizeof(int);
    
    result = smallest_number(array, length);
    printf("smallest = %d\n", result);
    result = largest_number(array, length);
    printf("largest = %d\n", result);
}

int smallest_number(int arr[], int total){
    int i, min;
    min = arr[0];
    for(i=0; i<total; i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    return min;
}

int largest_number(int arr[], int total){
    int i, max;
    max = arr[0];
    for(i=0; i<total; i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    return max;
}