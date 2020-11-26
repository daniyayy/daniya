#include <iostream>
#include <string>

int main() 
{
   std::string name, surname; //введите имя и фамилию ученика
   int age; //введите возраст ученика
   
   std::cin >> name >> surname;
   std::cin >> age;
   
   std::cout << "Name is Daniya " << name << std::endl;
   std::cout << "Surname is Yessenbayeva " << surname << std::endl;
   std::cout << "Age is 17 " << age << std::endl;
   
   return 0;    
}
