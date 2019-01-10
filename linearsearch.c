#include<stdio.h>
void linearsearch(int* a,int key,int s)
{
    int k=0;
    for(int i=0;i<s;i++)
    {
        if(a[i]== key)
        {
            k=1;
            printf("ELEMENT FOUND\n");
            break;
        }
    }
    if(k==0)
    {
     printf("ELEMENT NOT FOUND\n");
    }

}
int main()
{
    int i,s,t,key;
    printf("ENTER NO.OF ELEMENTS YOU WANT TO SEARCH:");
    scanf("%d",&t);
    printf("ENTER SIZE OF THE ARRAY:");
    scanf("%d",&s);
    int a[s];
    printf("ENTER ARRAY ELEMENTS:\n");
    for(i=0;i<s;i++)
    {
        scanf("%d",&a[i]);
    }
    while(t--)
    {

        printf("ENTER YOU WANT TO SEARCH: ");
        scanf("%d",&key);
        linearsearch(a,key,s);
    }
    return 0;

}
