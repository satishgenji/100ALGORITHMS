#include<stdio.h>
int main()
{
    int t,s,i,j,k;                       //average and worst case time complexity = O(n^2)
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&s);
        int a[s];
        for(i=0;i<s;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=1;i<=s;i++)
        {
            k=a[i];
            j=i-1;
            while(j>=0 && a[j]>k)
            {
                a[j+1]=a[j];
                j=j-1;
            }
            a[j+1]=k;
        }
         for(i=0;i<s;i++)
        {
            printf("%d",a[i]);
        }
    }
    return 0;

}
