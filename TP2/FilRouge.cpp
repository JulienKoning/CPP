#include <iostream>
#include <sstream>


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
Point::Point(){
    x=0, y=0;
}

Point::Point(int a, int b){
    x=a, y=b;
}
int Point::getX() {
  return x;
}

int Point::getY() {
  return y;
}
class Rectangle {
    private :
    Point p;
    int w;
    int h;

    public : 
    Rectangle();
    Rectangle(int a, int b, int c, int d);
    ~Rectangle();
    std::string toString();
};

Rectangle::Rectangle(){
    p=Point(0,0); w=0; h=0;
    std::cout<<"Constructeur1"<<std::endl;
}

Rectangle::Rectangle(int a, int b, int c, int d){
    p=Point(a,b); w=c; h=d;
    std::cout<<"Constructeur2"<<std::endl;
}

Rectangle::~Rectangle(){
    std::cout<<"Tais-toi"<<std::endl;
}

class Cercle{
    private :
    Point p;
    int w;
    int h;
    public :
    Cercle();
    Cercle(int a, int b, int c, int d);
    std::string toString();
};

Cercle::Cercle(){
    p=Point(0,0); w=0; h=0;
    std::cout<<"Constructeur1"<<std::endl;
}

Cercle::Cercle(int a, int b, int c, int d){
    p=Point(a,b); w=c; h=d;
    std::cout<<"Constructeur2"<<std::endl;
}

std::string Cercle::toString(){
    std::ostringstream res;
    res<<"CERCLE "<< p.getX() <<" "<< p.getY() <<" "<<w<<" "<<h;
    return res.str();
}
std::string Rectangle::toString(){
    std::ostringstream res;
    res<<"RECTANGLE "<< p.getX() <<" "<< p.getY() <<" "<<w<<" "<<h;
    return res.str();
}

int main(){
    Rectangle rectangle(1, 2, 3, 4);
    Cercle cercle(1,1,2,2);
    std::cout<<rectangle.toString()<<std::endl;
    std::cout<<cercle.toString()<<std::endl;

    return 0;
}