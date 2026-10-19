#include <iostream>
#include <algorithm>

void my_sort(int *arr, const int size);
void print_array(const char* const comment, int* arr, const int size);


int main() {
	int arr_size;
	std::cout << "Введите размер массива: ";
	std::cin >> arr_size; 
	
	int arr[arr_size];
	std::cout << "Введите элементы массива: ";
	for (int i = 0; i < arr_size; ++i){
		std::cin >> arr[i];
	}
	
	print_array("Массив до сортировки: ", arr, arr_size);
	
	my_sort(arr, arr_size);
	
	print_array("Массив после сортировки: ", arr, arr_size);
}



void my_sort(int *arr, const int size) {
	double koef = 1.3;
    int gap = size;
    
    bool swapped = true;

    while (gap > 1 || swapped) {
        gap = static_cast<int>(gap / koef);
        if (gap < 1) {
            gap = 1;
        }

        swapped = false;

        for (int i = 0; i < size - gap; ++i) {
            if (arr[i] > arr[i + gap]) {
                std::swap(arr[i], arr[i + gap]);
                swapped = true;
            }
        }
    }
}
void print_array(const char* const comment, int* arr, const int size) {
	std::cout << comment;
	for (int i = 0; i < size; ++i){
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}
