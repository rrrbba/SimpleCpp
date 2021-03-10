#include <iostream>

using namespace std;

int multiArray() {
  //Declaring multi-dimensional arrays
  //type name [dimension1_size] [dimension2_size]
  int movie_rating [3][4]; //3 rows, 4 columns...total size is 12 integers
  /*
   *                        movie
   *                    (second index)
   *                      0   1   2   3
   *                0   | 0 | 4 | 3 | 5 |
   *   reviewer     1   | 2 | 3 | 5 | 5 |
   * (first index)  2   | 1 | 4 | 4 | 5 |
   *
   */

  cout << "Enter the third movie rating for the second reviewer: " << endl; //will be 5 based off of grid above
  cin >> movie_rating [1] [2];
  cout << movie_rating [1][2];

  int movie_ratingTwo [3][4]
  {
          {0, 4, 3, 5},
          {2, 3, 3, 5},
          {1, 4, 4, 5}
  };


  return 0;
}