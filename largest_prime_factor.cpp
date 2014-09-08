#include <iostream>
#include <math.h>

bool primalityCheck(long long i){
    for (long j = 2; j < sqrt(i); j++){
        if (i % j == 0){
            return false;
        }
    }
    return true;
}

int findAllPrimeFactors(long long someNumber){
    int* i = new int;
    *i = 2;
    int* jNumber = new int;

    while (someNumber != 1){
        while (someNumber % *i == 0){
            *jNumber = *i;
            someNumber /= *i;
        }
        *i += 1;
    }
    return *jNumber;
}

int main(){
    long long* exNumber = new long long;
    *exNumber = 13195;
    int result1 = findAllPrimeFactors(*exNumber);
    std::cout << "The largest prime factor of " << *exNumber << " is: " << result1 << "\n";

    long long* solutionNumber = new long long;
    *solutionNumber = 600851475143;
    int result2 = findAllPrimeFactors(*solutionNumber);
    std::cout << "The largest prime factor of " << *solutionNumber << " is: " << result2 << "\n";
}

