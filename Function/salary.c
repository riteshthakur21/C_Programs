/*#include<stdio.h>

int *cal_sal(int bs[5])
{
    int i, da, hra, ma,gs, tax, ns[5];
    for(i=0; i<5; i++)
    {
        da=bs[i]*0.4;
        hra=bs[i]*0.25;
        ma=bs[i]*0.1;
        gs=bs[i]+da+hra+ma;
        if(gs>30000)
        tax=gs*0.4;
        else if((gs>=20000)&&(gs<30000))
        tax=gs*0.25;
        else if((gs>=15000)&&(gs<20000))
        tax=gs*0.1;
        else
        tax=0;
        ns[i]=gs-tax;
    }
    return ns;
}*/

#include <stdio.h>
#include <stdlib.h>  // Needed for malloc/free

int *cal_sal(int bs[5])
{
    int *ns = malloc(5 * sizeof(int));  // Allocate memory dynamically
    if (ns == NULL) {
        return NULL;  // Handle allocation failure
    }

    for(int i = 0; i < 5; i++)
    {
        int da = bs[i] * 0.4;
        int hra = bs[i] * 0.25;
        int ma = bs[i] * 0.1;
        int gs = bs[i] + da + hra + ma;
        int tax = 0;

        if(gs > 30000) {
            tax = gs * 0.4;
        } else if(gs >= 20000) {
            tax = gs * 0.25;
        } else if(gs >= 15000) {
            tax = gs * 0.1;
        }
        
        ns[i] = gs - tax;
    }
    return ns;
}

// Example usage in main:
int main()
{
    int salaries[5] = {25000, 18000, 35000, 22000, 14000};
    int *net_salaries = cal_sal(salaries);
    
    if(net_salaries != NULL) {
        for(int i = 0; i < 5; i++) {
            printf("Employee %d: %d\n", i+1, net_salaries[i]);
        }
        free(net_salaries);  // Remember to free allocated memory
    }
    return 0;
}