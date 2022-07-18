//Linked List: Inserting a node at the beginning
#include<stdlib.h>
#include<stdio.h>

struct Node{
  int data;
  struct Node* next;
};


struct Node* Insert(struct Node* head,int x){
  struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
  temp->data = x;
  temp->next = head;
  head = temp;

  return head;
};

void Print(struct Node* head){
  printf("List => :");
  while(head != NULL){
    printf("|%d|",head->data);
    head = head->next;
  }
  printf("\n");
};

int main(){
  struct Node* head = NULL;
  printf("How many numbers?\n");
  int n,i,x;
  scanf("\n %d",&n);
  for(i=0;i<n;i++){
    printf("\nEnter the number : \n");
    scanf("%d",&x);
    head = Insert(head,x);
    Print(head);
  }
  return 0;
}

