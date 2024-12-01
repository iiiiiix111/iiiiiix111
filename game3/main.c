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
int int_shifts_are_arithmetic(int x)
{
    size_t d=(sizeof(int)-1)<<3;
    return (x>>d)&0xF0000000
         ||((x>>d)&0xF0000000)==0;
}
unsigned srl(unsigned x, int k) {
    /* Perform shift arithmetically */
    unsigned xsra = (int) x >> k;
    unsigned xsrl= x>>k;
    printf("%X\n%X",xsrl,(int)xsra+(1<<(sizeof(int)*8-k)));
    return (int)xsra+(1<<(sizeof(int)*8-k));
}
int sra(int x, int k) {/* Perform shift logically */
    int xsrl = (unsigned) x >> k;
    unsigned xsra= (int) x>>k;
    printf("%X\n%X",xsra,xsrl-((1<<(sizeof(int)*8-k))));
    return xsrl-((1<<(sizeof(int)*8-k)));
}
/* Return 1 when any odd bit of x equals 1; 0 otherwise. Assume w=32 */
int any_odd_one(unsigned x)
{
    printf("%X",x);
    printf("\n%X\n",x>>1);
    return (x|(x>>1))==0xFFFFFFFF;
}
/* Return 1 when x contains an odd number of Is; 0 otherwise. Assume w=32 */
int odd_ones(unsigned x)
{

}
/** Generate mask indicating leftmost 1 in x. Assume w=32.
 * * For example, OxFFOO ~> 0x8000, and 0x6600 --> 0x4000.
 * * If x = 0, then return 0.*/
int leftmost_one(unsigned x)
{

}
/* The following code does not properly on some machines*/
int bad_int_size_is_32() {
    /* Set most significant bit (msb) of 32-bit machine */
    int set_msb = 1 << 31;/* Shift past msb of 32-bit word */
    int beyond_msb = 1 << 15;
/*1 run2 3 5 6 7 set_msb is nonzero when word size >= 32
 *   beyond_msb is zero when word size <= 32 */
    return set_msb && !beyond_msb;
}
/** Mask with least signficant n bits set to 1 *
 * Examples: n= 6 —> 0x3F, n = 17 —> OxlFFFF *
 * Assume 1 <= n <= w  */
int lower_one_mask(int n)
{
    unsigned int x=0xFFFFFFFF;
    return x>>(32-n);

}
unsigned rotate_left(unsigned x, int n)
{
    unsigned s=x<<n;
    unsigned p=x>>(32-n);
    unsigned result=s|p;
    return result;
}
int fits_bits(int x, int n)
{
    unsigned x1=x;
    unsigned x2=0xFFFFFFFF;
    unsigned x3=x2>>(32-n);
    unsigned result=x1|x3;
    return !(result>>n)||(n==32);
}
/* Declaration of data type where 4 bytes are packed into an unsigned
*/ typedef unsigned packed_t;
/* Extract byte from word. Return as signed integer */
int xbyte(packed_t word, int bytenum)
{
    return (int)(word<<((3-bytenum)<<3))>>(3<<3);
}
/* Copy integer into buffer if space is available */
/* WARNING: The following code is buggy */
void copy_int(int val, void *buf, int maxbytes)
{
    if ((int)(maxbytes-(int)sizeof(val)) >= 0)
        memcpy(buf , (void*) &val, sizeof(val));
}
/* Addition that saturates to TMin or TMax */
int saturating_add(int x, int y)
{
    int w=32;
    int TMin=1<<(w-1);
    int TMax=TMin-1;
    int x_mask_sign=x>>(w-1);
    int y_mask_sign=y>>(w-1);
    int sum=x+y;
    int sum_mask_sign=sum>>(w-1);
    int posi_over=(~x_mask_sign)&(~y_mask_sign)&(sum_mask_sign);
    int nege_over=(x_mask_sign)&(y_mask_sign)&(~sum_mask_sign);
    int normal=(~posi_over)|(~nege_over);
    return (posi_over&TMax)|(nege_over&TMin)|(normal&sum);
}
/* Determine whether arguments can be subtracted without overflow */
int tsub_ok_s(int x, int y)
{
    int w=32;
    int x_mask_sign=((unsigned)x>>(w-1));
    int y_mask_sign=((unsigned)y>>(w-1));
    int sum=x+y;
    int sum_mask_sign=(unsigned)sum>>(w-1);
    int posi_over=(!x_mask_sign)&&(!y_mask_sign)&&(sum_mask_sign);
    int nege_over=(x_mask_sign)&&(y_mask_sign)&&(!sum_mask_sign);
    return (!posi_over)&&(!nege_over)&&!((x&(0x1<<(w-1)))&&y==INT_MIN);
}
int signed_high_prod(int x, int y)
{
    int w=32;
    return ((long long)x*(long long)y)>>(w);

}
unsigned unsigned_high_prod(unsigned x, unsigned y)
{
    return (unsigned) signed_high_prod((int)x,(int)y);
}
void *calloc(size_t nmernb, size_t size)
{
    void* p=NULL;
    uint64_t usize=nmernb*size;
    size_t request_size=usize;
    void* a= malloc(nmernb*size);
    memset(a,0,request_size);
    return a;
}
int main()
{
    void* a= malloc(12);
    unsigned x=INT_MIN;
    unsigned y=INT_MIN;
    unsigned result= unsigned_high_prod(x,y);
    printf("%X",result);
    return 0;
}
