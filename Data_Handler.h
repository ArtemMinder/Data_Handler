  // Copyright 2019 <Artem>

#pragma once
#include <fstream>
#include <vector>
#include <iterator>
#include <string>
#include <iostream>

class DataHandler {
 public:
std::string fileName ='fileName';

void read();
void data();
 private:
std::vector<std::string>  info;
};
