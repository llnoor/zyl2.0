// Полное решение  
#include <iostream>

void fun() {
    int N = 0;
    std::cin >> N;
    int max = N;
    int count = 0;

    while (N!=0){
        if (N == max) {
            count++;
        } else if (N>max) {
            max = N;
            count = 1;
        } 
        std::cin >> N;
    }
    std::cout << count << std::endl;
}

int main() {
    fun();
    return 0;
}