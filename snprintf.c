#include<stdio.h>
int main(){
    /* unsafe sprintf buffer override*/
    /* writes all 8+1(\0 ) characters to buffer */
    char buf[2];
    int len = sprintf(buf,"%d",12345678);
    printf("%s\n",buf);
    printf("%d\n",len);
    /*---------snprintf-------*/
    /*can be use to convert interger to string format */
    /* writes  4+1(\0 ) characters to buffer */
    char buf2[10];
    int len2 = snprintf(buf2,5,"%d",12345678);

    printf("%s\n",buf2);
    printf("%d\n",len2);
}