//Playing With Characters

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[20];
    char n[50];
    scanf("%c",&ch);
    scanf("%s",s);
    scanf("\n");
    scanf("%[^\n]%*c",n);
    
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s",n);
	
    return 0;
}