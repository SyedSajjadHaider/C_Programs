int pstrlen(char []);
char *pstrcpy(char *,const char *);
int pstrcmp(const char *,const char *);
char * pstrcat(char *,const char *);

        
int pstrlen(char *str){
	int i=0;
	while(*str!='\0')
		i++;
	return i;
	
}

char *pstrcpy(char *dest,const char *source){
	char *start = dest;
	while(*dest++ = *source++);
	return dest;
}


int pstrcmp(const char *s1,const char *s2){
	while(*s1 == *s2){
		if(*s1 == '\0' )
			return 0;
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}


char * pstrcat(char *dest,const char *source){
		char *start = dest;
		while(*dest != '\0'){
			dest++;
		}
		while(*dest++ = *source++);
		return start;
}


