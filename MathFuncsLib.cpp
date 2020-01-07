// MathFuncsLib.cpp
// compile with: cl /c /EHsc MathFuncsLib.cpp
// post-build command: lib MathFuncsLib.obj

#include "MathFuncsLib.h"

namespace MathFuncs
{
    double MyMathFuncs::Add(double a, double b)
    {
        return a + b;
    }

    double MyMathFuncs::Subtract(double a, double b)
    {
        return a - b;
    }

    double MyMathFuncs::Multiply(double a, double b)
    {
        return a * b;
    }

    double MyMathFuncs::Divide(double a, double b)
    {
        return a / b;
    }
    
    double MyMathFuncs::Custom(double a, double b, double(*callback)(double, double))
    {
    	return callback(a,b);
    }
}


// g++ -c MathFuncsLib.cpp
// ar r libMathFuncs.a MathFuncsLib.o
