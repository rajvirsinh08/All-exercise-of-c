/*
8. Prove the following algebraic property of sets -
      a) (AUB) = (BUA)		- Commutative Law

*/
#include<stdio.h>
void main()
{
    int i,j,a[50],b[50],c[100],d[100],n1,n2,k=0,D=0,Commutative=1;
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
    //B Union A
    for(i=0;i<n2;i++)
    {
        d[D++]=b[i];
    }
    for(i=0;i<n1;i++)
    {
        if(found(b,n2,a[i])==0)
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
    printf("\n B Union U : ");
    for(i=0;i<D;i++)
    {
        printf("\t%d",d[i]);
    }
    //Commutative Law
    if(k!=D)
    {
        Commutative = 0;
    }
    else
    {
        for(i=0;i<k;i++)
        {
            if(found(d,D,c[i])==0)
            {
                Commutative = 0;
                break;
            }
        }
    }
    if(Commutative==1)
    {
        printf("\n\nCommutative Law PROVED: (A ∪ B) = (B ∪ A)\n");
    }
    else
    {
        printf("\n\nCommutative Law NOT PROVED\n");
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
