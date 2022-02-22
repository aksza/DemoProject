#include <stdio.h>

void kiir(int);
int main() {
    int x =2 ;
    while (x<3){
        x++;
    }
    kiir(x);
    return 0;
}
void kiir(int x){
    printf("%i",x);
}