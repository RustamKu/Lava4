#pragma once
#include <iostream>
#include <string>

class Tiles {
private:
	std::string brand;
	int size_h;
	int size_w;
	float price;
public:
	Tiles() {
		brand = "brand";
		size_h = 0;
		size_w = 0;
	}
	Tiles(std::string bran, int len, int wid) {
		brand = bran;
		size_h = len;
		size_w = wid;
	}
	Tiles(const Tiles&copy) {};
	~Tiles() {
		std::cout << "destruktor" << std::endl;
	}
	void get_Data() {
		std::cout << "Enter brand name :" << std::endl;
		std::cin >> brand;
		std::cout << "Enter length :" << std::endl;
		std::cin >> size_h;
		std::cout << "Enter width :" << std::endl;
		std::cin >> size_w;

		std::cout << "Your brand is :" << brand << std::endl;
		std::cout << "Your length is :" << size_h << std::endl;
		std::cout << "Your width  is:" << size_w << std::endl;
	}
};