#include<stdio.h>
struct person
{
    char pname[20];
    char pid[20];
    int roll;
};
struct empy 
{
    char ename[20];
    char eid[20];
    int esalary;
    struct person p;
};
struct mngr
{
    char mname[20];
    char mid[20];
    int msalary;
    struct emp e;
}

