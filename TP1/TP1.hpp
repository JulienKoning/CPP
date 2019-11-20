#ifndef POINT_H
#define POINT_H

class Point {
   // par défaut, tout est privé dans une "class"

   int x;
   int y;
   static int compteur;

 public:
  Point();
  Point(int a, int b);
  static int getcompteur();
  int getX();
  int getY();
  void setX(int a);
  void setY(int b);
  void deplacerDe(int a, int b);
  void deplacerVers(int a, int b);


};

#endif