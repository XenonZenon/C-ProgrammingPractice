#include <simpleclass.h>
#include <iostream>
#include <string>

SimpleClass::SimpleClass(){

}

void SimpleClass::setName(std::string name){
  this->c_name = name;
}

void SimpleClass::printName(){
  std::cout << "Class Name: " << this->c_name << std::endl;
}

bool SimpleClass::isPositive(int number){
  return number >= 0 ? true : false;
}

int SimpleClass::add(int a, int b){
  return a + b;
}

int SimpleClass::subtract(int a, int b){
  return a - b;
}

double SimpleClass::multiply(double a, double b){
  return a * b;
}

double SimpleClass::divide(double a, double b){
  return a / b;
}

int SimpleClass::factorial(int n){
  if(n == 0){
    return 1;
  }
  return n * factorial(n-1);
}

int SimpleClass::summation(int n){
  if(n == 0){
    return 1;
  }
  return n + summation(n - 1);
}

SimpleClass::~SimpleClass(){}
