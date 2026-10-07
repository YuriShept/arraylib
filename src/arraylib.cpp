#include "arraylib.h"
#include <vector>
#include <algorithm>

int arr_sum(const int* arr, std::size_t n) {
    int sum{0};
    for (std::size_t i = 0; i < n; ++i) {
        sum += arr[i];
    }
    return sum;
}

int arr_max(const int* arr, std::size_t n) {
    int m = arr[0];
    for (std::size_t i = 0; i < n; ++i) {
        if (arr[i] > m) m = arr[i];
    }
    return m;
}

int arr_min(const int* arr, std::size_t n) {
    int m = arr[0];
    for (std::size_t i = 0; i < n; ++i) {
        if (arr[i] < m) m = arr[i];
    }
    return m;
}

int arr_count_positive(const int* arr, std::size_t n) {
    int k{0};
    for (std::size_t i = 0; i < n; ++i) {
        if (arr[i] > 0) k += 1;
    }
    return k;
}

int arr_count_negative(const int* arr, std::size_t n) {
    int k{0};
    for (std::size_t i = 0; i < n; ++i) {
        if (arr[i] < 0) k += 1;
    }
    return k;
}

int arr_count_zero(const int* arr, std::size_t n) {
    int k{0};
    for (std::size_t i = 0; i < n; ++i) {
        if (arr[i] == 0) k += 1;
    }
    return k;
}

int arr_product(const int* arr, std::size_t n) {
    int p{1};
    for (std::size_t i = 0; i < n; ++i) {
        p *= arr[i];
    }
    return p;
}

double arr_average(const int* arr, std::size_t n) {
    int sum{0};
    for (std::size_t i = 0; i < n; ++i) {
        sum += arr[i];
    }
    double s = static_cast<double>(sum);
    double kol = static_cast<double>(n);
    double av = s / kol;
    return av;
}

double arr_median(const int* arr, std::size_t n) {
    std::vector<int> ArrCopy(arr, arr + n);
    std::sort(ArrCopy.begin(), ArrCopy.end());
    double med;
    if (n % 2 != 0) med = ArrCopy[n / 2];
    else med = (ArrCopy[n / 2 - 1] + ArrCopy[n / 2]) / 2.0;

    return med;
}