#include <iostream>
#include <vector>
#include "easy_list.h"
using namespace std;

void itc_rev_list(vector <int> &mass){//6


    int c;
    int N = mass.size();
    for(int i = 0; i < N/2; i++){
        c = mass[N - 1 -i];
        mass[N -1 -i] = mass[i];
        mass[i] = c;
    }
}

void itc_rev_par_list(vector <int> &mass){//7
    int c;
    int N = mass.size();
       int stop;
    if (N % 2 == 0)
        stop = N - 1;
    else
        stop = N - 2;

    for (int i = 0; i < stop; i += 2) {
        c = mass[i];
        mass[i] = mass[i+1];
        mass[i+1] = c;
    }
    itc_rev_list(mass);


}





void itc_lshift_list(vector <int> &mass){//8
    int N = mass.size();
     if(N > 0){
    int k = mass[0];
    for(int i = 0; i < N-1; i++){
    mass[i] = mass[i+1];
    }
    mass[N-1] = k;
}
}
void itc_rshift_list(vector <int> &mass){//8.5
    int N = mass.size();
  if (N > 0){
  int k = mass[N-1];
  for(int i = N-1; i>0;i=i-1)
  mass[i] = mass[i - 1];
  mass[0] = k;
}
}
void itc_super_shift_list(vector <int> &mass, int n){//9
    int N = mass.size();

    if(n >= 0){
        itc_rshift_list(mass);
    }
    else{
         itc_lshift_list(mass);



    }

}
