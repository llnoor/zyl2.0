// Полное решение https://contest.yandex.ru/contest/28730/run-report/82041440/

#include <iostream>

int main() {
    int checker = 0;
    int interactor = 0;
    int result = 0;
    int ans = 0;
    std::cin >> result >> interactor >> checker;
    if (0 == interactor) {
        if (0!=result){
            ans = 3;
        } else {
            ans = checker;
        }      
    } else if (1 == interactor) {
        ans = checker;
    } else if (4 == interactor) {
        if (0!=result){
            ans = 3;
        } else {
            ans = 4;
        } 
    } else if (6 == interactor) {
        ans = 0;
    } else if (7 == interactor) {
        ans = 1;
    } else {
        ans = interactor;
    }
    std::cout << ans << std::endl;
    return 0;
}