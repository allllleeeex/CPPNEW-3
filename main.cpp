#include <iostream>
#include <vector>

void scale_vector(std::vector<float>&values);
void print_vector(const std::vector<float>& values);

int main() {
    std::vector<float> numbers = {4, 32, -2, 0, -80};

    std::cout << "Enter a scale factor: ";
    float k;
    std::cin >> k;

    std::cout << "Original: ";
    print_vector(numbers);
    std::cout << '\n';

    scale(numbers, k);

    std::cout << "Scaled: ";
    print_vector(numbers);
    std::cout << '\n';
}

void scale_vector(std::vector<float>&values, int) {
  for (int i = 0; ii < values.size() - 1; i++) {
    vector[i] = vector[i] * int;
  }
void print_vector(const std::vector<float>& values) {
    std::cout << "{";
    for (int i = 0; i < values.size() - 1; i++) {
        std::cout << values[i] << ", ";
    }
    std::cout << values[values.size() - 1] << "} ";
}
