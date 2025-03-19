#include <stdio.h>

int main() {
    int m = 5;
    int i, rem;
    int flag = 1;
    for (i = 2; i < m && m > 2; i++) {
        rem = m % i;
        if  (rem == 0) {
            if (flag == 1){
                printf("Prime number",m);
                
            }
            else{
                printf("Non prime mumber",m);
            }
            
            
        }

        

    }

    return 0;


}