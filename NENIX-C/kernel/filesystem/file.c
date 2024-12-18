#include "file_h.h"

int createFile(const char* name , File* fileMatrix){
  if(allFile < MAX_FILE){
    File newFile;
    newFile.KEY = allFile;
    strcpy(newFile.name , name);
    fileMatrix[allFile] = newFile;
    ++allFile;
  }
  else {
    printf("\nSo many files!\n\n");
  }
}

int deleteFile(const char* name , File* fileMatrix){
  for(int i = 0; i < allFile ; ++i){
    if(strcmp(name , fileMatrix[i])){
      printf("Deleting file : " + *name);
      fileMatrix[i] = NULL;
      --allFile;
    }
    else {
      printf("Cannot find that file!\n");
    }
  }
}