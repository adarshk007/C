#include <ctype.h>
#include<stdio.h>

#include "str.h"

/* start implementing your functions here */


/* One is done for you */

int my_strncasecmp(const char *s1, const char *s2, int len)
{
	unsigned char c1, c2;

	if (!len)
		return 0;

	do {
		c1 = *s1++;
		c2 = *s2++;
		if (!c1 || !c2)
			break;
		if (c1 == c2)
			continue;
		c1 = tolower(c1);
		c2 = tolower(c2);
		if (c1 != c2)
			break;
	} while (--len);
	return (int)c1 - (int)c2;
}
char *strcpy(char *dest, const char *src){

/**
 * my_strncpy - Copy a length-limited, C-string
 * @dest: Where to copy the string to
 * @src: Where to copy the string from
 * @count: The maximum number of bytes to copy
 *
 * The result is not %NUL-terminated if the source exceeds
 * @count bytes.
 *
 * In the case where the length of @src is less than  that  of
 * count, the remainder of @dest will be padded with %NUL.
 *
 */
	int i;
	for(i=0;src[i]!= '\0';++i){
 	dest[i]=src[i];
}
	return(dest);
}

char *my_strncpy(char *dest, const char *src, int count){

/**
 * strcat - Append one %NUL-terminated string to another
 * @dest: The string to be appended to
 * @src: The string to append to it
 */
	int i;
	for(i=0;(src[i]!= '\0' && i<count);++i){
 	dest[i]=src[i];
}
	return(dest);
 
 
}
char *strcat(char *dest, const char *src)

/**
 * my_strncat - Append a length-limited, C-string to another
 * @dest: The string to be appended to
 * @src: The string to append to it
 * @count: The maximum numbers of bytes to copy
 *
 * Note that in contrast to strncpy(), strncat() ensures the result is
 * terminated.
 */
{
int i;
int d=my_strlen(dest);
for(i=0;src[i]!='\0';++i){

dest[d+i]=src[i];
}
return(dest);

}

char *my_strncat(char *dest, const char *src, int count)

/**
 * strcmp - Compare two strings
 * @cs: One string
 * @ct: Another string
 */
{
int i;
int d=my_strlen(dest);
for(i=0;i<=count;i++){
	dest[d+i]=src[i];
}
return(dest);
}
int strcmp(const char *cs, const char *ct)

/**
 * my_strncmp - Compare two length-limited strings
 * @cs: One string
 * @ct: Another string
 * @count: The maximum number of bytes to compare
 */
{
	
 do{
        cs++;
		ct++;
 }while(*cs && (*cs==*ct));
int j=*(const unsigned char*)cs;
int p=*(const unsigned char*)ct; 
    return j-p;



}
int my_strncmp(const char *cs, const char *ct, int count)

/**
 * strchr - Find the first occurrence of a character in a string
 * @s: The string to be searched
 * @c: The character to search for
 */
{
	count=count+1;
do{
    if(*s1++!=*s2++)
		int j=*(const unsigned char*)(cs-1);
		int p=*(const unsigned char*)(ct-1); 
         return j-p;
    
	count=count-1;
}while(n);
return 0;

}
char *strchr(const char *s, int c){

/**
 * strchrnul - Find and return a character in a string, or end of string
 * @s: The string to be searched
 * @c: The character to search for
 *
 * Returns pointer to first occurrence of 'c' in s. If c is not found, then
 * return a pointer to the null byte at the end of s.
 */
  const char n= (char)c;
  int j=0;
  for(j;s[j]!='\0';++j){
	  if(s[j]!=n){
		  *++s;
	  }
	  else{
		  *++s;
		  break;
	  }
  }
    return (char *)s;
 
 
}
char *strchrnul(const char *s, int c);

/**
 * strrchr - Find the last occurrence of a character in a string
 * @s: The string to be searched
 * @c: The character to search for
 */
char *strrchr(const char *s, int c){

/**
 * strnchr - Find a character in a length limited string
 * @s: The string to be searched
 * @count: The number of characters to be searched
 * @c: The character to search for


*/
char n= (char)c;
char* pointer=0;
while(*++s){
        if( *s==n ){
		pointer=s;}
    }
    return pointer;


}
char *strnchr(const char *s, int count, int c){

/**
 * skip_spaces - Removes leading whitespace from @str.
 * @str: The string to be stripped.
 *
 * Returns a pointer to the first non-whitespace character in @str.
 */
 unsigned char *p = strchr((unsigned char*)s,c);
 p++;
 return(p);
}
char *skip_spaces( char *str){
/**
 * strim - Removes leading and trailing whitespace from @s.
 * @s: The string to be stripped.
 *
 * Note that the first trailing whitespace is replaced with a %NUL-terminator
 * in the given string @s. Returns a pointer to the first non-whitespace
 * character in @s.
 */
char *new;
new=str;
char *old;
old=str;
int i=0;
while(str[i]!='\0'){
	if(str[i]!=' '){
		break;
	}
	else{
		i=i+1;
	}
}
int j=0;
for(j;str[j]!='\0';++j){
	new[j]=old[i+j];
}
return(new);

}
char *strim(char *s)

/**
 * my_strlen - Find the length of a string
 * @s: The string to be sized
 */{

s=skip_spaces(s);
int d=my_strlen(s);
char *new;
new=s;
int j=d;
int p=0;
for(j-1;j<-1;j--){
	if(s[j]==' '){
		p=p+1;
	}
	else{
		break;
	}
}
int i=d;
for(i-1;s[i]!='\0';i--){
	new[i]=s[i-p];
}
return(new);
}
int my_strlen(const char *s){

/**
 * strnlen - Find the length of a length-limited string
 * @s: The string to be sized
 * @count: The maximum number of bytes to search
 */
int i;
int size=0;
for(i=0;s[i]!='\0';++i){
  size=size+1;
}
return(size);
}
int strnlen(const char *s, int count)

/**
 * my_memset - Fill a region of memory with the given value
 * @s: Pointer to the start of the area.
 * @c: The byte to fill the area with
 * @count: The size of the area.
 *
 */{
int i=0;
while(s[i]!='\0'&& i<count){
	i=i+1;
}

return(i);


}
void *my_memset(void *s, int c, int count){
	
}
int main()
{
    char str1[30]= "awesome is good ";
    char str2[10]="";
    char str3[10]="well";
	char str4[10];
   
    int p=my_strlen("well");
	my_strncpy(str2,str1,5);
printf("%d",strcmp(str3,str1));

    return 0;
}
