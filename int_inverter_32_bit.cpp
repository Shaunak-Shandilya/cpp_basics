#include <vector>
#include <stdlib.h>
#include <iostream>

class Solution {
public:
    int reverse(int x) {
        int64_t temp64 = 0;

        while (x != 0) {
            temp64 = temp64* 10 + x % 10;
            x /= 10;
            if (temp64 > INT32_MAX || temp64 < INT32_MIN) return 0;
        }
        return temp64;
    }
}sigma;

int main()
{
    int32_t z = 123456789123456789;
    std::cout<< sigma.reverse(z);
}
