#include<stdio.h>
int main()
{
    int a[1000] = { 0, };
    int b[1000] = { 0, };
    int n, count, i, j;
    a[0] = 1;      // 맨 처음 값

    printf("Input : ");
    scanf_s("%d", &n);

    printf("%2d\n", a[0]);

    for (int x = 1; x < n; x += 1) {
        i = 0;
        j = 0;
        count = 1;

        while (a[i] != 0) {
            if (a[i + 1] == a[i]) {
                count++;
            }
            else {
                b[j] = a[i];
                printf("%2d", b[j]);
                j++;

                b[j] = count;
                printf("%2d", b[j]);
                j++;
                count = 1;
            }
            i += 1;
        }

        for (i = 1; i < 100; i++) {
            a[i] = b[i];
            b[i] = 0;
        }

        printf("\n");
    }
   



	return 0;
}