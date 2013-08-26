#ifndef _Fifo_
#define _Fifo_

#include <iostream>
#include <fstream>

#include <stdio.h>
#include <string>

using namespace std;

template <typename T> class Fifo;

template <typename T>
class LLNode
{
    friend class Fifo<T>;
public:
    T value;
    LLNode<T> * prev;
    LLNode<T> * next;

    /// @brief Constructor  
    ///
    /// @param v
    /// @param p
    /// @param n
    LLNode(const T & v, LLNode<T> *p, LLNode<T> * n) :
        value(v),prev(p), next(n)
    {
    }
    LLNode(const LLNode<T> & other):
        value(other.value), prev(other.prev), next(other.next)
    {
    }
    const T & GetValue() const
    {
        return value;
    }
    
    LLNode<T> * GetPrevious() const 
    {
        return prev;
    }
    LLNode<T> * GetNext() const
    {
        return next;
    }
    LLNode<T> & operator=(const LLNode & other)
    {
        if(this != &other)
        {
            value = other.value;
            prev = other.prev;
            next = other.next;
        }
        return *this;
    }
};
template <typename T>
class Fifo
{
private:
    LLNode<T> * first;
    LLNode<T> * last;
    int size;
public:
    Fifo() : size(0),first(NULL),last(NULL)
    {
    }
    Fifo(const Fifo<T> & other)
    {
        size = 0;
        copyList(other);
    }
    ~Fifo()
    {
        Clear();
    }
    Fifo<T> & operator= (const Fifo<T> & other)
    {
        if(this != &other)
        {
            Clear();
            copyList(other);
        }
        return *this;
    }

    bool IsEmpty() const
    {
        return (size == 0);
    }
    void Clear()
    {
        while( first != NULL)
        {
            Remove(first);
        }
        first = NULL;
        last = NULL;
    }
    int GetSize() const
    {
        return size;
    }

    LLNode<T> * GetLast() const
    {
        return last;
    }
    LLNode<T> * GetFirst() const
    {
        return first;
    }
   LLNode<T> * Insert(const T & v, LLNode<T> * n)
   {
        if(IsEmpty())
        {
            first = new LLNode<T>(v,NULL,NULL);
            last = first ;
            size ++;
            return first;
        }
        if(n == NULL)
        {
            LLNode<T> * temp = new LLNode<T>(v,NULL,first);
            first->prev = temp;
            first = temp;
            size ++;
            return temp;
        }
        else if(n == this->last)
        {
            LLNode<T> * temp = new LLNode<T>(v,last,NULL);
            last->next = temp;
            size ++;
            return temp;
        }else
        {
            LLNode<T> * temp = new LLNode<T>(v,n,n->next);
            n->next->prev = temp;
            n->next = temp;
            size ++;
            return temp;
        }
   }
   LLNode<T> * Find(const T & v, LLNode<T> * n)
   {
        if(IsEmpty())
            return NULL;
        LLNode<T> * current;
        if(n == NULL)
        {
            current = first;
            while(current != NULL)
            {
                if(current->GetValue() != v)
                    current = current->next;
                else
                    return current;
            }
        }else
        {
            current = n->next;
            while(current != NULL)
            {
                if(current->GetValue() == v)
                {
                    return current;
                }
                else
                    current = current->next;
            }
        }
            return NULL;
   }
   bool contains(const T & v)
   {
       if(this->Find(v,NULL) != NULL)
           return true;
       else
           return false;
   }
   void Remove(LLNode<T> * n)
   {
       if(IsEmpty())
           return;
       else
       {
           if(size == 1)
           {
               first = last = NULL;
               size --;
           }
           else if(n == first)
           {
               first->prev = NULL;
               first = n->next;
               size--;
           }
           else if(n == last)
           {
               last=last->prev;
               last->next=NULL;
               size--;
           }else
           {
               n->prev->next = n->next;
               n->next->prev = n->prev;
               size --;
           }
       }
        delete n;
   }
   void deletefirst()
   {
       if(first != NULL)
           Remove(first);
   }
   void copyList(const Fifo<T> & other)
   {
      first = last = NULL;
      size = 0;
      size = other.size;
      LLNode<T> * cur = other.first;
      LLNode<T> * nLast = 0;
      while(cur != NULL)
      {
          LLNode<T> * cNode = new LLNode<T>(cur->value,NULL,NULL);
          if(nLast == NULL)
          {
              first = last = cNode;
              nLast = cNode;
          }else
          {
            nLast->next = cNode;
            cNode->prev = nLast;
            nLast = cNode;
            last = nLast;
          }
          cur = cur->next;
      }
   }
   void print(ofstream & output)
   {
       if(first == NULL)
           return;
       LLNode<T> * current = first;
       while(current != last)
       {
           output << current->value <<endl;
           current = current->next;
       }
       output << current->GetValue() << endl;
   }
};

#endif
