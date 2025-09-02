#include <iostream>

int main()
{

	int a = 0, b = 1;

	int iterator = 0;

	bool sw = 1;


	while (iterator < 10)
	{
		if (sw)
			{
				std::cout << a << std::endl;
				a = a + b;
				sw = !sw;
			}
		else
			{
				std::cout<<b<<std::endl;
				sw = !sw;
				b = b + a;
			}
		iterator++;
	}


	return 0;
}





