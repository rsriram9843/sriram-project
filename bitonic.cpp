// Online C compiler to run C program online
#include <stdio.h>

int main() 
{
    int n,arr[n];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",arr[i]);
        }
    }
    for(int i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            printf("%d\n",arr[i]);
        }
        
    }
    	

}
    
