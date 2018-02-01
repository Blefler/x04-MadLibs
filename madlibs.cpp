//Authors: Brad Lefler 
#include <iostream>
#include <string>

int main() {
std::string name;
std::cout << "Give me a name." << std::endl;
std::cin >> name;
std::string adjective;
std::cout << "Give me an adjective." << std::endl;
std::cin >> adjective;
int number;
std::cout << "Give me a number." << std::endl;
std::cin >> number;
char letter;
std::cout << "Give me a letter." << std::endl;
std::cin >> letter;
std::cout<< name << " is a very " << adjective << " human. He is made up of " << number << " % muscle." << " He always buys grade " << letter << " meat for his muscles. "<<std::endl;
  return 0;
}
