#include <iostream>
#include <oopcollection.h>
#include <simpleclass.h>
#include <classinheritance.h>

OOP::OOP() : ClassInheritance(){
  this->sc.setName("Testing");
}

void OOP::SimpleClass(){
  this->sc.printName();
  std::cout << "Add: " << this->sc.add(2, 5) << std::endl;
  std::cout << "Subtract: " << this->sc.subtract(89, 34) << std::endl;
  std::cout << "Multiply: " << this->sc.multiply(20.02, 43.03) << std::endl;
  std::cout << "Divide: " << this->sc.divide(20.02, 43.03) << std::endl;

  std::cout << "Is Positive? " << this->sc.isPositive(this->sc.add(2, 5)) << std::endl;
  std::cout << "Factorial: " << this->sc.factorial(5) << std::endl;
  std::cout << "Summation: " << this->sc.summation(5) << std::endl;
}


OOP::~OOP(){}
