#include <iostream>
#include <vector>
#include "easy_list.h"
using namespace std;




void itc_rev_list(vector <int> &mass) {//6

  int cetchik;
  if(mass.size() > 0){
    for (int i = 0; i <= mass.size() / 2; i++) {
      cetchik = mass[i];
      mass[i] = mass[mass.size() - 1 - i];
      mass[mass.size() - 1 - i] = cetchik;
    }
  }
}

void itc_rev_par_list(vector <int> &mass) {//7
  int cetchik;
  if (mass.size() > 0){
    for (int i = 0; i < mass.size() - 1; i += 2) {
      cetchik = mass[i];
      mass[i] = mass[i + 1];
      mass[i + 1] = cetchik;
}
}
}

void itc_rshift_list(vector <int> &mass){//8
     if(mass.size() == 0){
    }else
    {
        int g = mass[mass.size() -1];
        for(int i = mass.size() -1; i > 0; i--){
            mass[i] = mass[i-1];
        }
        mass[0] = g; 

}
}

