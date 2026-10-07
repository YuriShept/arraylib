#include "arraylib.h"
#include <iostream>

int main() {
    int cells[] = {1, 0, 1, 1, 1, 0,
        1, 1, 0, 1, 1,
        1, 0, 1, 1, 1,
        0, 1, 1, 0
    };
    std::cout <<std::endl;

    std::cout << "Количество проходимых клеток: " << arr_count_zero(cells, 20) << '\n';
    std::cout << std::endl;

    std::cout << "Количество непроходимых клеток: " << arr_count_positive(cells, 20) << '\n';
    std::cout << std::endl;

    std::cout << "Максимальное значение: " << arr_max(cells, 20) << '\n';
    std::cout << std::endl;

    std::cout << "Минимальное значение: " << arr_min(cells, 20) << '\n';
    std::cout << std::endl;

    std::cout << "Доля проходимых клеток: " << arr_count_zero(cells, 20) * 100 / 20 << '%' << '\n';
    std::cout << std::endl;
}