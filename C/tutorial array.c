// C Program to print Array
// of strings
#include <stdio.h>

// Driver code
int main()
{
    int i,key;
char *arr[]={"india","is","great"};
printf("String array Elements are:");

for (int i = 0; i < 3; i++)
{
	printf("%s\n", arr[i]);

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

}
return 0;
}
