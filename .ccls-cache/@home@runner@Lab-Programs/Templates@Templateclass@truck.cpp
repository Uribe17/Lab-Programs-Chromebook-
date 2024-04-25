#include <iostream>
#include <vector>
#include "truck.h"
using namespace std;

template <typename T>
Truck<T>::Truck(){
  source.x = 0;
  source.y = 0;
  dest.c = 0;
  dest.y = 0;
}

template <typename T>
Truck<T>::Truck(struct Coordinate src){
  source = src;
  dest.x = 0;
  dest.y = 0;
}

template <typename T>
void Truck<T>::load(vector<T> items){
  cargo = items;
}

template <typename T>
vector<T> Truck<T>::getCargo(){
  return cargo;
}

template class Truck<int>;
template class Truck<string>;


