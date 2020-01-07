//
//  wrapper.cpp
//  CPPStaticLib
//
//  Created by Lexter Labra on 1/7/20.
//  Copyright © 2020 Lexter Labra. All rights reserved.
//

#include "junk.h"
#include "MathFuncsLib.h"
// extern "C" will cause the C++ compiler
// (remember, this is still C++ code!) to
// compile the function in such a way that
// it can be called from C
// (and Swift).
extern "C" int getIntFromCPP()
{
    // Create an instance of A, defined in
    // the library, and call getInt() on it:
    return A(1234).getInt();
}


extern "C" double doAdd(double a, double b)
{
    return MathFuncs::MyMathFuncs::Add(a,b);
}

extern "C" double doSubtract(double a, double b)
{
    return MathFuncs::MyMathFuncs::Subtract(a,b);
}

extern "C" double doMultiply(double a, double b)
{
    return MathFuncs::MyMathFuncs::Multiply(a,b);
}

extern "C" double doDivide(double a, double b)
{
    return MathFuncs::MyMathFuncs::Divide(a,b);
}

extern "C" double doCustom(double a, double b, double(*callback)(double, double))
{
    return MathFuncs::MyMathFuncs::Custom(a, b, callback);
}

