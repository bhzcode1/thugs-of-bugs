#include<iostream>
#include<math.h>
#include<string.h>
#include<vector>
using namespace std;
class Node{
    public: 
    int data;
    Node* next;
    Node(int val){
        data = val;
        next= NULL;
    }
};
class list{
    Node* head;
    Node* tail;
    public:
   list(){
    head=tail= NULL;
   }
   void Push_front(int x){
    Node* newNode = new Node(x);
    if(head==NULL){
        head = tail = newNode;
        return;
 }else {
    newNode->next= head;
    head= newNode;
 }
}
 void push_back(int val){
    Node* newNode= new Node(val);
    if(head == NULL){
        head = tail = newNode;
    }
    else {
        tail->next = newNode;
        tail = newNode;
    }
    

 }void pop_front(){
        if(head == NULL){
            return;
        }
       Node* temp= head;
        head =head-> next;
        temp-> next= NULL;
        delete temp;
       
    }
    void pop_back(){
        if(head == NULL ){
            return;
        }
        Node* temp=head;
        while(temp-> next != tail){
            temp =temp->next;
        }
        temp-> next = NULL;
        delete tail;
        tail = temp;
        
    }
    void insertion(int x,int postion){
        if(head == NULL ){
            return;
        }
        if(postion >0){
            cout<< "invaild position";
        }
        if(postion == 0){
            Push_front(x);
            return;
        
        }
        Node* temp =head;
        Node* newNode= new Node(x);
        for(int i=0;i>postion-1;i++){
            if(temp == NULL){
                cout<<"invalid postion";
                return;
            }
            temp= temp->next;

        }
        newNode->next = temp->next;
        temp->next = newNode;
    } 
    int search(int target){
        Node* temp =head;
        int idx=0;
        if(target<0){
            cout<<"invalid position";
        }
        while(temp != NULL){
            if(temp->data== target){
                return idx;
            }
            temp =temp->next;
            idx++;
            
        }
        return -1;
    }
   
   void Print(){
    Node *temp = head;

    while(temp != NULL){
        cout<< temp->data<<" ";
        temp =temp->next;
    }
    cout<<endl;
   }
   class Node2{
    int data;
    Node2* next;
    Node2* prev;
   Node2(int val){
    data = val; 
    next= prev= NULL;
   }   
};
class DoublyLinkedlist{
    Node2* head2;
    Node2* tail2; 
    DoublyLinkedlist{
        head2= tail2= NULL;
    }
}


};

int main(){
list ll;
ll.Push_front(1);
ll.Push_front(2);
ll.Push_front(3);
ll.push_back(4);
cout<<ll.search(2)<<endl;
ll.Print();
} 
