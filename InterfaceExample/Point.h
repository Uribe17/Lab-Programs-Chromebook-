#ifndef POINT_H
#define POINT_H

class Point
{
  public:
      Point (double xval, double yval);
      void move(double dx, doubly dy);
//D in dx and dy are the distance to move in the x and y directions, respectively, it is called "Delta", move does not return any values.
  private:
      double x;
      double y;
};

#endif