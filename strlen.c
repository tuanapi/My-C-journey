#include <stdio.h>
#include <string.h>
int main(){
    char* apple = "Bad Apple";
    printf("%c\n", *(apple + 4));
    return 0;
}