#ifndef REVISTA_H
#define REVISTA_H

#include <string>
#include "item.h"

class Revista : public Item{
  public:
    Revista(const std::string& title, const std::string& autor);

    void display() const override;

    std::string getTitle() const override;
  
  private:
    std::string autor_ = "";
    //std::string title_ = "";
};

#endif