#include <iostream>
// 4 cases
// 1.Insert at beginning- Time complexity is O(1) cuz farak nahi padta linked list ki length pe insertion ka. Isme basically ek node banao and usko linked list ke start ko point kardo and head pointer ko new node pe point kardo.
// 2.Insert in between-isme hum index pass karenge and similar kaam karenge . time complexity for this will be O(n) cuz we use a pointer to traverse
// 3.Insert at end-time complexity for this will be O(n) cuz we use a pointer to traverse
// 4.Insert after the node- is case main we know the address of the node and we dont have to traverse but directly add our node after that. Time complexity is O(1) cuz we have the address and dont have to traverse for that.
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    void linkedListTraversal(Node *ptr){
        while(ptr!=NULL){
            cout<<"element is : "<<ptr->data<<endl;
            ptr=ptr->next;
            
        }
    }
    Node *insertAtBeginning(Node *head,int data){
        Node *ptr= new Node();
        ptr-> next=head;//as per theory head ko change karna cuz hume iss ptr ko beginning main lana hai
        ptr->data=data;
        return ptr;
        //pay attention to the return type cuz we are returning some pointer and its not void
    }
    Node *insertInBetween(Node *head,int data,int index){
        Node *ptr=new Node();
        Node *p=head;//pehle toh we will like to traverse for our index with the help of p
        int i=0;
        while(i!=index-1){
            p=p->next;
            i++; 
        }//we will traverse till index-1 cuz we want to insert after that element .Try understanding by drawing nodes on a paper.
        ptr->next=p->next;//we set the pointer of our new node to the node we want ahead of our new node.
        p->next=ptr;///we set the pointer of the node we want behind our new node to the address of our new node
        ptr->data=data;
        return head;
    }
    Node *insertAtEnd(Node *head,int data){
        Node *ptr= new Node();
        ptr->data=data;
        Node *p=head;
        while(p->next!=NULL){
            p=p->next;
        }//end tak traverse karo 
        p->next=ptr;//end main add kardo apne naye node ko
        ptr-> next=NULL;//naye node ke end ko NULL pe point kardo
        return head;//head change hua nahi
    }
    Node *insertAfterNode(Node *head,Node *previousnode,int data){
        Node *ptr=new Node();
        ptr->data=data;
        ptr->next=previousnode->next;//setting pointer of our new node
        previousnode->next=ptr;
        return head;
    }
};
int main(){
    Node *head= new Node();
    Node *second=new Node();
    Node *third=new Node();
    Node *fourth=new Node();
    head->data=7;
    head->next=second;
    second->data=34;
    second->next=third;
    third->data=44;
    third->next=fourth;
    fourth->data=21;
    fourth->next=NULL;
    head->linkedListTraversal(head);
    cout<<"over"<<endl;
    head=head-> insertAtBeginning(head,56);
    head->linkedListTraversal(head);
    cout<<"over"<<endl;
    head=head->insertInBetween(head,39,2);
    head->linkedListTraversal(head);
    cout<<"over"<<endl;
    head=head->insertAtEnd(head,100);
    head->linkedListTraversal(head);
    cout<<"over"<<endl;
    head=head->insertAfterNode(head,second,25);
    head->linkedListTraversal(head);
    cout<<"over"<<endl;

    return 0;
}