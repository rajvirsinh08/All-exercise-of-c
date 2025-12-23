//Prove the addition principle of set theory.  n(AUB) = n(A)+n(B)-n(AՈB)
#include<stdio.h>
void main()
{
    int a[50], b[50], c[100], d[100],i,j,k=0,D=0,n1,n2,lhs=0,rhs=0;
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
    //A Union  B
    for(i=0;i<n1;i++)
    {
        c[k++]=a[i];
    }
    for(i=0;i<n2;i++)
    {
        if(found(a,n1,b[i])==0)
            c[k++]=b[i];
    }
    // A Intersection B
    for(i=0;i<n1;i++)
    {
        if(found(b,n2,a[i])==1)
            d[D++]=a[i];
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
    printf("\n A Union B : ");
    for(i=0;i<k;i++)
    {
        printf("\t%d",c[i]);
    }
    printf("\n A Intersection B : ");
    for(i=0;i<D;i++)
    {
        printf("\t%d",d[i]);
    }
    //prove Addition principal
    lhs = k;
    rhs = n1+n2-D;
    printf("\n LHS : %d",lhs);
    printf("\n RHS : %d",rhs);
    if(lhs==rhs)
    {
        printf("\n Proved the addition principle of set theory");
    }
    else
    {
        printf("\n Not Prove the addition principle of set theory");
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