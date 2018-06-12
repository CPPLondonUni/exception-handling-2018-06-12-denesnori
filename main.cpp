#include <iostream>
#include <string>
#include <unordered_map>

int main() {
	const std::unordered_map<std::string, int> studentAges{
		{"john", 19},
		{"peter", 24},
		{"paul", 31},
		{"zoltan", 54},
		{"laurent", 90},
		{"justin", 12},
		{"oliver", 1337}
	};

	std::cout << "Enter a name: " << std::endl;

	//This code is in a bit of a sorry state, fix it.
	std::string name;
	std::cin >> name;
	int age{};
	//this try catch block has the necessary syntax you need to fulfil the task.
	try
    {
        age = studentAges.at(name);
	} catch (const std::out_of_range& e) {
		std::cerr << e.what() << '\n';
	}
    std::cout << name << " is " << age << " years old\n";
	return 0;
}
