#include <iostream>
#include <vector>
#include "easy_list.h"
using namespace std;

void itc_even_index_list (const vector <int> &mass, vector <int> &mass2){

    for(int i = 0; i < mass.size(); i ++){
    if (i % 2 == 0)

    mass2.push_back(mass[i]);


}
}

void itc_even_parts_list(const vector <int> &mass, vector <int> &mass2){
    for(int i = 0; i < mass.size(); i ++)

        if(mass[i]%2 == 0){

            mass2.push_back(mass[i]);
        }
}

 int itc_positive_list(const vector <int> &mass){

    int chechik = 0;
    for(int i = 0; i < mass.size();i++){
        if(mass[i] >= 0)
            chechik ++;

    }return chechik;

 }

 
