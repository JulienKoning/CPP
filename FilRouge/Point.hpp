#ifndef _POINT_HPP
#define _POINT_HPP

class Point {
   // par défaut, tout est privé dans une "class"

   int x;
   int y;

 public:
  Point();
  Point(int a, int b);
  int getX();
  int getY();

};

#endif