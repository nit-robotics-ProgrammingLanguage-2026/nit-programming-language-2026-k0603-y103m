#include <stdio.h>
 
int main(void)
{
    int n;
    int i;
    long sum = 0; // 型を long に変更
   
    if (scanf("%d", &n) != 1) {
        return 0;
    }
   
    if (n < 0)
    {
        printf("NG");
        return 0;
    }
   
    for (i = 1; i <= n; i++)
    {
        sum += i;
    }
   
    printf("%ld", sum); // 出力も %ld に変更
    return 0;
}
