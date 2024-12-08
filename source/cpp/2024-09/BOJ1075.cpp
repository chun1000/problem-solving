#include <iostream>

int main() {
    int N, F, ans;
    std::cin >> N >> F;

    int num_front = N - (N % 100);

    for(int i = 0; i < 100; ++i) {
        if((num_front + i) % F == 0) {
            if(i < 10) std::cout << '0';
            std::cout << i << std::endl;
            break;
        }
    }


    return 0;
}