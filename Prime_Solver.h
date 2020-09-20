#ifndef PRIME_SOLVER_H
#define PRIME_SOLVER_H

#include <vector>

using namespace std;

class Prime_Solver {
private:
    unsigned max;

    vector<unsigned> Primes;

public:
    Prime_Solver(unsigned);
    void Solve();
    void Print_Solution();
};


#endif
