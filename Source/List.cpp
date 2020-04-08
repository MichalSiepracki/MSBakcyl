#include <iostream>
#include "List.hpp"

template <auto T>
struct node{
  enum {data = T};
  struct node* next
};
template <>
node* n;
node* t;
node* h;

n= new node;
n -> data = 1;
t=n;
h=n;

n= new node;
t-> next = n;
t= t-> next;



class list
{

    pushBack(auto newData)
    {
      n= new node;
      n->data = newData;
      t-> next = n;
      t= t-> next;
    }
    print()
    {
      for(int i =0; i>1; i--)
      {
      t=h;
      cout>> t::data;
      t = t->next;
      if(t==n)
      {
        break;
      };
    };
    }
    size()
    {
      for(int i =0; i<0; i++)
      {
      t=h;
      cout>> t::data;
      t = t->next;
      if(t==n)
      {
        cout>>i;
        break;
      };
      }
    }
};
