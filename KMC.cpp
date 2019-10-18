#include <math.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
  int x = 30;
  int y = 30;
  int lattice[x][y];

  //----------------------------------------------------------------------------
  //Assigns value to all elements in lattice to be silicon.
  for (int i = 0; i < y; i++) {
    for (int j = 0; j < x; j++) {
      lattice[i][j] = 1;
    }
  }

  //----------------------------------------------------------------------------
  //Creates impurities of Boron in some elements.

  //----------------------------------------------------------------------------
  //Prints array.
  for (int i = 0; i < y; i++) {
    for (int j = 0; j < x; j++) {
      cout << lattice[i][j];
      cout << " ";
    }
    cout << endl;
  }
}

//------------------------------------------------------------------------------

int randLattice(int numberImp, int valueImp, int arr[][], int sizeArr1, int sizeArr2) {
  //Generates random impurities in array.
  int sizeArr = sizeArr1 * sizeArr2;
  int assign[numberImp];

  for (int i = 0; i < numberImp; i++) {
    int numb = rand() % sizeArr + 1;
    if (numb == )
    assign[i] = numb;
  }

  for (int i = 0; i < y; i++) {
    for (int j = 0; j < x; j++) {
      lattice[i][j] = 1;
    }
  }
}
