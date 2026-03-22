#include <iostream>
int main()
{
    std::cout << "Enter two numbers: " << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "Numbers between " << v1 << " and " << v2 << ":" << std::endl;
    int begin = v1, end = v2;
    for(;begin > end; )
    {
        int v = begin;
        begin = end;
        end = v;
    }
    for(int z = begin; z <= end; z++)
    {
        std::cout << z << std::endl;
    }
    return 0;
}
