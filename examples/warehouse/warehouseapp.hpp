#pragma once
#include <map>
#include <string>
#include "types.h"

class WarehouseServer {
public:
  WarehouseServer() :
    products() {}

  bool AddProduct(const Product &p);
  const Product& GetProduct(const std::string& id);

private:
  std::map<std::string, Product> products;
};

