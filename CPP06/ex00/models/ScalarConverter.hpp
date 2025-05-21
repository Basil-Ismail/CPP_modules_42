#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <exception>

#include <utils.hpp>
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
    ScalerConverter();
    ScalerConverter(const ScalerConverter&);
    ScalerConverter& operator=(const ScalerConverter&);
    ~ScalerConverter();

public:
    static void convert(std::string);

    class ImpossibleType : public std::exception {
        const char* what() const throw();
    };
};

#endif
