#include<stdint.h>

int main()
{
    int n ;
    scanf("%d", &n);
    long long fibonacci[n];

    fibonacci[0] = 0;
     fibonacci[1] = 1;

     for(int i=2; i<n; i++)
     {
         fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
     }

     for(int i=0; i<n; i++)
     {
         printf("%d ==> %lld\n",i+1, fibonacci[i]);
     }
    return 0;
}

/*


Fabbonacci I mean It will be :

0 1 1 2 3 5 8 13 21 34 55 84

*/
