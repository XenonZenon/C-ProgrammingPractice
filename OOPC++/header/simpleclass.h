#ifndef SIMPLE_CLASS_H
#define SIMPLE_CLASS_H

#include <string>

class SimpleClass{

private:
  std::string c_name;
public:
  SimpleClass();
  ~SimpleClass();
  void setName(std::string);
  void printName();
  bool isPositive(int);
  int add(int, int);
  int subtract(int, int);
  double multiply(double, double);
  double divide(double, double);
  int factorial(int);
  int summation(int);

};

#endif
