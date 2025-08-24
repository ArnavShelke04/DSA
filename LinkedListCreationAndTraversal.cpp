#include<iostream>
using namespace std;
/*traversal ke liye hum ek pointer banayenge aur fir use har
node pe point karayenge*/
// jo first node hota hai usse hum head node kehte hai
class Node{
    public:
    int data;
    Node *next;
   /* ek pointer banaya jo agle node ko point karega
    ab dekhne vaali baat ye hai ki data int hai fir
    bhi next ka datatype Node hai ...iska reason hai
    hum poore node ko point kar rahe hai na ki bas 
    uske data ko*/
    void linkedListTraversal(Node *ptr){
        while(ptr!=NULL){
            cout<<"element is : "<<ptr->data<<endl;//to display data
            ptr=ptr->next;//to update our pointer
        }
    }
};
int main(){
    Node *head= new Node();
    /*iska matlab hai humne dynamic memory request
    kari hai Node ke liye*/
    Node *second=new Node();
    Node *third=new Node();
    Node *fourth=new Node();
    // link first and second nodes
    //head.data=7
    // you cant write this cuz pay attention that head is not an object (block of memory) but it is a pointer which points to that block of memory
    head->data=7;
    // Its a c++ thing we use arrows for pointers but for java we use dots for references
    head->next=second;
    second->data=34;
    second->next=third;
    third->data=44;
    third->next=fourth;
    fourth->data=21;
    fourth->next=NULL;
    // NULL in capital
    head->linkedListTraversal(head);
    return 0;
}