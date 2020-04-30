// Example program
#include <iostream>

#define MAX 1000

template<unsigned int N>
struct sum
{
    enum { val = ((!(N%3==0 || N%5==0))?0:N) + sum<N-1>::val};
};

template<>
struct sum<0>
{
    enum {val = 0 };    
};

int main()
{
    std::cout << sum<MAX-1>::val;
    return 0;

}

