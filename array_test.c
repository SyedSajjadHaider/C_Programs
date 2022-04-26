#include<stdio.h>
int main(){

    int arr[] = {5,1};
    fun1(arr[1]);
    printf("one %d\n",arr[1]);
    fun2(&arr[1]);
    printf("two %d\n",arr[1]);
}

void fun1(int a){
    a = a + 10;
}

void fun2(int *p){
    *p = *p + 3;
}
