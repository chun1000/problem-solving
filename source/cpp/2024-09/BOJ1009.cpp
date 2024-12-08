#include <iostream>
#include <cmath>

int main() {
    int T, a, b;
    std::cin >> T;

    for(int i = 0; i < T; ++i) {
        std::cin >> a >> b;
        int ans = a;
        
        if(b==0) ans = 1;

        for(int j = 1; j < b; ++j) {
            ans = (ans * a) % 10;
        }

        ans = ans % 10;

        if(ans == 0) ans = 10;

        std::cout << ans << '\n';
    }
    std::cout << std::endl;

    return 0;    
}