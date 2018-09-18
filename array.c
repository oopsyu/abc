#include<stdio.h>
int main()
{

    int n,seach,a[10],i;
    printf("Enter the  number of elements\n");
    scanf("%d",&n);
    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        printf("Enter the number to be searched\n");
        scanf("%d",&seach);
        if(search==n)
        {
            printf("The search element is:%d",seach,a[i]);

        }
        else
            printf("The element is not found",seach);

}
