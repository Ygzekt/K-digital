#include<stdio.h>
int main()
{
    int n, m;
    scanf_s("%d %d", &n, &m);
    if (n <= m) 
    {
        for (int i = n; i <= m; i++) 
        {
            printf(" %d ", i);
        }
    }
    else 
    {
        for (int i = m; i <= n; i++) 
        {
            printf("%d ", i);
        }
    }
    
    
    
    /*
    int a, b;
    int temp;
    scanf_s("%d %d", &a, &b);

    if (a > b) 
    {
        temp = a;
        a = b;
        b = temp;
    }

    for (int i = a; i <= b; i++) 
    {
        printf("%d", i);
    }
    */



    return 0;
}
