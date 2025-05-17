#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <sys/types.h>

enum Type {
    INTT,
    FLOATT,
    DOUBLET,
    CHART
};

class ScalerConverter {
protected:
private:
    static u_int8_t _types;

public:
    ScalerConverter();
    ScalerConverter(const ScalerConverter&);
    ScalerConverter& operator=(const ScalerConverter&);
    ~ScalerConverter();

    static void convert(std::string);
};

#endif
