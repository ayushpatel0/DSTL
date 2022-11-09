#include<stdio.h>
#include<conio.h>

void main()
{
    int a[10],b[10],c[10],i,j,k=0,n1,n2;
    clrscr();
    // input for the set A
    printf("Enter the number of element in set A\n");
    scanf("%d",&n1);
    printf("Enter the elements \n");
    for(i = 0; i < n1; i++)
    scanf("%d",&a[i]);
    // input for the set B
    printf("Enter the number of element in set B \n");
    scanf("%d",&n2);
    printf("Enter the elements \n");
    for(i = 0; i < n2; i++)
    scanf("%d",&b[i]);
    // calculation for intersection
    for(i = 0; i < n1; i++)
    {
	for(j = 0; j < n2; j++)
	{
	    if(a[i]==b[j])
	    {
	     c[k]=a[i];
	     k++;
	     break;
	    }
	}
    }
    // printing the final result
    printf("Interection of set A and set B is:-\n");
    for(i = 0; i < k; i++)
    printf("%d ",c[i]);
    getch();
}