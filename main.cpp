#include <iostream>
#include <string>
#include <vector>
#include <memory>

#include "biblioteca.h"
#include "item.h"
#include "revista.h"
#include "livro.h"


int main(){
  std::shared_ptr<Livro> l_hp = std::make_shared<Livro>("Harry Potter", "J.K. Rowling");
  std::shared_ptr<Livro> l_pca = std::make_shared<Livro>("Pequena Coreografia do Adeus", "Carla Madeira");

  std::shared_ptr<Revista> r_vogue = std::make_shared<Revista>("Vogue", "Vogue");
  std::shared_ptr<Revista> r_g1 = std::make_shared<Revista>("G1", "Globo");

  Biblioteca biblioteca;
  biblioteca.addLivro(l_hp);
  biblioteca.addLivro(l_pca);

  biblioteca.addRevista(r_vogue);
  biblioteca.addRevista(r_g1);



  biblioteca.displayItems();

  biblioteca.removeItem("Harry Potter");

  biblioteca.displayItems();

  
  
}

