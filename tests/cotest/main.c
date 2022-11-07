// このファイルは、ポインタとして渡された配列の戦闘アドレスによって、
// そのメモリの内容のアクセスできるかどうかを実験するものである。
// - test() :
// - main()


#include <stdio.h>
#include "test.h"

int main(int argc, char const *argv[])
{
    int len_array = 10;
    int array[len_array];
    for (int i = 0; i < len_array; i++)
    {
        printf("%i\n", array[i]);
    }
    test(array, len_array);

    for (int i = 0; i < len_array; i++)
    {
        printf("%i\n", array[i]);
    }

    return 0;
}
