# Exercise 1

Other than the code submitted in the .c file we have the traditional way to do this:
```
#include <stdio.h>

int main()
{
     for(int i = 1; i <= 100; i++){
         if(i % 3 == 0 && i % 5 == 0){
             printf("FooBaa\n");
         } else if(i % 3 == 0){
             printf("Foo\n");
         } else if(i % 5 == 0){
             printf("Baa\n");
         } else{
             printf("%d\n",i);
         }
     }

     return 0;
}
```

But by using the ? and : operators, which function the same as a if else loop,in the printf line we can reduce the amount of code we use. We first check to see if the number is divisible by 5 or 3, if that's false we can print the number we have, else we check to see which string we print "Foo" "Baa" "FooBaa". Please go to: https://onlinegdb.com and run the code there.
