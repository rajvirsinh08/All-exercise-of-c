// b) (AՈB)' = A'UB'		- DeMorgan's Law
#include<stdio.h>
void main()
{
    int i,j,a[50],b[50],n1,n2,u[100],u1,d[100],D=0,lhs[100],l=0,demorgan=1;
    //rhs variable
    int A[100],B[100],ac=0,bc=0,AUB[100],aub=0;
    printf("\n Enter No of element to add on Universal Set : ");
    scanf("%d",&u1);
    for(i=0;i<u1;i++)
    {
        scanf("%d",&u[i]);
    }
    printf("Enter a total No of Element in set A : ");
    scanf("%d",&n1);
    printf("\n Enter Elements in Set A : \n");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter a total No of Element in set B : ");
    scanf("%d",&n2);
    printf("\n Enter Elements in Set B : \n");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }
    //Intersection
    for(i=0;i<n1;i++)
    {
        if(found(b,n2,a[i])==1)
            d[D++]=a[i];
    }
    //lhs
    //universal set - Intersection  : (AՈB)' = U −  A ∩ B
    for(i=0;i<u1;i++)
    {
        if(found(d,D,u[i])==0)
        {
            lhs[l++]=u[i];
        }

    }
    //rhs
    //A`
    for(i=0;i<u1;i++)
    {
        if(found(a,n1,u[i])==0)
            A[ac++] = u[i];
    }
    //b`
    for(i=0;i<u1;i++)
    {
        if(found(b,n2,u[i])==0)
            B[bc++] = u[i];
    }
     // A` union B` = RHS
    for(i=0;i<ac;i++)
    {
        AUB[aub++]=A[i];
    }
    for(i=0;i<bc;i++)
    {
        if(found(A,ac,B[i])==0)
            AUB[aub++]=B[i];
    }
    printf("\n Universal Set : ");
    for(i=0;i<u1;i++)
    {
        printf("\t%d",u[i]);
    }

    printf("\n SET A : ");
    for(i=0;i<n1;i++)
    {
        printf("\t%d",a[i]);
    }
    printf("\n SET B : ");
    for(i=0;i<n2;i++)
    {
        printf("\t%d",b[i]);
    }
    printf("\n A Intersection B : ");
    for(i=0;i<D;i++)
    {
        printf("\t%d",d[i]);
    }
    printf("\n LHS ( (A ∩ B)' ): ");
    for(i=0;i<l;i++)
    {
        printf("\t%d",lhs[i]);
    }
    printf("\n A` : ");
    for(i=0;i<ac;i++)
    {
        printf("\t%d",A[i]);
    }
    printf("\n B` : ");
    for(i=0;i<bc;i++)
    {
        printf("\t%d",B[i]);
    }
    printf("\n RHS ( A' ∪ B' ): ");
    for(i=0;i<aub;i++)
    {
        printf("\t%d",AUB[i]);
    }
    if(aub != l)
    {
        demorgan = 0;
    }
    else
    {
        for(i=0;i<aub;i++)
        {
            if(lhs,l,AUB[i]==0)
            {
                demorgan = 0;
                break;
            }
        }
    }
    if(demorgan)
    {
        printf("\n\n DeMorgan’s Law proved. ");
    }
    else
    {
        printf("\n\n DeMorgan’s Law NOT Proved");
    }

}
int found(int a[], int size, int ele)
{
    int i;
    for(i=0;i<size;i++)
    {
        if(a[i]==ele)
            return 1;
    }
    return 0;
}
