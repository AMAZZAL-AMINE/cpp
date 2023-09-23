#include "main.h"

File::File() {}

void File::setData(std::string fileName, std::string oldString, std::string newString) {
  this->fileName = fileName;
  this->newString = newString;
  this->oldString  = oldString;
}


std::string File::ftReplcae(std::string line) {
  return line;
}

void File::readFile() {
  std::ifstream theFile;
  std::string fileConten;
  theFile.open(this->fileName);
  int count = 0;
  while (std::getline(theFile, fileConten)) {
    count++;
  }
  theFile.close();
  int i = 0;
  std::string arrayHolder[count];
  theFile.open(this->fileName);
  while (i < count) {
    std::getline(theFile, arrayHolder[i]);
    arrayHolder[i] = this->ftReplcae(arrayHolder[i]);
    i++;
  }
  theFile.close();
  i = 0;
  while (i < count) {
    std::cout << arrayHolder[i] << std::endl;
    i++;
  }
}

File::~File() {}