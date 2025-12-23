//1. Write a menu driven program to generate Truth Table for the gates - AND, OR, XOR, and NOT for 2 variables.
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,j,k,ch;

    while(1)
    {
        printf("\n 1. AND gate \n");
        printf("\n 2. OR gate \n");
        printf("\n 3. XOR gate \n");
        printf("\n 4. NOT (x) \n ");
        printf("\n 5. NAND gate \n");
        printf("\n 6. NOR gate \n");
        printf("\n 7. implication(->) \n");
        printf("\n 8. Bi-implication(<->) \n");
        printf("\n 9. AND gate (3 var)");
        printf("\n 10. OR gate (3 var) ");
        printf("\n 11. XOR gate (3 var)");
        printf("\n 12. Exit");

        printf("\n Enter Your Choice : ");
        scanf("%d",&ch);

        switch(ch)
        {
        case 1:
            printf("\n AND gate \n");
            printf("\n\tX\tY\tX AND Y");
            for(i=0;i<=1;i++)
            {
                for(j=0;j<=1;j++)
                {
                    printf("\n\t%d\t%d\t%d",i,j,i&&j);
                }
            }
            break;
        case 2:
            printf("\n OR gate");
            printf("\n\tX\tY\tX OR Y");
            for(i=0;i<=1;i++)
            {
                for(j=0;j<=1;j++)
                {
                    printf("\n\t%d\t%d\t%d",i,j,i||j);
                }
            }
            break;
        case 3:
            printf("\n XOR gate");
            printf("\n\tX\tY\tX XOR Y");
            for(i=0;i<=1;i++)
            {
                for(j=0;j<=1;j++)
                {
                    printf("\n\t%d\t%d\t%d",i,j,i^j);
                }
            }
            break;
        case 4:
            printf("\n NOT gate");
            printf("\n\tX\tNOT X");
            for(i=0;i<=1;i++)
            {

                printf("\n\t%d\t%d",i,!i);

            }
            break;
        case 5:
            printf("\n NAND gate");
            printf("\n\tX\tY\tX NAND Y");
            for(i=0;i<=1;i++)
            {
                for(j=0;j<=1;j++)
                {
                    printf("\n\t%d\t%d\t%d",i,j,!(i&&j));
                }
            }
            break;
        case 6:
            printf("\n NOR gate");
            printf("\n\tX\tY\tX NOR Y");
            for(i=0;i<=1;i++)
            {
                for(j=0;j<=1;j++)
                {
                    printf("\n\t%d\t%d\t%d",i,j,!(i||j));
                }
            }
            break;
        case 7:
            printf("\n Implication gate");
            printf("\n\tX\tY\tX Implication Y");
            for(i=0;i<=1;i++)
            {
                for(j=0;j<=1;j++)
                {
                    printf("\n\t%d\t%d\t%d",i,j,!i||j);
                }
            }
            break;
        case 8:
            printf("\n Bi-Implication gate");
            printf("\n\tX\tY\tX Bi-Implication Y");
            for(i=0;i<=1;i++)
            {
                for(j=0;j<=1;j++)
                {
                    printf("\n\t%d\t%d\t%d",i,j,i==j);
                }
            }
            break;
        case 9:
            printf("\n AND gate (3 VAR)");
            printf("\n\tX\tY\tZ\tX AND Y AND Z");
            for(i=0;i<=1;i++)
            {
                for(j=0;j<=1;j++)
                {
                    for(k=0;k<=1;k++)
                    {
                        printf("\n\t%d\t%d\t%d\t%d",i,j,k,i&&j&&k);
                    }
                }
            }
            break;
        case 10:
            printf("\n OR gate (3 VAR)");
            printf("\n\tX\tY\tZ\tX OR Y OR Z");
            for(i=0;i<=1;i++)
            {
                for(j=0;j<=1;j++)
                {
                    for(k=0;k<=1;k++)
                    {
                        printf("\n\t%d\t%d\t%d\t%d",i,j,k,i||j||k);
                    }
                }
            }
            break;
        case 11:
            printf("\n XOR gate (3 VAR)");
            printf("\n\tX\tY\tZ\tX XOR Y OR Z");
            for(i=0;i<=1;i++)
            {
                for(j=0;j<=1;j++)
                {
                    for(k=0;k<=1;k++)
                    {
                        printf("\n\t%d\t%d\t%d\t%d",i,j,k,(i^j^k));
                    }
                }
            }
            break;
        case 12:
            printf("Byeeee....");
            exit(1);
            break;
        default:
            printf("Invalid Choice!!!...");
        }
    }
}
