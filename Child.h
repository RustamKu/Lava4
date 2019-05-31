#include <iostream>
#include <string>
class child {
private:
	std::string name;
	std::string surname;
	int age = 5;
public:
	void vvod() {
		std::cout << "Enter name :" << std::endl;
		std::cin >> name;
		std::cout << "Enter surname :" << std::endl;
		std::cin >> surname;
		std::cout << "Enter age :" << std::endl;
		std::cin >> age;

		std::cout << "Your child's name :" << name << std::endl;
		std::cout << "Your child's surname :" << surname << std::endl;
		std::cout << "Your child's age :" << age << std::endl;
	}
	child() {
		name = "Surname ";
		surname = "Name ";
		age = 1996;
	}
	child(std::string na, std::string sur, int a) {
		name = na;
		surname = sur;
		age = a;
	}
	child(const child&copy) {};
	~child() {
		std::cout << "destruktor" << std::endl;
	}
};
