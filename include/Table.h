//
// Created by Brando on 14/03/2025.
//

#ifndef TABLEORRELATION_H
#define TABLEORRELATION_H
#include <string>
#include <vector>

class Table {
  private:
    std::vector<std::string> attributes{};
    std::string name;

  public:


    // Constructor
    explicit Table(std::string name);

    void setAttribute(std::string attribute);

    std::string getTableNameAndHeaders();

};
#endif //TABLEORRELATION_H
