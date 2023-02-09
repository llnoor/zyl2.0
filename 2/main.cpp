// Полное решение https://contest.yandex.ru/contest/28730/run-report/82042506/
#include <iostream>

void fun() {
    int N = 0;
    int i = 0;
    int j = 0;
    int ans = 0;
    std::cin >> N >> i >> j;
    if (j>i) {
        ans=i;
        i=j;
        j=ans;
    }
    if ((i-j-1)<(N-i+j-1)) {
        ans = i-j-1;
    } else {
        ans = N-i+j-1;
    }
    std::cout << ans << std::endl;
}

int main() {
    fun();
    return 0;
}