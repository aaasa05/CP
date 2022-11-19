#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    // Complete the code.
    
    int a;long int b;
    char ch;
    float f;
    double d;
     scanf("%d%ld",&a,&b);
     getchar();
     scanf("%c",&ch);
     
     scanf("%f",&f);
     scanf("%lf",&d);
    
     printf("%d\n%ld\n",a,b);
     printf("%c\n",ch);
     printf("%.3f\n",f);
     printf("%.9lf\n",d);
    
        
    return 0;
}
