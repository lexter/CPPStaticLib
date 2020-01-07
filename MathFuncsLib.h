// MathFuncsLib.h

#ifndef MathFuncs_h
#define MathFuncs_h

namespace MathFuncs
{
    class MyMathFuncs
    {
    public:
        // Returns a + b
        static double Add(double a, double b);

        // Returns a - b
        static double Subtract(double a, double b);

        // Returns a * b
        static double Multiply(double a, double b);

        // Returns a / b
        static double Divide(double a, double b);

        // Returns answer.
        static double Custom(double a, double b, double(*callback)(double, double));
    };
}

#endif
