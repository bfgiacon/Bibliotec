#ifndef ITEM_H
#define ITEM_H

#include <string>

class Item{
  public: 
    Item(std::string title) : title_(title) {};
    virtual ~Item() = default;
    virtual void display() const = 0; //const? //

    virtual std::string getTitle() const = 0;

  protected:
    std::string title_ = "";
  
};

#endif
