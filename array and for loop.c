#include <stdio.h>
int main(){
    char* fruits[] = {"banana", "raspberry", "cherry"};
    for(int i = 0; i < 3; i++){
        printf("%s\n", fruits[i]);
    }
    return 0;
}
