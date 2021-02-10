#include "functions.h"

/*Name:Johann Antisseril
 *TerpConnect Login ID: johann
 *UID: 116533928
 *Discussion section: 0207
 */


/*I pledge on my honor that I have not given or received any unauthorized assistance on
 *this assignment
 */

int has366(int y) {
  if(y <= 1752){
    return -1;
  }
  if(y%4 == 0 && y%100 != 0){
    return 1;
  }
  if(y%400 == 0){
    return 1;
  }
  return 0;
}

long sopd(int num, int n) {
  long sum = 0;
  int i;
  if(num < 1 || n < 0){
    return -1;
  }
  for(i = 1; i <= num; i++){
    if(num%i == 0){
      long inner = 1;
      int j;
      for(j = 0;j<n;j++){
        inner *= i;
      }
      sum += inner;
    }
  }
  return sum;
}
