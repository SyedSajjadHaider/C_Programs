#include<stdlib.h>

char* pstrdup(const char*);
int main(){
    char source[]="Hello World";
    char *ptr = pstrdup(source);
    printf("%s",ptr);
    free(ptr);

}

char* pstrdup(const char *str){
    const char *temp = str;
    while(*temp != '\0')
        temp++;
    char *ptr=(char *)malloc(sizeof(temp-str));
    char *tptr = ptr;
    while((*ptr = *str)!='\0'){
        ptr++;
        str++;
    }
    return tptr;
}
