
#include "test.h"
#include <stdio.h>
#include <stdint.h>

int main(int argc, char const *argv[])
{
    int64_t a = 100;
    int64_t b = 100;

    int64_t result;

    result = add(a, b);
    printf("%li\n",result);

    return 0;
}
