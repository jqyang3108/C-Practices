#include <iostream>
#include "GPS.h"

GPS::GPS(int s){
   obs = new Observer*[size];
    x,y,idx=0;
    size = s;
}

GPS::~GPS( ) {
   delete obs;
}
void GPS::subscribe(Observer * o){
    if ( size > idx){
        obs[idx] = o;
        idx++;
    }
    else{
        std::cout << "obs full, size:" << size<<",idx:"<<idx<<std::endl;
    }
    
};

void GPS::update(double xx, double yy){
    x=xx;
    y=yy;
    GPS::notify();
};

void GPS::notify(){
    for (int i=0; i < size; i++){
        obs[i]->notify(x,y);
    }
}
