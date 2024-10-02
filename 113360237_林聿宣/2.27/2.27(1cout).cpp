#include <iostream>
#include <string>

int main() {
    int n = 5;
    std::string result;

    for (int i = 1; i <= n; ++i) 
	{
        result += std::string(n - i, ' ');
        result += std::string(2 * i - 1, '*');
        result += '\n';
    }
    std::cout << result;
    return 0;
}




