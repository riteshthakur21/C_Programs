/*#include<stdio.h>
struct stud s
{
    int roll,fee;
    char name[20], prog[10];
};
void main()
{
    struct stud s[5];
    int i;
    printf("\nEnter 5 record");
    for(i=0; i<5; i++)
    {
        printf("\nEnter roll no:");
        scanf("%d",&s[i].roll);
        printf("\nEnter your name and programe: ");
        scanf("%s%s",s[i].name,s[i].prog);
        printf("\nEnter your fee");
        scanf("%d",&s[i].fee);
    }
    for(i=0; i<5; i++)
    {
        printf("\nRoll:%d \nName:%s \nPrograme:%s \nName:%s",s[i].roll,s[i].name,s[i].prog,s[i].fee);
        printf("\n");
    }
    
}*/

#include<stdio.h>
struct stud
{
    int roll, fee;
    char name[20], prog[10];
};
void main()
{
    struct stud s[5];
    int i;
    printf("\nEnter 5 records");
    for(i=0; i<5; i++)
    {
        printf("\nEnter roll no: ");
        scanf("%d",&s[i].roll);
        printf("\nEnter your name and programme: ");
        scanf("%s%s",s[i].name, s[i].prog);
        printf("\nEnter your fee: ");
        scanf("%d",&s[i].fee);
    }
    for(i=0; i<5; i++)
    {
        printf("\nRoll: %d \nName: %s \nProgramme: %s \nFee: %d", s[i].roll, s[i].name, s[i].prog, s[i].fee);
        printf("\n");
    }
}