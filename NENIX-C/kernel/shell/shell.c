#include "shell_h.h"

int prompt(User* userMatrix){
	char userName[BUFFER];
	if(allUser != 0){
      int select;
	  printf("\t\tSelect User: \n\n");
	  for(int i = 0; i < allUser ; ++i){
       printf("\t\t%d - %s\n" , (i + 1) , userMatrix[i].name);
	  }
	  scanf("%d" , &select);
	  switch(select){
        case 1:
      	  strcpy(userName , userMatrix[1].name);
      	  break;
      	case 2:
      	  strcpy(userName , userMatrix[2].name);
      	  break;
      	case 3:
      	  strcpy(userName , userMatrix[3].name);
      	  break;
      	case 4:
      	  strcpy(userName , userMatrix[4].name);
      	  break;
	  } 
	}
	while(TRUE){
      char prompt[BUFFER];
	  printf("%s&nenix$ " , userName);
	  scanf("%s" , prompt);
	  if(strcmp(prompt , "exit")){
        printf("Exiting...\n\n");
        return 0;
	  }
	}
	return 0;
}
