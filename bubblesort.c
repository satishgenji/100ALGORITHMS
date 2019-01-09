#include<stdio.h>
int bubblesort(int a[],int m)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i]<a[j])
            {
                int temp;
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    return a;
}
int main()
{
    int i,j,t,s;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&s);
        int a[s];
        for(i=0;i<s;i++)
        {
             scanf("%d",&a[i]);
        }
        bubblesort(a,s);
        for(i=0;i<s;i++)
        {
           printf("%d ",a[i]);
        }
        printf("\n");
    }
    return 0;
}
