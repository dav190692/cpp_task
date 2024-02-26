#include <iostream>
#include <string>

int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int findMin(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

double findAverage(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return static_cast<double>(sum) / size;
}


int main() {

    int numbers[] = {23, 456, 5, 6, 87};


    int max = findMax(numbers, 5);
    int min = findMin(numbers, 5);
    double avg = findAverage(numbers, 5);


    std::cout << "Maximum value: " << max << std::endl;
    std::cout << "Minimum value: " << min << std::endl;
    std::cout << "Average value: " << avg << std::endl;


//part2

    std::string str1 = "Hello";
    std:: string str2 = "world!";
    std:: string conc_str = str1 + " " + str2;
    int length_str = conc_str.length();

    std:: cout << "concataneted string:" << conc_str << std:: endl;
    std :: cout << "length of cocataneted string:" << length_str << std::endl;





    return 0;



}