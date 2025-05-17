#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP



#include <string>
#include <sys/types.h>
#include <iostream>

#define INTT 0
#define FLOATT 1
#define DOUBLET 2
#define CHAR 3


class ScalerConverter {
protected:
private:
  u_int8_t  _types;

  std::string intConversion(std::string);
  std::string floatConversion(std::string);
  std::string doubleConversion(std::string);
  std::string charConversion(std::string);
  
  u_int8_t  lexString(std::string);

  
public:
  static void convert(std::string);

}


#endif
