#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int s1=0,s2=0,s3=0;
int main(){
    int n; 
    scanf("%d",&n);
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
            s1++;
        else if(arr[i]<0)
            s2++;
        else
            s3++;
    }
     printf("%f\n%f\n%f",(double)s1/n,(double)s2/n,(double)s3/n)   ;
    return 0;
}
