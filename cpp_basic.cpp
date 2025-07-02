#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <utility>
#include <tuple>
#include <memory>

#include <stdlib.h>

int main(){
	std::cout << "Hello, World!" << std::endl;
	
	// Example of using a simple string
	std::string name = "Shaunak";
	std::cout << "My name is: " << name << std::endl;
	
	// Example of using a simple integer
	int age = 25;
	std::cout << "I am " << age << " years old." << std::endl;
	
	// Wait for user input before closing the console
	std::cin.get();
	
	// Example of using a simple float
	float height = 5.9f;
	std::cout << "My height is: " << height << " feet." << std::endl;
	
	// Example of using a simple double
	double weight = 70.5;
	std::cout << "My weight is: " << weight << " kg." << std::endl;
	
	// Example of using a simple character
	char initial = 'S';
	std::cout << "My initial is: " << initial << std::endl;
	
	// Example of using a simple boolean
	bool isStudent = true;
	std::cout << "Am I a student? " << (isStudent ? "Yes" : "No") << std::endl;
	
	// Example of using a simple array
	int scores[] = { 90, 85, 88 };
	std::cout << "My scores are: ";
	for (int score : scores) {
		std::cout << score << " ";
	}
	std::cout << std::endl;
	
	// Example of using a simple vector
	std::vector<std::string> hobbies = { "Reading", "Gaming", "Traveling" };
	std::cout << "My hobbies are: ";
	for (const auto& hobby : hobbies) {
		std::cout << hobby << " ";
	}
	std::cout << std::endl;
	
	// Example of using a simple map
	std::map<std::string, int> grades = { {"Math", 90}, {"Science", 85}, {"English", 88} };
	std::cout << "My grades are: ";
	for (const auto& grade : grades) {
		std::cout << grade.first << ": " << grade.second << " ";
	}
	std::cout << std::endl;
	
	// Example of using a simple set
	std::set<std::string> uniqueHobbies = { "Reading", "Gaming", "Traveling" };
	std::cout << "My unique hobbies are: ";
	for (const auto& hobby : uniqueHobbies) {
		std::cout << hobby << " ";
	}
	std::cout << std::endl;

	// Example of using a simple pair
	std::pair<std::string, int> person("Shaunak", 25);
	std::cout << "Person: " << person.first << ", Age: " << person.second << std::endl;
	
	// Example of using a simple tuple
	std::tuple<std::string, int, float> personInfo("Shaunak", 25, 5.9f);
	std::cout << "Person Info: " 
			  << std::get<0>(personInfo) << ", " 
			  << std::get<1>(personInfo) << " years old, " 
		<< std::get<2>(personInfo) << " feet tall." << std::endl;

	// Example of using a simple dynamic memory allocation
	int* dynamicArray = new int[5];
	for (int i = 0; i < 5; ++i) {
		dynamicArray[i] = i * 10;
	}
	std::cout << "Dynamic Array: ";
	for (int i = 0; i < 5; ++i) {
		std::cout << dynamicArray[i] << " ";
	}
	std::cout << std::endl;
	delete[] dynamicArray; // Free the allocated memory

	// Example of using a simple function
	auto add = [](int a, int b) -> int {
		return a + b;
		};
	std::cout << "Sum of 5 and 10 is: " << add(5, 10) << std::endl;

	// Example of using a simple lambda function
	auto greet = [](const std::string& name) {
		std::cout << "Hello, " << name << "!" << std::endl;
		};
	greet("Shaunak");

	// Example of using a simple class
	class Person {
		public:
		std::string name;
		int age;
		Person(const std::string& n, int a) : name(n), age(a) {}
		void Introduce() const {
			std::cout << "My name is " << name << " and I am " << age << " years old." << std::endl;
		}
	};

	Person person("Shaunak", 25);
	person.Introduce();

	// Example of using a simple inheritance
	class Animal {
		public:
		virtual void Speak() const {
			std::cout << "Animal speaks." << std::endl;
		}
	};
	class Dog : public Animal {
		public:
		void Speak() const override {
			std::cout << "Dog barks." << std::endl;
		}
	};
	Animal* animal = new Dog();
	animal->Speak(); // Outputs "Dog barks."
	delete animal; // Clean up

	// Example of using a simple polymorphism
	class Shape {
		public:
		virtual void Draw() const {
			std::cout << "Drawing a shape." << std::endl;
		}
	};
	class Circle : public Shape {
		public:
		void Draw() const override {
			std::cout << "Drawing a circle." << std::endl;
		}
	};
	Shape* shape = new Circle();
	shape->Draw(); // Outputs "Drawing a circle."
	delete shape; // Clean up
	
	// Example of using a simple smart pointer
	std::unique_ptr<Person> smartPerson = std::make_unique<Person>("Shaunak", 25);
	std::cout << "Smart Person: " << smartPerson->name << ", Age: " << smartPerson->age << std::endl;
	// No need to delete smartPerson, it will be automatically cleaned up
	
	return 0;
}
