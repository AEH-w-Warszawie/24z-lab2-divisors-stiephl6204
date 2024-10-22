#include <vector>
#include "Divisors.h"
#include <algorithm> // для сортировки

std::vector<unsigned long long> divisors(unsigned long long number) {
    std::vector<unsigned long long> result;
    
    for (unsigned long long i = 1; i * i <= number; ++i) {
        if (number % i == 0) {
            result.push_back(i);               // Добавляем делитель i
            if (i != number / i) {
                result.push_back(number / i);  // Добавляем парный делитель N / i
            }
        }
    }

    // Сортируем делители по возрастанию
    std::sort(result.begin(), result.end());

    return result;
}
