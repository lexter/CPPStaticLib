//
//  Use this file to import your target's public headers that you would like to expose to Swift.
//

int getIntFromCPP();

double doAdd(double a, double b);
double doSubtract(double a, double b);
double doMultiply(double a, double b);
double doDivide(double a, double b);
double doCustom(double a, double b, double(*callback)(double, double));
//double doCustom(double a, double b, std::function<double(double, double)> callback);
