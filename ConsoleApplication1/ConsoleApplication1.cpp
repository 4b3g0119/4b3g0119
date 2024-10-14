#include <iostream>

int main()
{
	int n;
	std::cout << "輸入數字\n";
	std::cin >> n; //輸入n的數字

	int x, y;
	float sum;

	for (x = 1; x <= n; x++) {

		for (y = 1; y <= x; y++) {

			std::cout << x << "*" << y << "=" << x * y << "\n";

		}
		std::cout << std::endl;

	}

	std::cout << "輸入加法四則運算\n";
	std::cin >> x;
	std::cin >> y;
	std::cout << x << "+" << y << "=" << x + y << "\n";


	std::cout << "輸入減法四則運算\n";
	std::cin >> x;
	std::cin >> y;
	std::cout << x << "-" << y << "=" << x - y << "\n";


	std::cout << "輸入乘法四則運算\n";
	std::cin >> x;
	std::cin >> y;
	std::cout << x << "*" << y << "=" << x * y << "\n";



	std::cout << "輸入除法四則運算\n";
	std::cin >> x;
	std::cin >> y;
	sum = x / y;
	std::cout << x << "/" << y << "=" << x / y << "\n";



}