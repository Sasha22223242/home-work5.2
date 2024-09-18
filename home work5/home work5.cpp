#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale>

void SwapElements(int* array, int size) {
    for (int i = 0; i < size - 1; i += 2) {
        std::swap(array[i], array[i + 1]);
    }
}

void FillArray(int* array, int size) {
    for (int i = 0; i < size; i++) {
        array[i] = rand() % 100;
    }
}

void ShowArray(int* array, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    setlocale(LC_ALL, "ukr");
    srand(static_cast<unsigned int>(time(0))); 

    int size;
    std::cout << "Введіть розмір масиву: ";
    std::cin >> size;

    int* array = new int[size];

    FillArray(array, size);
    std::cout << "Початковий масив: ";
    ShowArray(array, size);

    SwapElements(array, size);
    std::cout << "Після перестановки: ";
    ShowArray(array, size);

    delete[] array;

    return 0;
}
