/* *****************************************************************************
 *  Name: Emery Morales
 *  Email: morej-22@rhodes.edu
 *
 *  Description:  Program simulates Donald E Knuth's toilet-paper problem.
 *
 *  Written:       02/05/2019
 *  Last updated:  02/22/2019
 *
 *  % g++ -o tp tp.cpp
 *  % ./tp
 *
 **************************************************************************** */
#include <iostream>   // Basic I/O => cin, cout, etc.
#include <cstdlib>    // Other helpful functions => rand(), RANDMAX
#include <ctime>      // Enables use of time() function.

using namespace std;

// Returns a uniformly-distributed number in the range [0,1]
double randUniform() {
    double randNum;

    randNum = ((double)rand() / RAND_MAX);    // Cast off
    // cout << "Random number:  " << randNum << endl;

    return randNum;
}

/* Returns the number of squares on the non-empty roll for this simulation
   of the problem
   Parameters:int N, iniitial number of sqaures on each roll.
              double p, probability of a big-choser.
   Returns: roll1, if roll2 is empty, returns the number of squares on roll1.
            roll2, if roll1 is empty, returns the number of squares on roll2. */
int singleSim(int N, double p) {
    int roll1 = N;
    int roll2 = N;

    double randNum = randUniform();

    // Performs a single simulation of two-rolls being used until one is empty
    while (roll1 > 0 && roll2 > 0) {

        // If both rolls have the same # of squares remaining, roll1 is chosen
        if (roll1 == roll2) {
            roll1--;
        }

        // Otherwise, one square is subtracted from the appropriate roll
        else {

            if (randNum >= p) {
                roll1--;
            }

            else {
                roll2--;
              }

            randNum = randUniform();
        }
    }

  // Returns the number of squares left of the remaining roll
  if (roll1 == 0) {
      return roll2;
  }

  else {
      return roll1;
    }
}


int main() {
    srand(time(0));        // seed

    int N;                // initial number of squares on each roll
    double p;             // probability of a big-chooser
    int sims;             // number of trials for our simulation

    // Accepts 3 values from the user
    cout << "Number of initial squares on each roll: ";
    cin >> N;
    cout << endl;

    cout << "Probability of a big-chooser: ";
    cin >> p;
    cout << endl;

    cout << "Number of simulatios to run and average over: ";
    cin >> sims;
    cout << endl;

    int i;
    int sumSqrLeft = 0;

    // Runs the simultation sims (entered by user) times
    for (i = 0; i < sims; i++) {
        int sqrLeft = singleSim(N, p);
        sumSqrLeft += sqrLeft;
    }

    // Calculates the average
    double avg = ((double)sumSqrLeft / sims);

    /* Be sure you produce an output of the form:
            Average: 1.2314
       where the number is the correct average */
    cout << "Average: " << avg << endl;

    return 0;
}
