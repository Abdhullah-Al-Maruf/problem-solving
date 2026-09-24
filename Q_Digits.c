// #include <stdio.h>

// int main()
// {
//     int n, t;
//     scanf("%d", &t);

//     for (int i = 1; i <= t; i++)
//     {
//         scanf("%d", &n);
//         do
//         {
//             printf("%d ", n % 10);
//             n = n / 10;
//         } while (n != 0);
//         printf("\n");
//     }

//     return 0;

    
    

#include <stdio.h>

int main() {
    int t,n;
    scanf("%d",&t);
    for (int i = 1; i <= t; i++)
    {
       scanf("%d",&n) ;
       while (n != 0)
       {
    printf("%d ",n%10);
    n= n/10;
       }
       printf("\n");
    }
    
    return 0;
}