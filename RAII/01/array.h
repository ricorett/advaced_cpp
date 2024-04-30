#pragma once
#include <iostream>
#include <vector>
#include <exception>
class Array{
    public:
    Array(int s): size(s){
        create_array();
    };
    int size;
    int logical_size = 0;
    int* array;
    int* create_array(){
        array = new int[size];
        logical_size = 0;
        return array;
    }

    void add_element(int data){
        //прописать условие, что если последняя ячейка занята, то создать копию массива в два раза больше текущего, 
        // скопировать все элементы из старого и добавить в новый массив и добавить элемент
        // иначе просто записать в пустую ячейку элемент
        if (logical_size >= size) {
            int new_actual_size = size * 2;
            int* new_arr = new int[new_actual_size];
            for (int i = 0; i < logical_size; ++i) {
                new_arr[i] = array[i];
            }
            delete[] array;
            array = new_arr;
            size = new_actual_size;
        }

        array[logical_size] = data;
        logical_size++;   
    }

    int get_element(int index){
        if (index < 0 || index >= size){
            throw std::out_of_range("Index out of range");
        }
        return array[index]; 
    }
   ~Array(){delete[] array;}
};

