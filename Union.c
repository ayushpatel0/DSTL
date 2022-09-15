#include<stdio.h>
#include<conio.h>

void main()
{
    int a[10],b[10],c[10],i,j,k=0,n1,n2;
    // input for the set A
    printf("Enter the number of element in set A\n");
    scanf("%d",%n1);
    printf("Enter the elements");
    for(i=0;i<n1;i++)
    scanf("%d",&a[i]);
    // input for the set B
    printf("Enter the number of element in set B");
    scanf("%d",&n2);
    printf("Enter the elements");
    for(i=0;i<n2;i++)
    scanf("%d",&b[i]);
    // calculation for union
    // copy the element of set A in set c
    for(i=0;i<n1;i++)
    {
        // repeated element is not allowed so we check
        for(j=0;j<k;J++)
        {
            if(c[j]==a[i])
            break;
        }
        if (j==k)
        // if not repeated then store it
        {
            c[k]=a[i];
            k++;
        }
        
    }
    // copy the element of set B in set C
    for ( i = 0; i < n2; i++)
    {
        // repeated element is not allowed so we check
        for ( j = 0; j < k; j++)
        {
            if(c[j]==a[i])
            break;
        }
        if(j==k)
        // if not repeated then store it
        {
            c[k=a[i]];
            k++;
        }
    }
    // printing the union of set A and set B
    printf("union of set A and set B is:-\n");
    for(i=0;i<k;i++)
    printf("%d,",c[i]);   
}