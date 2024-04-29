#pragma once
#include <iostream>
#include <vector>
#include <exception>
class Array{
    public:
    Array(int index): i(index){};
    int i;
    int* array;
    int* create_array(){
        return new int(i);
    }

    void add_element(int data){
        //прописать условие, что если последняя ячейка занята, то создать копию массива в два раза больше текущего, 
        // скопировать все элементы из старого и добавить в новый массив и добавить элемент
        // иначе просто записать в пустую ячейку элемент
        
    }

    int get_element(int index){
        return array[i]; 
    }
   ~Array(){delete[] array;}
};