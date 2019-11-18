#include <math.h>
#include <stdio.h>
#include <iostream>
#include <random>

using namespace std;

int createImp(int endVal) {
  //Creates random impurity in lattice.
  random_device rd;
  mt19937 eng(rd());
  uniform_int_distribution <> distr(0, endVal - 1);

  return distr(eng);
}

//------------------------------------------------------------------------------
int main() {
  int x = 5;
  int y = 5;
  int lattice[x][y];

  //----------------------------------------------------------------------------
  //Assigns value to all elements in lattice to be silicon.
  for (int j = 0; j < y; j++) {
    for (int i = 0; i < x; i++) {
      lattice[i][j] = 1;
    }
  }

  //----------------------------------------------------------------------------
  //Creates impurities in lattice.
  int numbImp = 15;
  int valueImp = 2;
  int xImp[numbImp];
  int yImp[numbImp];

  for (int i = 0; i < numbImp; i++) {
    xImp[i] = createImp(x);
    yImp[i] = createImp(y);
  }

  for (int i = 0; i < numbImp; i++) {
    lattice[xImp[i]][yImp[i]] = valueImp;
  }

  

  //----------------------------------------------------------------------------
  //Prints array.
  for (int j = 0; j < y; j++) {
    for (int i = 0; i < x; i++) {
      cout << lattice[i][j];
      cout << " ";
    }
    cout << endl;
  }
}
