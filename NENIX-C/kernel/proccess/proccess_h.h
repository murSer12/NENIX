#define BUFFER 256
#define MAX_FILE 100000

typedef struct {
  int address;
  char name[BUFFER];
} Proccess;


int allProccess = 0;

int createProccess(const char* name , Proccess* proccessMatrix);
int exitProccess(const char* name , Proccess* proccessMatrix);
