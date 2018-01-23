#include "one/first.h"
#include <stdio.h>
#include <direct.h>
void main2(char *);
int main(void) {


//    main1("../testtxt");

    main2("../one/main2txt");
    char buffer[1024];
    _getcwd(buffer,1024);
    printf("%s",buffer);


    return 0;
}

