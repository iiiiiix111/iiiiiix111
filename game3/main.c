#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<stdint.h>
#include <stdbool.h>
#define POS_INFINITY 1.8e308+1;
#define NEG_INFINITY -1.8e308-1;
#define NEG_ZERO
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
int** transpose(int** matrix, int matrixSize, int* matrixColSize, int* returnSize, int** returnColumnSizes) {
    int** a= (int*) malloc(matrixSize*sizeof(int*));

}
unsigned replace_byte (unsigned x, int i, unsigned char b)
{
    return (x&~(0xFF<<(i<<3)))|b<<(i<<3);
}

void put(const char* c,char** p)
{
    for (int i=0;i< strlen(c);i++)
    {

    }
}
void judge(const char* c,const char* HashSet)
{

}
int maxScore(char* s) {
    int score=0;
    int max=0;
    size_t a= strlen(s);
    int left;
    if (s[0]=='0')
        left=1;
    else
        left=0;
    int right=0;
        for (int i=1;i<a;i++)
    {
            if (s[i]=='1')
                right++;
    }
        max=left+right;
        for (int i=1;i<a-1;i++)
        {
            if (s[i]=='0')
                left++;
            else
                right--;
            if (max<left+right)
                max=left+right;
        }
    return max;
}
int vowelStrings(char** words, int wordsSize, int left, int right) {
    int amount=0;
    char* s="aieou";
    char* HashSet[5]={NULL};
    put(s,HashSet);
    int flag=0;
    for (int i=left;i<=right;i++)
    {
        for (int j=0;j< strlen(words[i]);j++)
        {
            if (words[i][0]==s[j])
                flag++;
            if (words[i][strlen(words[i])-1]==s[j])
                flag++;
            if (flag==2)
                break;
        }
        if (flag==2)
            amount++;
        flag=0;
    }
    return amount;
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
int anyCase(int x)
{

    return !(~x)||!(x)
    ||!((~(x&0xFF))<<24)||!(x&(0xFF000000));

}
int main()
{
    int x=0x001111FF;
    int a=x&0xFF;
    //int result= anyCase(x);
    //printf("%d",result);
    int b=~(x&0xFF);
    printf("%x",b);
    return 0;
}
