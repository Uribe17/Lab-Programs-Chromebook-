
/** 
  *Selection Sort is based upon finding the min value in the array and swapping it with the first element.
  * If we have a vector like this one:   Vector:   [ 0 ][ 1 ][ 2 ][ 3 ][ 4 ]
                                        Elements:  [11 ][ 9 ][17 ][ 5 ][12]
  * The first element is the min value, so we swap it with the first element, and repeat that process until the vector is sorted from smallest to largest.
  * The vector is now:        Vector:[ 0 ][ 1 ][ 2 ][ 3 ][ 4 ]
                            Elements:[ 5 ][ 9 ][11 ][12 ][17 ]
**/

// When sorting to the tens of thousands, if the growth of elements is linear, the time needed to sort it all would not be, and would instead grow like an exponential function.

/** Big O's of Sorting Algorithms 
 *   Algorithm    | T.C (Best) | T.C (Ave.) | T.C. (Worst) | Space Complexity |
 * Bubble Sort    |    O(n)    |   O(n^2)   |    O(n^2)    |       O(1)       |
 * Insertion Sort |    O(n)    |   O(n^2)   |    O(n^2)    |       O(1)       |
 * Selection Sort |    O(n^2)  |   O(n^2)   |    O(n^2)    |       O(1)       |
 * If a sorting function is that of O(logn), that produces efficient time
**/