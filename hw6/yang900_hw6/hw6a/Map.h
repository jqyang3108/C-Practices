#ifndef MAP_H
#define MAP_H
#include "Subject.h"
#include "Observer.h"
class Map : Observer{    //modified
public:
    Map(Subject*);
    virtual ~Map( );
    virtual void notify(double,double);
};
#endif /* MAP_H */
