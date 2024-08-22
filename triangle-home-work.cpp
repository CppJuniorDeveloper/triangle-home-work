#include <iostream>
#include <string>

int main()
{
	std::string layer;

    const char STAR = '*';
    const char SPACE = ' ';

    int n;
    std::cout << "Enter the height of the triangle: ";
    std::cin >> n;
    if (n < 0) return 0;
    std::cout << '\n';

    layer += SPACE;
    for (int i = 0; i <= n; i++){
        for (int j = i; j <= n - 1; j++)
        {
            layer += SPACE;
        }
        for (int j = n - i; j < n; j++)
        {
            layer += STAR;
            layer += SPACE;
        }
        std::cout << layer << '\n';
        layer.clear();
        layer += SPACE;
    }

    return 0;
}
