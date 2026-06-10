#ifndef PARSERMATH_H
#define PARSERMATH_H

#include <string>
#include "core.h"

ParseResult accept_func(std::string funcName, double x);
double my_log(double x);
double my_ln(double x);
double my_sin(double x);
double my_cos(double x);
double my_tan(double x);
double my_fact(double x);

#endif // PARSERMATH_H
