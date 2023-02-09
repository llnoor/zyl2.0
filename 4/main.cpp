// Полное решение  
#include <iostream>

/*void fun() {
    int N = 0;
    std::cin >> N;
    int *p_student = new int[N];
    for (int i=0; i<N; i++) {
        std::cin >> p_student[i];
    }
    float min_sum = 0;
    float sum = 0;
    int school = 0;
    int flag_first_point = 0;
    for (int p = 0; p < N; p++) {
        for (int s = 0; s < N; s++) {  
            sum += abs (p_student[s]-p_student[p]);  
        }
        if (sum<min_sum  || 0==flag_first_point) {
            min_sum = sum;
            school = p_student[p];
            flag_first_point = 1;
        }
        sum = 0;
    }
    std::cout << school << std::endl;
    delete [] p_student;
}*/

void fun2() {
    int N = 0;
    std::cin >> N;
    int *p_student = new int[N];
    for (int i=0; i<N; i++) {
        std::cin >> p_student[i];
    }
    std::cout << p_student[N/2] << std::endl;
    delete [] p_student;
}

int main() {
    fun2();
    return 0;
}