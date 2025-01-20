#include "biblioteca.h"

#include <string>
#include <vector>
#include <memory>


void Biblioteca::addLivro(std::shared_ptr<Livro> livro){
  if(livro != nullptr){
  allItems_.push_back(livro);
}
}


void Biblioteca::addRevista(std::shared_ptr<Revista> revista){
  if(revista != nullptr){
  allItems_.push_back(revista);
}
}


void Biblioteca::displayItems() const{
  for(auto item : allItems_){
    item->display();
  }
}

void Biblioteca::removeItem(std::string title){
  for(auto it = allItems_.begin(); it != allItems_.end(); it++){
    if((*it)->getTitle() == title){
      allItems_.erase(it);
      break;
    }
  }
}
