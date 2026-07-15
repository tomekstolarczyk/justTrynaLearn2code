#include <iostream>
#include <vector>

int main()
{
    std::vector<int> liczby;

    for(int i = 0 ; i<3;i++)
    {
        int zmienna;
        std::cin >> zmienna;
        liczby.push_back(zmienna);
        std::cout << zmienna;
    }
}