#include<stdio.h>
#include<string.h>
char * my_itoa(int,char []);
int main(){
    char str[20] ="";
    printf("%s",my_itoa(123456789,str));
}
char * my_itoa(int num,char *buff){
    int i=0,digit;
    int temp =num;
    if (num ==0){
        buff[0] = num + '0';
        buff[1] = '\0';
    }
    else{
        while(temp !=0){            // count the digits
            temp = temp /10;
            i++;
        }
        buff[i] = '\0';             // set null after the last digit
        while(num !=0){             // fill digits in buffer
                i--; 
                digit = num % 10;
                buff[i] = digit + '0';

                num = num /10;
        }

    }
    return buff;

}