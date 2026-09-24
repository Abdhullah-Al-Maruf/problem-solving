#include <stdio.h>

int main() {
    int input;
    
    while (scanf("%d",&input))
    {
    if (input==1999)
    {
        printf("Correct");
        break;
    }
    else{
        printf("Wrong\n");
    }
    }
    

    return 0;
}




