#include "proccess_h.h"

int createFile(const char* name , Proccess* proccessMatrix){
  if(allFile < MAX_FILE){
    File newFile;
    newProccess.address = allProccess;
    strcpy(newProccess.name , *name);
    fileMatrix[allProccess] = &newProccess;
    ++allProccess;
  }
  else {
    return 1;
  }
  return 0;
}

int deleteFile(const char* name , Proccess* proccessMatrix){
  for(int i = 0; i < allProccess ; ++i){
    if(strcmp(name , proccessMatrix[i])){
      printf("Deleting file : " + *name);
      proccessMatrix[i] = NULL;
      --allProccess;
    }
    else {
      return 1;
    }
  }
  return 0;
}