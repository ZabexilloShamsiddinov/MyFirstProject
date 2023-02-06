#include <iostream>

class Human()
{
	public:
		Human ()
		{
		std::cout << "Constructor of class Human\t" << this << std::endl;
		}

		~Human ()
		{
		std::cout << "Destructor of class Human\t" << this << std:: endl;
		}
	private:
		int Age;
		int Weight;
		string Name;
};
