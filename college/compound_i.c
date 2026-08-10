#include<stdio.h>
#include<conio.h>
#include<math.h>
/*void main()
{
    float p,r,t,CI,amount;
    //clrscr();
    printf("enter the principal amount: ");
    scanf("%f",&p);
    printf("enter the rate of interst(R in %%): ");
    scanf("%f",&r);
    printf("enter the time (t in years): ");
    scanf("%f",&t);

    amount = p * pow((1 + r/100),t);
    CI = amount -  p * pow((1 + r / 100), t);
    printf("\nThe compound interst is %2f ", CI);
    //return 0;
    
}*/
void main()
{
    float p,r,t,CI, amount;
    printf("enter the value of P, R and T( in year): ");
    scanf("%f%f%f", &p,&r,&t);
    amount = p *pow((1 + r/100), t);
    CI = amount - p;
    printf("\nthe compound interst is %2f", CI);
    printf("\nthe total Amount is %2f", amount);


}