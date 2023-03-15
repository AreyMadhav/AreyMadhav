#include <stdio.h>
#include <conio.h>


int main()
{
    int a[100],i,n,key;

    printf("\n Enter size of the  array(1-100): ");
    scanf("%d", &n);
    printf("Enter elements in array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
     printf("Enter the number to find in array: ");
    scanf("%d", &key);

    for(i=0; i<n; i++)
    {
        if(a[i]==key)
        {
			printf("Number found ");
            return 0;
        }

    }

	printf("Number  not  found");
}
