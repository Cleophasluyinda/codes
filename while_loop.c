#include<stdio.h>

int main(){
    int n;
    int i = 0;
   
    
    while (i < 10){
        if(i == 5){
            continue;
        }

        

        
        printf("%d\n",i);
        i++;
    }
    return 0;
}