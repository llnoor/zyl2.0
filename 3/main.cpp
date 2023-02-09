// Полное решение  https://contest.yandex.ru/contest/28730/run-report/82044204/
#include <iostream>

void fun() {
    int dd = 0;
    int mm = 0;
    int yyyy = 0;
    int ans = 0;
    std::cin >> dd >> mm >> yyyy;
    if (dd==mm || dd>12 || mm>12) {
        ans = 1;
    }
    std::cout << ans << std::endl;
}

int main() {
    fun();
    return 0;
}