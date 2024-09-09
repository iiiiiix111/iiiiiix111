#include <stdio.h>
#include <stdlib.h>
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
int main()
{
    unsigned a=-2147483647-1U;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int *return_size= (int*) malloc(sizeof(int));
    int *new_arr= shuffle(arr,10,5,return_size);
    show_array(new_arr,*return_size);
    free(new_arr);
    free(return_size);
    return 0;
}