#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k,cnt,f;
    char str[100];
    printf("\nEnter a string: ");
    scanf("%s",&i);
   // get(str);
    for(i=0,j=0,cnt=0; str[i]!='\0'; i++)
    {
        if str[i==32]
        {
            f=0;
            for(k=i-1; j=k; k--,j++)
            {
                if(str[j]!=str[k])
                {
                    f=1;
                    break;
                }
            }
            if(f==0)
            cnt++;
            j=i+1;
        }
    }
    f=0;
    k=i-1;
    while((str[j]!='\0')||(j<=k))
    {
        if(str[j]!=str[k])
        {
            f=1;
            break;
        }
        j++;
        k--;
    }
    if(f==0)
    cnt++;
    printf("\nCount is %d",cnt);
    getch();
}