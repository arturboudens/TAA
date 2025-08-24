#include <stdio.h>

int main()
{
    long long n = 0;
    int b = 0;

    while(scanf("%lld", &n) == 1 && scanf("%d", &b) == 1 && n != -1 && b != -1)
    {
        if(b != 2 && b != 8 && b != 10 && b != 16){
            return 0;
        }

        
    }
}