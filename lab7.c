//write a program in C that prints suffix and prefix of the given string
#include<stdio.h>
#include<string.h>
void find_pre(char str[]);
void find_suffix(char str[]);
int main(){
 char str[50];
 printf("Enter the string : ");
 gets(str);
 find_pre(str);
 find_suffix(str);
 return 0;
}

void find_pre(char s[])
{
    int i,j;
    char prefix[50];
    for(i=strlen(s);i>=0;i--)
    {
        for(j=0;j<i;j++)
        {
            prefix[j] = s[j];
        }
        prefix[j] = '\0';
        printf("prefix is : %s\n",prefix);
    }
}
void find_suffix(char s[])
{
    int i,j,k,m=0;
    char suffix[50];
    for(i=strlen(s);i>=0;i--)
    {
        for(j = m,k=0;j<strlen(s);j++,k++)
        {
            suffix[k] = s[j];
        }
        m++;
        suffix[k] = '\0';
        printf("suffix is : %s\n",suffix);
    }
}
