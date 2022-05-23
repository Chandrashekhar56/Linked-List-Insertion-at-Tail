#include <stdlib.h>
#include <iostream>
using namespace std;
struct Node
{
  int data_part;
  struct Node* next_part;
};
struct Node* head_pointer=NULL;
void create_node_at_End(int value_of_data_part)
{
  struct Node* CreateNewNode = (struct Node*)malloc(sizeof(struct Node));
  CreateNewNode->data_part = value_of_data_part;
  if (head_pointer== NULL)
  {
        CreateNewNode->next_part=NULL;
        head_pointer=CreateNewNode;
  }
  else
  {
      struct Node* temp_pointer=head_pointer;
      while(temp_pointer->next_part!=NULL)
      {
          temp_pointer=temp_pointer->next_part;
      }
      temp_pointer->next_part=CreateNewNode;
      CreateNewNode->next_part=NULL;
  }
}
void display()
{
         if(head_pointer==NULL)
         {
             cout<<"empty";
         }
         else
         {
             struct Node* temp_pointer=head_pointer;
             while(temp_pointer!=NULL)
             {
                 cout<<temp_pointer->data_part<<" ";
                 temp_pointer=temp_pointer->next_part;
             }
         }
}
int main()
{
    cout<<"Inserted Element At End: \n";
    create_node_at_End(21);display();cout<<endl;
    create_node_at_End(7);display();cout<<endl;
    create_node_at_End(8);display();cout<<endl;
    create_node_at_End(50);display();cout<<endl<<endl;
}
