#include "item.h"
#include "revista.h"
#include <string>
#include <iostream>

Revista::Revista(const std::string& title, const std::string& autor) : Item(title), autor_(autor)  {}

void Revista::display() const {
  std::cout << "Revista: " << title_ <<", Autor: " << autor_ << std::endl;
}

std::string Revista::getTitle() const{
   return title_;
}