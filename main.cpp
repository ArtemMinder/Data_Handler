  // Copyright 2019 <Artem>

#include "Data_Handler.h"

int main(int argc, char** argv) {
  if (argc > 1 && argc < 3) {
  std::string name{ argv[1] };
  DataHandler o1;
  o1.data(name);
  o1.read();
  } else {
  std::cout << "Enter the name of a single file as parameter\n";
  }
  return 0;
}