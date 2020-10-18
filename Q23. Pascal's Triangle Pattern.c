#include <stdio.h>

int main()
{
    int size,val=1,l,i,j;
    printf("enter no of rows: ");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        for(l=size;l>=i;l--)
        printf("  ");
        for(j=0;j<=i;j++)
        {
            if (j==0||i==0)
                val=1;
            else
               val=val*(i-j+1)/j;
            printf("% 4d",val);
        }
        printf("\n");
    }
}
