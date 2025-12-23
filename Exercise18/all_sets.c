//Union , Intersect, A-B, B-A, Equal, A is subset of B? ,B is subset of A?, Symmetric Difference, Find A` and B`
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int n1,n2,a[50],b[50],i,k=0,c[100],ch,in=0,inte[100],ab[100],aa=0,bb=0,sy=0,syd[100],bs=0,bsuba[100],ba[100],isequal=1;
    int u[100],u1,ac[100],acc=0,bc[100],bcc=0,issubset=1;
    int found(int a[],int size, int ele);
    printf("\n Enter a number of elements to add on SET A : ");
    scanf("%d",&n1);
    printf("\n Enter elements : ");
    for (i=0; i<n1; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Enter a number of elements to add on SET B : ");
    scanf("%d",&n2);
    printf("\n Enter elements : ");
    for (i=0; i<n2; i++)
    {
        scanf("%d",&b[i]);
    }
    printf("\n Set A : ");
    for(i=0;i<n1;i++)
    {
        printf("\t%d",a[i]);
    }
    printf("\n Set B : ");
    for(i=0;i<n2;i++)
    {
        printf("\t%d",b[i]);
    }
    while(1)
    {
        printf("\n 1. Union ");
        printf("\n 2. Intersect ");
        printf("\n 3. B - A ");
        printf("\n 4. A - B ");
        printf("\n 5. Equal ? ");
        printf("\n 6. B is subset of A ? ");
        printf("\n 7. A is subset of B ? ");
        printf("\n 8. Symmetric Difference ");
        printf("\n 9. Find A` and B`");
        printf("\n 10. Exit ");

        printf("\n\n Enter Your choice : ");
        scanf("%d",&ch);

        switch(ch)
        {

        case 1:
                //union
                for(i=0;i<n1;i++)
                {
                    c[k++]=a[i];
                }
                printf("\n UNION : ");
                for(i=0;i<n2;i++)
                {
                    if(found(a,n1,b[i])==0)
                        c[k++]=b[i];
                }
                for(i=0;i<k;i++)
                {
                    printf("\t%d",c[i]);
                }
                break;

        case 2:
                //intersect
               printf("\n INTERSECT : ");
               for(i=0;i<n1;i++)
               {
                   if(found(b,n2,a[i])==1)
                        inte[in++]=a[i];
               }
                for(i=0;i<in;i++)
                {
                    printf("\t%d",inte[i]);
                }
                break;

        case 3:
                //B - A
                printf("\n B-A : ");
                for(i=0;i<n2;i++)
                {
                    if(found(a,n1,b[i])==0)
                        ab[aa++]=b[i];
                }
                for(i=0;i<aa;i++)
                {
                    printf("\t%d",ab[i]);
                }
                break;

        case 4:
                // A - B
                printf("\n A - B : ");
                for(i=0;i<n1 ;i++)
                {
                    if(found(b,n2,a[i])==0)
                        ba[bb++]=a[i];
                }
                for(i=0;i<bb;i++)
                {
                    printf("\t%d",ba[i]);
                }
                break;

        case 5:
                // Equal or not
                isequal = 1;
                if(n1!=n2)
                {
                    printf("Both sets are not equal ...");
                }
                else
                {
                    for(i=0;i<n1;i++)
                    {
                        if(found(b,n2,a[i])==0)
                        {
                            isequal=0;
                            break;
                        }
                        if(isequal == 0)break;
                    }
                }

                if(isequal)
                {
                    printf("\n Both sets are equal ");
                }
                else
                {
                    printf("\n Both sets are not equal ");
                }
                break;

        case 6:

            //B is subset of A
            issubset = 1;
            for(i=0;i<n2;i++)
            {
                if(found( a,n1 ,b[i])==0)
                {
                    issubset = 0;
                    break;
                }

            }

            if(issubset==0)
            {
                printf("\n B is not sub set of A ");
            }
            else
            {
                printf("\n B is sub set of A  ");
            }
            break;

        case 7:
            // A is subset of B
            issubset=1;

            for(i=0;i<n1;i++)
            {
                if(found( b,n2 ,a[i])==0)
                {
                    issubset = 0;
                    break;
                }

            }

            if(issubset==0)
            {
                printf("\n A is not sub set of B ");
            }
            else
            {
                printf("\n A is sub set of B  ");
            }
            break;

        case 8:
                //symmetric diff
                sy=0;
                for(i=0;i<n1;i++)
                    if(found(b,n2,a[i])==0)
                        syd[sy++] = a[i];

                for(i=0;i<n2;i++)
                    if(found(a,n1,b[i])==0)
                        syd[sy++] = b[i];
                printf("\n Symentric differebce : ");
                for(i=0;i<sy;i++)
                {
                    printf("\t%d",syd[i]);
                }
                break;
        case 9:
                //A`(complement) and  B`(complement)

                printf("\n Enter No of element to add on Universal Set : ");
                scanf("%d",&u1);
                for(i=0;i<u1;i++)
                {
                    scanf("%d",&u[i]);
                }
                printf("\n Universal Set : ");
                for(i=0;i<u1;i++)
                {
                    printf("\t%d",u[i]);
                }
                //(A` complyment)
                for(i=0;i<u1;i++)
                {
                    if(found(a,n1,u[i])==0)
                        ac[acc++]=u[i];
                }
                printf("\n A` is : ");
                for(i=0; i< acc;i++)
                {
                    printf("\t%d",ac[i]);
                }
                //(B` complement)
                for(i=0;i<u1;i++)
                {
                    if(found(b,n2,u[i])==0)
                        bc[bcc++]=u[i];
                }
                printf("\n B` is : ");
                for(i=0; i< acc;i++)
                {
                    printf("\t%d",bc[i]);
                }
                break;
        case 10:
            exit(1);



        }
    }
}

int found(int a[], int size, int ele)
{
    int i;
    for(i=0; i<size; i++)
    {
        if(a[i]==ele)
            return 1;
    }
    return 0;
}
