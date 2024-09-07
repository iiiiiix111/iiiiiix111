#include <stdio.h>
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
int main()
{
    unsigned a=-2147483647-1U;
    int num=123456;
    printf("%d\n", addDigits(num));
    printf("%u",a);
    return 0;
}