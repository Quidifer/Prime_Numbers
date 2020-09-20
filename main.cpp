#include <iostream>
#include <chrono>
#include <ctime>
#include "Prime_Solver.h"

using namespace std;

int main() {
    auto start = chrono::high_resolution_clock::now();

    unsigned max = 1000000;

    Prime_Solver Solver(max);
    Solver.Solve();
    //Solver.Print_Solution();

    auto stop = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);

    cout << "time taken: " << duration.count() << " microseconds" << endl;
    cout << "time taken: " << duration.count()/double(CLOCKS_PER_SEC) << " seconds" << endl;

    return 0;
}
