#include <iostream>
#include <cmath>
#include "Alarm.h"

Alarm::Alarm(Subject * s, int i, double xx, double yy, double alarm) {
    id = i;
    x = xx;
    y = yy;
    soundAlarm = alarm;
    s->subscribe(this);
        
}

Alarm::~Alarm( ) { }

void Alarm::notify(double xx,double yy){
    double dis = 0;
    dis = sqrt(pow(xx-x,2)+pow(yy-y,2));
    if (dis > soundAlarm){
        std::cout<<"Alarm" <<id<<" sounded! Moved "<<dis<<" meters"<<std::endl;
    }
}
