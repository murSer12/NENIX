#define BUFFER 256
#define MAX_FILE 100000

typedef struct {
  int KEY;
  char name[BUFFER];
} File;


int allFile = 0;

int createFile(const char* name , File* fileMatrix);
int deleteFile(const char* name , File* fileMatrix);
