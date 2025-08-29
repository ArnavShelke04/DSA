#include<iostream>
using namespace std;
// Deletion cases
// 1.Delete the head node-we just need to forget the first node and shift the head pointer . But wait, what happens to the memory? we need to free it as well. We asked for dynamic memory and then we will free it.Time complexity is O(1)
// 2.Deleting a node in between- hum bas ulta kar rahe hai insertion in between ke ... that is jo before wali node hai uska next hum after vali node ko point kar doge and memory free kar doge.
// 3.Deleting the last node- second last vale ko NULL main point karke last vali memory free karni hai.
// 4.Delete a node with a given value (key)(first node with that value)-same procedure as with between.We will traverse and then point our pointer ptr to the one before node.
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
    Node *deleteFirstNode(Node *head){
        Node *ptr= head;//we make a pointer which points to previous head so that we can free memory later on
        head=head->next;//updating head to the next node
        free(ptr);//freeing the memory from the node
        return head;
    }
    Node *deleteInBetween(Node *head,int index){
        Node *p=head;//before wale node tak jayega
        Node *q=head->next;//desired node tak jayega
        int i=0;
        while(i!=index-1){
            p=p->next;
            q=q->next;
            i++;
        }
        p->next=q->next;//before wale node ke next ko after wale node ko point kardo
        free(q);
        return head;
    }
    Node *deleteLastNode(Node *head){
        Node *p=head;
        Node *q=head->next;
        while(q->next!=NULL){
            p=p->next;
            q=q->next;
        }
        p->next=NULL;
        free(q);
        return head;
    }
    Node *deleteByValue(Node *head,int value){
        Node *p=head;
        Node *q=head->next;
        while(q->data!=value && q->next!=NULL){
            p=p->next;
            q=q->next;
        }
        if(q->data == value){
            p->next=q->next;
            free(q);
        }
        else{
            cout<<"No element of value "<<value<<" exists"<<endl;
        }
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
    // deleting first node
    // head=head->deleteFirstNode(head);
    // head->linkedListTraversal(head);
    // cout<<"over"<<endl;
    // deleting in between
    // head=head->deleteInBetween(head,2);
    // head->linkedListTraversal(head);
    // cout<<"over"<<endl;
    // deleting last node
    // head=head->deleteLastNode(head);
    // head->linkedListTraversal(head);
    // cout<<"over"<<endl;
    // delete by value
    // head=head->deleteByValue(head,21);
    // head->linkedListTraversal(head);
    // cout<<"over"<<endl;
    return 0;
}