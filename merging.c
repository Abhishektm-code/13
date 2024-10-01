#include<stdio.h>
int main()
{
    int a[20];
    int b[20];
    int asize,bsize,csize;
    int i=0,j=0;

    printf("enter the a of array size\n");
    scanf("%d",&asize);
    printf("a of array elements are\n");
    for(i=0;i<asize;i++)
    {
        scanf("%d",&a[i]);
    }



    printf("enter the b of array size\n");
    scanf("%d",&bsize);
    printf("b of array elements are\n");
    for(i=0;i<bsize;i++)
    {
        scanf("%d",&b[i]);
    }
    j=0;
    for(i=asize;i<(asize + bsize);i++)
    {
        a[i]=b[j];
        j++;
    }
    printf("after merger array a \n");
    for(i=0;i<(asize + bsize);i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
