#include <stdio.h>
#include "nghianh_greetings.h"
int main(void) {
    char greeting[40];
    nghianh_get_greeting(greeting);
    printf("Hello NghiaNH!\n");
    printf("%s", greeting);
    return 0;
}
