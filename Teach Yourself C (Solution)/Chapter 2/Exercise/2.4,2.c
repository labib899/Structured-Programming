#include <stdio.h>

int main(void)
{
    int i;
    for (i=17; i<=100; i+=17)
    {
        if(i%17 == 0)
        printf("%d ",i);
        
    }
    
    
    return 0;
}