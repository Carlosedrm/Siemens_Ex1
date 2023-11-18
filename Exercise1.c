#include <stdio.h>
int main()
{
    for(int i = 1; i <= 100; i++){
        if(!(i%5==0 || i%3==0)){
            printf("%d",i);
        } else{
            printf("%s", (i % 5 == 0 && i % 3 == 0) ? "FooBaa" : (i % 5 == 0) ? "Baa" : (i % 3 == 0) ? "Foo" : "");
        }
        printf("\n");
    }
    return 0;
}