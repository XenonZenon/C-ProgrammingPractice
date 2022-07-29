#ifndef OOP_COLLECTION_H
#define OOP_COLLECTION_H

#include <simpleclass.h>
#include <classinheritance.h>

class OOP : public ClassInheritance{

private:
  SimpleClass sc;
public:
  OOP();
  virtual ~OOP();
  void SimpleClass();
};

#endif
