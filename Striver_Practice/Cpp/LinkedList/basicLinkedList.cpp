#include<bits/stdc++.h>

using namespace std;

struct Node{
    public:
        int data;
        Node * next;

    public:
        Node(int raw_data, Node* raw_next)
        {
            data = raw_data;
            next = raw_next;
        }

    public:
        Node(int raw_data){
            data = raw_data;
            next = nullptr;
        }
};




Node* convertToList(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mark = head;
    for(int i =1; i<=arr.size();i++){
        Node* temp = new Node(arr[i]);
        mark->next = temp;
        mark = temp;
    }

    return head;
}

void traverseLinkedList(Node* head){
    Node* marker = head;
    while(marker->next != nullptr){
        cout<<marker->data<<"->";
        marker = marker->next;
    }
}

int findSizeLinkedList(Node* head){
    Node* marker = head;
    int count=0;
    while(marker->next != nullptr){
        cout<<marker->data<<"->";
        count++;
        marker = marker->next;
    }
    return count;
}

bool searchinLL(int value, Node* head){
    Node* marker = head;
    while(marker->next != nullptr)
    {
        if(marker->data == value){
            return true;
        }
        marker= marker->next;
    }
    return false;
}

Node* removeHead(Node* head){
    if(head == NULL) return NULL;
    Node *temp = head;
    head = head->next;
    free(temp);
    return head;
}

Node* removeTail(Node* head){
    if(head==NULL || head->next == NULL) return NULL;
    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
    return head;
}

Node* removeThisPosition(Node* head, int index){
    int count = 0;
    Node* prev = nullptr;
    Node* temp =head;
    if(index ==1){
        head = head->next;
        free(temp);
        return head;
    }
    else{
        while(temp->next){
            count++;
            if(count==index){
                prev->next = prev->next->next;
                free(temp);
              
                return head;
                break;
            }
            prev = temp;
            temp = temp->next;
        }
        return head;
    }
}

Node* removeThisElement(Node* head, int value){
    Node* prev = nullptr;
    Node* temp =head;
    if(head->data ==value){
        head = head->next;
        free(temp);
        return head;
    }
    else{
        while(temp->next){
            if(temp->data == value){
                prev->next = prev->next->next;
                free(temp);
              
                return head;
                break;
            }
            prev = temp;
            temp = temp->next;
        }
        return head;
    }
}

int main()
{

    vector<int> numbers = {12,2,3,4,5,6};

    Node* myList = convertToList(numbers);
    // cout<<myList->data;

    cout<<"Printing the linkedlist"<<endl;
    int count = findSizeLinkedList(myList);
    cout<<endl;

    // cout<<searchinLL(25,myList)<<endl;

    // Node* nodeafterDeleteHead = removeHead(myList);
    // traverseLinkedList(nodeafterDeleteHead);

    // Node* nodeafterDeleteTail = removeTail(myList);
    // traverseLinkedList(nodeafterDeleteTail);

    // Node* x = removeThisPosition(myList, 11);
    // traverseLinkedList(x);

    Node* y = removeThisElement(myList, 66);
    traverseLinkedList(y);

    return 0;
}
