#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include <memory>
#include <string>
#include <vector>


#include "item.h"
#include "livro.h"
#include "revista.h"

//é uma classe normal, por isso não está "conectada" a nenhuma classe
class Biblioteca {
public:

  void addLivro(std::shared_ptr<Livro> livro);

  void addRevista(std::shared_ptr<Revista> revista);


  void displayItems() const;

  void removeItem(std::string title);

private:
  std::vector<std::shared_ptr<Item>> allItems_ = {};
};

#endif