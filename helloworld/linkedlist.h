#ifndef LINKEDLIST
#define LINKEDLIST
typedef struct Node {
  int data;
  struct Node * next;
} Node;

// there need to define method  ? what is oop?
typedef struct LinkedList{
  Node * head;
  int length;
  // What is function point ? what is point function?
  void (*insert)(struct LinkedList *,int);
  void (*delete)(struct LinkedList *,int);
  void (*print) (struct LinkedList *);
} LinkedList;

void insertNode(LinkedList * list,int data){
  // what is malloc ? what is sizeof ?
  Node * newNode = (Node *)malloc(sizeof(Node));
  newNode -> data = data;
  newNode -> next = NULL;
  if(list -> head == NULL){
    list -> head = newNode;
  }else{
    Node * temp = list -> head;
    while(temp -> next != NULL){
      temp = temp->next;
    }
    temp -> next = newNode;
  }
}
void deleteNode(LinkedList * list,int data){
  Node * temp = list -> head;
  Node * prev = NULL;
  if(temp != NULL && temp -> data == data){
    list -> head = temp -> next;
    free(temp);
    return;
  }

  while(temp!=NULL && temp->data != data){
    prev = temp;
    temp = temp -> next;
  }
  if (temp == NULL) return ;

  prev -> next = temp -> next;
  free(temp);
}

void printList(LinkedList * list){
  Node * temp = list -> head;
  while(temp != NULL){
    printf("%d -> ",temp -> data);
    temp = temp -> next;
  }
  printf("NULL\n");
}

LinkedList * initList(){
  LinkedList * list = (LinkedList *)malloc(sizeof(LinkedList));
  list -> head = NULL;
  list -> insert = insertNode;
  list -> delete = deleteNode;
  list -> print = printList;
  return list;
}

#endif
