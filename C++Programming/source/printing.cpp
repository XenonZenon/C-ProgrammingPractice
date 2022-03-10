///Noysoft
///Priniting Triangle
///2.14.2022
#include <iostream>

#include "../header/printing.h"

Printing::Printing(){
  std::cout << "This is a constructor." << std::endl;
}

void Printing::triangle(int size){
  //outer loop
  for(int i = 0; i <= size; i++){
    system("pause");
    for(int j = i; j <= size - 1; j++){
        std::cout << " ";
    }
    //inner loop
    for(int j = 1; j <= i + 1; j++){
      std::cout << "@";
    }
    std::cout << std::endl;
  }

}
