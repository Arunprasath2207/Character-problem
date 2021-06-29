#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int l,i;
    char ar[100];
    printf("Enter the word:\n");
    scanf("%[^\n]s",a);
    l=strlen(a);
    int j=0;
    for(i=0;i<l;i++)
    {
        if(a[i] == ' ')
        {
            ar[j++] = a[i-1];

        }
        if(i == l-1)
        {

            ar[j++] = a[i];
        }
    }
    char temp;
    for(i=0;i<j;i=i+2)
    {
        if((ar[i]>='a' && ar[i]<='z') && (ar[i+1]>='a' && ar[i]<='z'))
           {
               temp = ar[i];
               ar[i]=ar[i+1];
               ar[i+1]=temp;
           }
    }
    for(i=0;i<j;i++)
    {
        printf("%c",ar[i]);
    }

}







