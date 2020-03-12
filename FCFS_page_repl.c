#include<stdio.h>
main()
{
int i,j,n,a[50],f,ph,pm,pg[50],flag,d=3;
    printf("enter the length of the Reference string:\n");
   scanf("%d",&n);
    printf("\n enter the reference string:\n");
    for(i=0;i<=3;i++)
    scanf("%d",&pg[i]);
    for(i=4;i<n;i++)
    scanf("%d",&a[i]);
    printf("\n enter the number of Frames:");
    scanf("%d",&f);
    pm=f;
	for(i=f;i<n;i++)
	{flag=0;
		for(j=0;j<=(f-1);j++)
		{
			if(a[i]!=pg[j])
			{
				flag++;
				if(flag==f)
				{
					d=(d+1)%f;
	                pm++;
	                pg[d]=a[i];
	                d++;
			    }
			}
		}
	}
	ph=n-pm;
	printf("page hit = %d  page miss =%d",pm,ph);
}
