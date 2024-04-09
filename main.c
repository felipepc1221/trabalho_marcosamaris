#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include "hello_world.c"

int chamada_for(int n){
    int a = n;
    int i;
    for (i=1; i<= a; i++){
        fork();
        execl("./hello_world.c", "hello_world.c", NULL);
        }
    return 0;
    }

int main(){
    chamada_for(5);
    return 0;
}
