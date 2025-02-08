#include <iostream>
#include <string>

int main(){
  std::string first("HI THIS IS BRAIN");
  std::string *stringPTR = &first;
  std::string &stringREF = first;
  
  std::cout << &first <<std::endl;
  std::cout << stringPTR<< std::endl;
  std::cout << &stringREF <<std::endl;
  
  std::cout << first <<std::endl;
  std::cout << *stringPTR<<std::endl;
  std::cout <<stringREF <<std::endl;
}
