#include <iostream>
#include <string>
#include <vector>
#ifndef TRUCK_H
#define TRUCK_H

using namespace std;

struct Coordinate{
  double x;
  double y;
};

template <typename T>
class Truck{
  public:
    Truck();
    Truck(struct Coordinate src);
    void load(vector<T> items);
    vector<T> getCargo();
  private:
    struct Coordinate source;
    struct Coordinate dest;
    vector<T> cargo;
};

#endif