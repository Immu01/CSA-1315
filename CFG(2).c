#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("\nEnter the sting :>");
    scanf("%s",str);
    int l=strlen(str),ispalindorm=1,i;
    for(i=0;i<l/2;i++)
    {
        if(str[i] != str[l-i-1])
        {
            ispalindorm=0;
            break;
        }
    }
    if(ispalindorm)
    {
        printf("\nThe given string >> %s accepts the CFG pattern",str); 
    }
    else
    {
        printf("\nThe given string >> %s does not accepts the CFG pattern",str);
    }
}