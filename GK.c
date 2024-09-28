#include <stdio.h>

void Q1()
{
    printf("**************************************************\n");
    printf("* Date of Examination:\t 08/06/2024 \t\t *\n");
    printf("* Student name:\t\t Nguyen Minh Ngoc \t *\n");
    printf("* Student number:\t A24006 \t\t *\n");
    printf("* Batch:\t\t CP2496M01 \t\t *\n");
    printf("**************************************************\n");

}
float Q2(float P,float K)
{
    float TotalPayment;
    if(K <= 100)
    {
        TotalPayment = K * P;
    }
    else if(K > 100 && K <= 200)
    {
        TotalPayment = 100 * P + (K - 100) * (0.9 * P);
    }
    else if(K > 200 && K <= 300)
    {
        TotalPayment = 100 * P + 100 * (0.9 * P) + (K - 200) * (0.8 * P);
    }
    else if(K > 300)
    {
        TotalPayment = 100 * P + 100 * (0.9 * P) + 100 * (0.8 * P) + (K -300) * (0.75 * P);
    }
    else
    {
        printf("Erro!!!!");
    }
    return TotalPayment;
}
int main()
{
    //Question 1
    Q1();
    //Question 2
    float P,K;
    do
    {
        if(P < 0)
        {
            printf("\nInput again price\n");
        }
        printf("Input unit price: ");
        scanf("%f",&P);
    }
    while(P < 0);
    do
    {
        if(K < 0)
        {
            printf("\nInput again KWH consume\n");
        }
        printf("Input total kwh consume: ");
        scanf("%f",&K);
    }
    while(K < 0);

    printf("\nCostumer must pay is: %0.2f $",Q2(P,K));
}
