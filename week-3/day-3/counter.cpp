#include "counter.h"
#include <iostream>
counter::counter(){}
counter::counter(int start) : _start(start)
{}
void counter::add(int number)
{
    _start += number;
}
void counter::add()
{
    ++_start;
}
int counter::get()
{
   return _start;
}
void counter::reset()
{
    int begin = 0;
    _start = begin;
}
