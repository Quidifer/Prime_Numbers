#include "Prime_Solver.h"
#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

Prime_Solver::Prime_Solver(unsigned max):
max(max) {}

void Prime_Solver::Solve() {
    cout << "Starting Solve" << endl;

    for (unsigned number = 3; number <= max; number += 2) {

        unsigned root = sqrt(number);
        bool isPrime = true;
        for (unsigned i = 0; i < Primes.size() && Primes.at(i) <= root; ++i) {
            if (number % Primes.at(i) == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            Primes.push_back(number);
        }

    }

    cout << "Done" << endl;
}

void Prime_Solver::Print_Solution() {
    cout << "Primes: 2 ";
    for (unsigned i = 0; i < Primes.size(); ++i) {
        cout << Primes.at(i) << " ";
    }
    cout << endl;
}
