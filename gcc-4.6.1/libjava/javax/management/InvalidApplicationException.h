
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_management_InvalidApplicationException__
#define __javax_management_InvalidApplicationException__

#pragma interface

#include <java/lang/Exception.h>
extern "Java"
{
  namespace javax
  {
    namespace management
    {
        class InvalidApplicationException;
    }
  }
}

class javax::management::InvalidApplicationException : public ::java::lang::Exception
{

public:
  InvalidApplicationException(::java::lang::Object *);
  virtual ::java::lang::String * toString();
private:
  static const jlong serialVersionUID = -3048022274675537269LL;
  ::java::lang::Object * __attribute__((aligned(__alignof__( ::java::lang::Exception)))) val;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_management_InvalidApplicationException__