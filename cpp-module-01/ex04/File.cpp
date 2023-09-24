#include "main.h"

File::File() {}

void File::setData(std::string fileName, std::string oldString, std::string newString) {
  this->fileName = fileName;
  this->newString = newString;
  this->oldString  = oldString;
}

int File::getBufferSize(std::string line) {
  int count = 0;
  int isFindIt = 0;
  int index = 0;
  int sizeFound = 0;
  while (line[count]) {
    index = 0;
    while (this->oldString[index] && line[count + index] == this->oldString[index])
      index++;
    index == this->oldString.length() && sizeFound++;
    count++;
  }
  return ((line.length() - (sizeFound * this->oldString.length())) + (this->newString.length() * sizeFound));
}

std::string  File::ftReplcae(std::string line) {
  int count = 0;
  int index = 0;
  int buffIndex = 0;
  int bufferSize = this->getBufferSize(line);
  std::string *newDst = new std::string[bufferSize + 1];
  while (line[count] && buffIndex < bufferSize) {
    index = 0;
    while (this->oldString[index] && line[count + index] == this->oldString[index]) {
      index++;
    }
    count += index;
    if (index == this->oldString.length()) {
      index = 0;
      while  (this->newString[index]) {
        newDst[buffIndex] = this->newString[index];
        index++;
        buffIndex++;
      }
    }
    else {
      newDst[buffIndex] = line[count];
      buffIndex++;
      count++;
    }
  }
  newDst[buffIndex] = '\0';
  std::string buffer;
  count = 0;
  while (count < bufferSize) {
    buffer.append(newDst[count]);
    count++;
  }
  delete [] newDst;
  return buffer;
}

void File::errorHnadling() {
  if (this->oldString.empty() || this->newString.empty()) {
    std::cout << "Bruuuh, Argments must not be empty" << std::endl;
    delete this;
    exit(0);
  }
}

void File::readFile() {
  std::ifstream theFile;
  std::ofstream dupFile;
  std::string fileConten;
  theFile.open(this->fileName);
  if (!theFile) {
    std::cout << "Bruuuh, File does not exists" << std::endl;
    delete this;
    exit(1);
  }
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
  dupFile.open(this->newString);
  i = 0;
  while (i < count) {
    dupFile << arrayHolder[i] << std::endl;
    i++;
  }
  dupFile.close();
}

File::~File() {}