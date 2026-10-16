#include <iostream>
#include <cmath>

void random_array(int* arr, int const arr_size);
float middle_of_array(int* arr, int const arr_size);
void print_array(const std::string comment,int* arr, int const arr_size);


int main()
{
    int arr_a[10], arr_size_a = sizeof(arr_a) / sizeof(arr_a[0]);
    random_array(arr_a, arr_size_a);
    print_array("Первая последовательность:", arr_a,arr_size_a);
    std::cout << "Среднее первой последовательности = " << middle_of_array(arr_a, arr_size_a) << std::endl;
    
    int arr_b[10], arr_size_b = sizeof(arr_b) / sizeof(arr_b[0]);
    random_array(arr_b,arr_size_b);
    print_array("Вторая последовательность:", arr_b,arr_size_b);
    std::cout << "Среднее второй последовательности = " << middle_of_array(arr_b, arr_size_b)  << std::endl;
    
    int arr_c[10], arr_size_c = sizeof(arr_c) / sizeof(arr_c[0]);
    random_array(arr_c,arr_size_c);
    print_array("Третья последовательность:", arr_c,arr_size_c);
    std::cout << "Среднее третьей последовательности = " << middle_of_array(arr_c, arr_size_c)  << std::endl;

    return 0;
}

void random_array(int* arr, int const arr_size){
    for (int i = 0; i < arr_size; ++i){
        arr[i] = rand() % 10;
    }
}

float middle_of_array(int* arr, int const arr_size){
    int middle = 0;
    for (int i = 0; i < arr_size; ++i){
        middle += arr[i];
    }
    return float(middle) / 10; 
}

void print_array(const std::string comment, int* arr, int const arr_size){
    std::cout << comment << ' ';
    for (int i = 0; i < arr_size; ++i){
        std::cout << arr[i] << ' ';
    }
    std::cout << ' ' << std::endl;
}