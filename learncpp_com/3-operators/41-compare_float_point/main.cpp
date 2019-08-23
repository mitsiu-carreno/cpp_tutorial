#include <iostream>
#include <cmath>

bool approximatelyEqualAbsoluteEpsilon(double a, double b, double epsilon){
    // if the distance between a and b is less than epsilon, then a and b are "close enough"
    return fabs(a - b) <= epsilon;
}

// return true if the difference between a and b is within epsilon percent of the larger of a and b
bool approximatelyEqualRelativeEpsilon(double a, double b, double epsilon){
    return fabs(a-b) <= ( (fabs(a) < fabs(b)? fabs(b) : fabs(a) ) * epsilon );
}

// return true if the difference between a and b is less than absEpsilon, or 
// within relEpsilon precent of the larger of a and b
bool approximatelyEqualAbsRel(double a, double b, double absEpsilon, double relEpsilon){
    double diff = fabs(a - b);
    if(diff <= absEpsilon)
        return true;
    
    // Otherwise fall back to knuth's algorithm (relativeEpsion)
    return diff <= ( (fabs(a) < fabs(b) ? fabs(b) : fabs(a)) * relEpsilon );
}

int main(){

    double d1(100 - 99.99); // Should equal 0.01
    double d2(10-9.99);     // Should equal 0.01 too

    if(d1 == d2){
        std::cout << "d1 == d2" << "\n";
    }else if(d1 < d2){
        std::cout << "d1 < d2" << "\n";
    }else if(d1 > d2){
        std::cout << "d1 > d2" << "\n";
    }
    
    std::cout << (approximatelyEqualAbsoluteEpsilon(d1, d2, 0.001) ? "equal": "not equal") << "\n";
    // We don`t know if 0.001 is an epsilon good enough so we have to make it dynamic

    double a = 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1;

    std::cout << (approximatelyEqualRelativeEpsilon(a, 1.0, 1e-8) ? "equal": "not equal") << "\n";
    std::cout << (approximatelyEqualRelativeEpsilon(a-1.0, 0.0, 1e-8) ? "equal": "not equal") << "\n";      
    // This should be equal, but function tends to malfunction when close to zero

    std::cout << "\n";

    std::cout << (approximatelyEqualAbsRel(d1, d2, 1e-12, 1e-8) ? "equal" : "not equal") << "\n";
    std::cout << (approximatelyEqualAbsRel(a, 1.0, 1e-12, 1e-8) ? "equal" : "not equal") << "\n";
    std::cout << (approximatelyEqualAbsRel(a - 1.0, 0.0, 1e-12, 1e-8) ? "equal" : "not equal") << "\n";

    return 0;
}