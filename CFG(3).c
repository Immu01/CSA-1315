#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100];
    printf("Enter the string: ");
    scanf("%s", str);
    int l = strlen(str);
    for (int i = 0; i < l; i++) 
    {
        if (str[i] != '0' && str[i] != '1') 
        {
            printf("\nString not valid");
            return 0;
        }
    }
    int count1 = 0, count2 = 0;
    int i = 0;
    while (str[i] == '0') {
        count1++;
        i++;
    }
    while (str[i] == '1') {
        i++;
    }
    while (str[i] == '0') {
        count2++;
        i++;
    }
    if (count1 == count2) {
        printf("\nThe given string >> %s accepts the CFG pattern",str);
    } else {
        printf("\nThe given string >> %s does not accepts the CFG pattern",str);
    }
}