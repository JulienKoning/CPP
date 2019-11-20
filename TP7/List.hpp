#ifndef LIST_H
#define LIST_H

#include<iostream>
#include<exception>
#include<sstream>

class Cell
{
    private:
    int elmt;
    Cell* suiv;

    public:
    Cell(int n){elmt = n, suiv = NULL;}
    Cell(int n, Cell* ptr1){elmt = n, suiv = ptr1;}
    int getElmt(){return elmt;}
    Cell* getSuiv(){return suiv;}
    void setSuiv(Cell* ptr){suiv = ptr;}

};

class List
{
    private:
    Cell* ptr_tete;
    Cell* ptr_fin;
    int nb_cell;

    public:
    List();
    ~List();
    bool empty() const;
    void push_back(int);
    std::ostream& display(std::ostream&);
    void push_front(int);
    int front();
    int back();
    void pop_front();
    void pop_back();
    int size();
};

std::ostream& operator<<(std::ostream& f, List l);

#endif