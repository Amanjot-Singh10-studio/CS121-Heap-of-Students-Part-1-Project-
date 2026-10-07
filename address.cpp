#include <iostream> 
#include "address.h" 

Address::Address() { 
	void Address::init(std::string street, std::string city, std::string state, std::string zip) {
		this-> street = street; 
		this-> city = city; 
		this-> state = state; 
		this-> zip = zip 
	} 

	void Address::printAddress() { 
		std::cout << street << std::endl;
		std::cout << city << " " << state << ", " << zip << std::endl; 
} 

