#include<stdio.h>
#include<conio.h>

void main()
{
    int a[10],b[10],c[10],d[10],sy[100],i,j,k=0,m=0,n=0,l,n1,n2;
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
    // calculation for A-B
    for(i = 0; i < n1; i++)
    {
	for(j = 0; j < n2; j++)
	{
	    if(b[j]==a[i])
	     break;
	}
	if(j==n2)
	{
	    //
	    for(l = 0; l < k; l++)
	    {
	    if(c[l]==a[i])
	     break;
	    }
	    if(l==k)
	    {
	    c[k]=a[i];
	    k++;
	    }
	}
    }
    // calculation for B-A
    for(i = 0; i < n2; i++)
    {
	for(j = 0;j < n1; j++)
	{
	    if(b[i]==a[j])
	     break;
	}
	if(j==n1)
	{
	    for(l = 0; l < m; l++)
	    {
		if(d[l]==b[i])
		 break;
	    }
	    if(l==m)
	    {
		d[m]=b[i];
		m++;
	    }
	}
    }
    // printing the final results
    for(i = 0; i < k; i++)
    {
	sy[n]=c[i];
	n++;
    }
    for(i = 0; i < m; i++)
    {
	sy[n]=d[i];
	n++;
    }
    printf("Symmetric Difference of set A and set B is:\n");
    for(i = 0; i < n; i++)
	printf("%d ",sy[i]);
    getch();
    }