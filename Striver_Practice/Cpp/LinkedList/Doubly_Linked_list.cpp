#include<bits/stdc++.h>

using namespace std;

struct DoublyLinkedList{
    int data;
    DoublyLinkedList* next;
    DoublyLinkedList* prev;

    public:
        DoublyLinkedList(int value){
            data = value;
            next = nullptr;
            prev = nullptr;
        }

        DoublyLinkedList(int value, DoublyLinkedList* nextNode, DoublyLinkedList* prevNode){
            data = value;
            next = nextNode;
            prev = prevNode;
        }
};

DoublyLinkedList* createDDL(vector<int> numbers){
    DoublyLinkedList *head = new DoublyLinkedList(numbers[0]);
    DoublyLinkedList* previous = head;
    for(int i =1; i<numbers.size(); i++){
        DoublyLinkedList *temp = new DoublyLinkedList(numbers[i], nullptr, previous );
        previous->next = temp;
        previous = temp;
    }
    return head;
}

void traverseDLL(DoublyLinkedList *head){
    while(head!=NULL){
        cout<<head->data<<" <-> ";
        head = head->next;
    }
}

DoublyLinkedList* reverseDLL(DoublyLinkedList* head){
    if(head == NULL || head->next == NULL)
    {
        return NULL;
    }

    DoublyLinkedList *temp = NULL;
    DoublyLinkedList *current = head; //step
    while(current != nullptr){
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev; //step
    }

    return temp->prev;
    
}


int main(){
    vector<int> array = {1, 2, 34, 54 , 100, 13, 65};
    DoublyLinkedList *header = createDDL(array);
    cout<<"Before Reverse"<<endl;
    traverseDLL(header);
    DoublyLinkedList* newHeader = reverseDLL(header);
    cout<<endl<<"After Reverse"<<endl;
    traverseDLL(newHeader);
    return 0;
}