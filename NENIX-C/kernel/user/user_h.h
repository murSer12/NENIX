#define MAX_USER 4
#define USER_BUFFER 256

typedef struct {
  int id;
  char name[USER_BUFFER];
  int password;
} User;

int allUser = 0;

int createUser(const char* name , const int password , User* userMatrix);