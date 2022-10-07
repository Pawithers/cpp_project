#include "chap_1_functions.h"
#include "functions.h"

int main(int argc, char * argv[])
{
    Solution a;
    std::vector<int> test{1,2,3,4,5,6};
    std::vector<int> b = a.twoSum(test, 7);
    printf("%.2i\n%.2i", b[0], b[1]);
    // unsigned int i = 2147483648;
    // chap_1::show_bytes((unsigned char*) &i, sizeof(int));
    // chap_1::fun1(0x000000C9);
    // chap_1::fun2(0x000000C9);
}