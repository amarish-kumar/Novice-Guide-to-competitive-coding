    #include <stdio.h>
    #include <string.h>
    int main() {
    int T;
    int i, j;
    scanf("%d",&T);
    for (i = 0; i < T; i++) {
    char number[100005];//is usefule when we have to handle a single digit or limited numbers of digit for properties of digit //
    int count = 0;
    fflush(stdin);
    gets(number);
    for (j = 0; number[j]>=48 ; j++) {
    if (number[j] == 52 || number[j] == 55)
    count++;
    }
    printf("%d\n", j - count);
    }
    return 0;
    }
