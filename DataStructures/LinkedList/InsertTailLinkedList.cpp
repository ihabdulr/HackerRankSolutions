/*
PROBLEM:
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
  
  SCORE: 10/10
  
*/


Node* Insert(Node *head,int data)
{
    Node* last = new Node; 
    last->data = data; 
   
    if(head == NULL) head = last; 
    else{
        Node* temp = new Node; 
        temp = head;
        while(temp->next != NULL)
            temp = temp->next;
        temp->next = last;
    }

    
    return head;
}
 
