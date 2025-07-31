#include "darray.hpp"

int main() {
    Darray s(8);
    for(int i = 0; i < 8; ++i)
        s[i] = i;
    print(s, 8);
}