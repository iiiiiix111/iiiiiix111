#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<stdint.h>
//i am tired
char* toLowerCase(char* s) {
    char* p = s;
    while (*p != '\0') {
        if (*p < 'Z'&&*p>'A')
            *p += 32;
        p++;
    }
    return p;
}
int addDigits(int num) {
    int n;
    do{
        n=0;
        while (num>0)
        {
            n+=(num%10);
            num/=10;
        }
        num=n;
    }while (n>=10);
    return n;

}


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    int* arr=(int*)malloc(numsSize*sizeof(int));
    int i;
    for ( i=0;i<n;i++)
    {
        arr[2*i]=nums[i];
        arr[2*i+1]=nums[i+n];
    }
    *returnSize=numsSize;
    return arr;
}
void show_array(int arr[],size_t s)
{
    for (size_t i=0;i<s;i++)
        printf("%d ",arr[i]);

}
float sum_elements(const float a[],unsigned length)
{
    float result=0;
    int i;
    for (i=0;i<length;i++)
        result+=a[i];
    return result;
}
int str_longer(char* s,char* t)
{
    return strlen(s)> strlen(t);
}
int copy_from_kernel(void* user_dest,size_t maxLen)
{
    printf("%zu",maxLen);
}
int uadd_ok(short x,short y)
{
    return y<x+y&&x<x+y;
}
int tadd_ok(int x,int y)
{
    int sum=x+y;
    if (x>0&&y>0)
        return sum>0;
    else if (x<0&&y<0)
        return sum<0;
    else
        return 1;
}
int tadd_ok_buggy(int x,int y)
{
    int sum=x+y;
    return (sum-x==y)&&(sum-y==x);
}
int tsub_ok(int x,int y)
{
    return tadd_ok(x,-y);
}
int tmult_ok(int x,int y)
{
    int64_t p=(int64_t) x*y;
    return p==(int)p;
}
int div16(int x)
{
    int bias=(x>>31)&0xF;
    printf("%d\n",bias);
    return (x+bias)>>4;
}
int test(int x)
{
    int a=(x>0);
    int b=(x-1<0);
    return (x>0)||(x-1<0);
}
int test1(int x)
{
    int a=((x&7)!=7);
    int b=(x<<29<0);
    return (x&7)!=7||(x<<29<0);
}
int test2(int x)
{
    int a=x*x;
    return (x*x)>=0;
}
int test3(int x)
{
    return (x<0)||(-x<=0);
}
int test4(int x)
{
    int a=(x>0);
    int b=(-x>=0);
    return (x>0)||(-x>=0);
}
int test5(int x,int y)
{
    unsigned ux=x;
    unsigned uy=y;
    return x+y==ux+uy;
}
int main()
{
    unsigned a=-2147483647-1U;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    //int *return_size= (int*) malloc(sizeof(int));
    //int *new_arr= shuffle(arr,10,5,return_size);
    //show_array(new_arr,*return_size);
    //free(new_arr);
   // free(return_size);
//    char* s="Hello";
//    char* t="Hi";
//    if (uadd_ok(3584292,400))
//        printf("Arguments can be added without overflow.\n");
//    else
//        printf("Arguments can't be added without overflow.\n");
//    printf("%d",(-8)%16);
//    if (tadd_ok(31323,31122))

/*
    if (tsub_ok(INT_MAX,INT_MIN+1))
        printf("Arguments can be subtracted without overflow.\n");
    else
        printf("Arguments can't be subtracted without overflow.\n");
*/
/*int x=INT_MIN;
int y=-x;
printf("%d",y);*/
    /*    printf("Arguments can be added without overflow.\n");
    else
        printf("Arguments can't be added without overflow.\n");
    *//*
    int x=-1;
    if (div16(x)==x/16)
        printf("Yes!\n");
    else
        printf("No.\n%d,%d", div16(x),x/16);*/
    int x=INT_MIN;
    int y=INT_MAX;
    if (test(x))
        printf("Yes!\n");
    else
        printf("No.\n");


    return 0;
}
