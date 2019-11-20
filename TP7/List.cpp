#include "List.hpp"

List::List()
{
    ptr_tete = NULL, ptr_fin = NULL, nb_cell = 0;
}

List::~List()
{

}

bool List::empty() const
{
    return (nb_cell == 0);
}

void List::push_back(int a)
{
    Cell* tmp = new Cell(a, NULL);
    ptr_fin->setSuiv(tmp);
    ptr_fin = ptr_fin->getSuiv();
    if (nb_cell ==0)
    {
        ptr_tete = ptr_fin;
    }
    nb_cell++;
}

void List::push_front(int a)
{
   if (nb_cell == 0)
   {
       ptr_tete = new Cell(a);
       ptr_fin = ptr_tete;
   }
   else
   {
       ptr_tete = new Cell(a,ptr_tete);
   }
   nb_cell++;
}

int List::front()
{
    return ptr_tete->getElmt();
}

int List::back()
{
    return ptr_fin->getElmt();
}

void List::pop_front()
{
    if (nb_cell <= 1)
    {
        ptr_fin = NULL;
        ptr_tete = NULL;
    }
    else
    {
        ptr_tete = ptr_tete->getSuiv();
    }
    if (nb_cell)
    {
        nb_cell--;
    }
    
}

void List::pop_back()
{
    if (nb_cell <=1)
    {
        ptr_fin = NULL;
        ptr_tete = NULL;
    }
    else
    {
        Cell* tmp = ptr_tete;
        for (int i = 0; i < nb_cell-2; i++)
        {
            tmp = tmp->getSuiv();
        }
        ptr_fin = tmp;
        ptr_fin->setSuiv(NULL);
    }
    if (nb_cell)
    {
        nb_cell--;
    }
}

int List::size()
{
    return nb_cell;
}

std::ostream& List::display(std::ostream& f)
{
    f<<"[";
    Cell* cour = ptr_tete;
    while (cour != NULL)
    {
        f<<cour->getElmt();
        if (cour->getSuiv() != NULL)
        {
            f<<", ";
        }
        
        cour = cour->getSuiv();
    }
    f<<"]";
    return f;
}

std::ostream& operator<<(std::ostream& f, List l)
{
    l.display(f);
    return f;
}

