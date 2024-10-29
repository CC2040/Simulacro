#include "Func_Pita.h"
#include <iostream>
#include <math.h>

int triple_pitagorico() {
    int a,b,c;

    for(a=3;a<=8;a++) {
        for(b=4;b<=15;b++) {
            c = sqrt(a*a + b*b);
            if(c==5||c==10||c==13||c==17) {
                if(a*a+b*b==c*c) {
                    std::cout<<" Triple pitagorico es: "<<a<<" "<< b <<" "<< c <<" "<<"\n";
                }
            }
        }
    }
    return 0;
}