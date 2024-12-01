#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include<stdint.h>
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {

    int* p=(int*)malloc(2*sizeof(int));
    int flag=1;
    for (int i=0;i<numsSize;i++)
    {
        if (nums[i]!=target&&!flag)
        {
            p[1]=i-1;
            break;
        }
        if (nums[i]==target&&flag==1)
        {
            flag=0;
            p[0]=i;
        }
    }
    return p;
}
int divide_power2(int x, int k)
{
    int w=32;
    int x_sign_mask=x>>(w-1);
    int op=(!k)>>(w-1);
    return ((((x&~x_sign_mask)|(((x<<k)-1)&x_sign_mask))>>k)&op)|(x&~op);
}
int mul3div4(int x) {
    return divide_power2((x << 2) - x, 2);
}
int threefourths(int x)
{
    return 3/(4*x);
}
int main()
{
   /* int nums[] = {5,7,7,8,8,10};
    int target = 8;
    int numSize=sizeof(nums)/sizeof(nums[0]);
    int* returnSize=NULL;
    int *p=searchRange(nums,numSize,target,returnSize);
    printf("%d %d",p[0],p[1]);*/
   int x=-12340;
   int y=x;
   int k=0;
    printf("%d %d",x>>k, divide_power2(y,k));
    return 0;
}