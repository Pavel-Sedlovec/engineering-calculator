#include "parsermath.h"
#include <cmath>
#include <string>
#include <iostream>


double accept_func(std::string funcName, double x){
    if (funcName == "sin"){
        return my_sin(x);
    }
    else if (funcName == "cos"){
        return my_cos(x);
    }
    else if (funcName == "tan"){
        return my_tan(x);
    }
    else if (funcName == "log"){
        return my_log(x);
    }
    else if (funcName == "ln"){
        return my_ln(x);
    }
    else if (funcName == "fact"){
        return my_fact(x);
    }
    else {
        throw std::runtime_error("the function does not exist");
    }
}

double my_log(double x){
    return std::log10(x);
}

double my_ln(double x){
    return std::log(x);
}

double my_sin(double x){
    return std::sin(x);
}

double my_cos(double x){
    return std::cos(x);
}

double my_tan(double x){
    return std::tan(x);
}

double my_fact(double x){
    return std::tgamma(x + 1.0);
}