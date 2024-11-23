#include <stdio.h>
#include <string.h>

char *f (char *s)
{   
    if(s=="hello"){
        return "yes";
    }

    else{
        return "no";
    }
}

int main(){
    int array[5];
    array[0]="hello";
    return 1;
}