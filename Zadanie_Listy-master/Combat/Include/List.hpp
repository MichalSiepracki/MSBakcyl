#include <iostream>
template<typename type>

class list
  {
    public:

      struct element
      {
       type data;
        element *next;
        element()
        {
         next = 0;
         }
       };
     element *FirstElement;
     element *temporary;

     void pushBack(type input)
     {
       element *NewElement = new element;
       NewElement -> data = input;
       if(FirstElement == 0)
       {
         FirstElement = NewElement;
       }
       else
       {
         temporary = FirstElement;

         while(temporary -> next)
         {
           temporary = temporary -> next;
         }
         temporary -> next = NewElement;
         NewElement -> next = 0;
       }

     }
     void print()
     {
        temporary = FirstElement;
        while(temporary)
        {
          std::cout<<temporary -> data;
          temporary = temporary -> next;
        }
     void size()
     {
        temporary = FirstElement;
        int size = 0;
        while(temporary)
        {
          size++;
          temporary = temporary -> next;
        }
        std::cout<<std::endl;
        std::cout<<"rozmiar = "<<size<<std::endl;
     }

     list()
     {
      FirstElement = 0;
     };
  };
