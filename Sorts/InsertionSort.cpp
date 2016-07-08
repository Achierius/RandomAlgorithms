#include <iostream>
#include <list>
#include <cmath>
#include <ctime>
#include <cstdio>

#define _MAX_INT 100;

std::list<int>* genList(int size){
  std::srand(time(NULL));
  std::list<int>* ls;
  for(int i = 0; i < size; i++){
    ls->push_back(std::rand()%%_MAX_INT);
  }
  return ls;
}

int main(){

}
