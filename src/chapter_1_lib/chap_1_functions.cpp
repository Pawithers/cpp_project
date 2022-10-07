#include "chap_1_functions.h"

using byte_pointer = unsigned char *;

void chap_1::show_bytes(byte_pointer start, size_t len)
{
    int i;
    for (i = 0; i < len; i++)
    {
        printf(" %.2x ", start[i]);
    }
}

int chap_1::fun1(unsigned int word)
{
    unsigned new_word = (int) ((word << 24) >> 24);
    printf("%.8b\n", new_word);
    return new_word;
}

int chap_1::fun2(unsigned int word)
{
    unsigned new_word = ((int)word << 24) >> 24;
    printf("%.8b\n", new_word);
    return new_word;
}