#include <string>
#include "item.h"
#include "livro.h"
#include <iostream>

Livro::Livro(const std::string& title, const std::string& autor) : Item(title), autor_(autor)  {}

void Livro::display() const {
  std::cout << "Livro: " << title_ <<", Autor: " << autor_ << std::endl;
}

std::string Livro::getTitle() const{
   return title_;
}
