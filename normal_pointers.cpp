//https://www.youtube.com/watch?v=DTxHyVn0ODg&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb
//very good video ^^^

#include <iostream>

#define LOG(x) std::cout << x << std::endl;


//STACK ALLOCATED MEMORY
int main() {
	int var = 8;
	int* ptr = &var;
	*ptr = 10; // we use pointer type to tell compiler what the data type of 10 is and how it should be stored 
	std::cin.get();
}


// debug -> windows -> memory -> cell 1
// enter memory address watch it change in debug using breakpoint
// a pointer is just an address in computer memory
// pointer types are for syntactical ease of access
// pointer type does not change memory
// int, void, double occupy 4 bytes



// HEAP ALLOCATED MEMORY

#include <iostream>

#define LOG(x) std::cout << x << std::endl;

int main() {
	char* buffer = new char[8]; //buffer is a pointer to 8 bytes of newly allocated heap memory
	memset(buffer, 0, 8); //memory set from buffer value 0 of size 8 bytes

	char** ptr = &buffer;

	delete[] buffer;
	std::cin.get();
}

//take address of ptr
//read value at address of ptr
// reverse value
//enter into memory reader 
//et voila you have arrived at address of buffer (heap allocated char array)
