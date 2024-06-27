#include<stdio.h>
#include<stdlib.h>
#include"helloworld.h"
#include"linkedlist.h"

int main(int argv,char ** args){
  LinkedList * list = initList();
  list -> insert(list,1);
  list -> insert(list,2);
  list -> insert(list,3);
  list -> print(list);

  list -> delete(list,2);
  list -> print(list);

  list -> delete(list,1);
  list -> print(list);

  list -> delete(list,3);
  list -> print(list);

  free(list);
  
  User user;
  UserListVo userListVo;
  user.name = "tome";
  user.age = 10;
  userListVo.name = "Jimi";
  userListVo.age = 10;
  
  for(int a=0;a<1;a++)
    printf("hello world\n"); 
  exit(0);
  return 0;
}
