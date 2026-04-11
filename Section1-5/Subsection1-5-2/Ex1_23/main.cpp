#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item, next;
    if(std::cin >> item)
    {
        int score = 1;
        while (std::cin >> next)
        {
            if(item.isbn() == next.isbn())
            {
                ++score;
            }

            else
            {
                std::cout << "ISBN: " << item.isbn() << ", transactions: " << score << std::endl;
                item = next;
                score = 1;
            }
        }
        std::cout << "ISBN: " << item.isbn() << ", transactions: " << score << std::endl;
    }
    return 0;
}
