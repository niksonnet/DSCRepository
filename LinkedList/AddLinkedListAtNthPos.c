//Linked List: Inserting a node at Nth position
#include<stdlib.h>
#include<stdio.h>

struct Node{
  int data;
  struct Node* next;
};
struct Node* head;

void Print(){
  struct Node* temp = head;
  while(temp != NULL){
    printf("|%d|",temp->data);
    printf("|%d|\n",temp->next);
    temp = temp->next;
  }

  printf("\n");
}
void Insert(int data, int n){
  struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node));
  temp1->data= data;
  temp1->next= NULL;

  if(n==1){
    temp1->next = head;
    head = temp1;
    return;
  }
  struct Node* temp2 = head;
  int i;
  for(i=0;i<n-2;i++){
      temp2 = temp2->next;
  }
  temp1->next = temp2->next;
  temp2->next = temp1;
  // head = temp2;
};

int main(){
  head = NULL; // empty list
  Insert(5,1); // List: 5
  Insert(4,2); // List: 5,4
  Insert(3,1); // List: 3,5,4
  Insert(2,2); // List: 3,2,5,4
  Print();
}

