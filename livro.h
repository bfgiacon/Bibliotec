#ifndef LIVRO_H
#define LIVRO_H

#include <string>
#include "item.h"

class Livro : public Item{
  public:
    Livro(const std::string& title, const std::string& autor);

    void display() const override;

    std::string getTitle() const override;

  private:
    std::string autor_ = "";
    //std::string title_ = "";

};

#endif