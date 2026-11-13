#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <cstdlib>

void heavy_math() {
    double result = 0.0;
    for (int i = 0; i < 40'000'000; ++i) {
        result += std::sin(i) * std::cos(i);
    }
}

void sort_numbers() {
    std::vector<int> data(2'000'000);
    for (size_t i = 0; i < data.size(); ++i) {
        data[i] = rand();
    }
    std::sort(data.begin(), data.end());
}

int main() {
    std::cout << "Starting CPU workload..." << std::endl; 
    int cycles = 5;
    for (int i = 0; i < cycles; ++i) {
        std::cout << "Cycle " << (i + 1) << "/" << cycles << std::endl;
        heavy_math();
        sort_numbers();
    }

    std::cout << "Done!" << std::endl;
    return 0;
}
