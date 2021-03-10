#include <iostream>
using namespace std;
struct Node{
    int item;
    Node * next = nullptr;
};

struct SortedList{
    Node * pHead = nullptr;
    void add(int  item){
        Node * node = new Node;
        node->item = item;
        if (!pHead){
            pHead = node;
        } else {
            if (item <= pHead->item){
                node->next = pHead;
                pHead = node;
            } else {
                Node * temp = pHead;
                while (temp->next && item>= temp->next->item){
                    temp = temp->next;
                }
                if (!temp->next){
                    temp->next = node;
                } else {
                    node->next = temp->next;
                    temp->next = node;
                }

            }
        }
    }

    int get(int id) {
        if (id == 0) {
            return pHead->item;
        } else {
            Node * temp = pHead;
            int count = 1;
            while (count <= id){
                temp = temp->next;
                count++;
            }
            return temp->item;
        }
    }
    int size(){
        int count = 0;
        Node * temp = pHead;
        while (temp){
            count++;
            temp = temp->next;
        }
        return count;
    }

    void remove(int id){
        if (id == 0) {
            pHead = pHead->next;
        } else {
            Node * temp = pHead;
            int count = 1;
            while (count < id){
                temp = temp->next;
                count++;
            }
            temp->next = temp->next->next;
        }
    }


    void printAll(){
        Node * temp = pHead;
        while (temp){
            cout << temp->item << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

struct UniqueSortedList{
    Node * pHead = nullptr;
    void add(int item) {
        Node * node = new Node;
        node->item = item;
        if (!pHead){
            pHead = node;
        } else {
            if (item <= pHead->item){
                if (item != pHead->item){
                    node->next = pHead;
                    pHead = node;
                }
            } else {
                Node * temp = pHead;
                while (temp->next && item> temp->next->item){
                    temp = temp->next;
                }
                if (!temp->next){
                    if(temp->item != item) {
                        temp->next = node;
                    }

                } else {
                    if(temp->next->item != item) {
                        node->next = temp->next;
                        temp->next = node;
                    }
                }
            }
        }
    }
    int get(int id) {
        if (id == 0) {
            return pHead->item;
        } else {
            Node * temp = pHead;
            int count = 1;
            while (count <= id){
                temp = temp->next;
                count++;
            }
            return temp->item;
        }
    }
    int size(){
        int count = 0;
        Node * temp = pHead;
        while (temp){
            count++;
            temp = temp->next;
        }
        return count;
    }

    void remove(int id){
        if (id == 0) {
            pHead = pHead->next;
        } else {
            Node * temp = pHead;
            int count = 1;
            while (count < id){
                temp = temp->next;
                count++;
            }
            temp->next = temp->next->next;
        }
    }
    void printAll(){
        Node * temp = pHead;
        while (temp){
            cout << temp->item << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
SortedList * Union(SortedList * a, SortedList * b) {
    SortedList * sortedList = new SortedList;
    for (int i = 0; i < a->size(); ++i) {
        bool check = true;
        for (int j = 0; j < sortedList->size(); ++j) {
            if (a->get(i)==sortedList->get(j)){
                check = false;
                break;
            }
        }
        if (check){
            sortedList->add(a->get(i));
        }
    }
    for (int i = 0; i < b->size(); ++i) {
        bool check = true;
        for (int j = 0; j < sortedList->size(); ++j) {
            if (b->get(i)==sortedList->get(j)){
                check = false;
                break;
            }
        }
        if (check){
            sortedList->add(b->get(i));
        }
    }
    return sortedList;
}

SortedList * Intersect(SortedList * a, SortedList * b) {
    SortedList * sortedList = new SortedList;
    for (int i = 0; i < a->size(); ++i) {
        for (int j = 0; j < b->size(); ++j) {
            if (a->get(i)==b->get(j)){
                bool check = true;
                for (int k = 0; k < sortedList->size(); ++k) {
                    if (a->get(i)==sortedList->get(k)){
                        check = false;
                        break;
                    }
                }
                if (check) {
                    sortedList->add(a->get(i));
                    break;
                }
            }
        }
    }
    return sortedList;
}
SortedList *Difference(SortedList * a, SortedList * b) {
    SortedList * sortedList = new SortedList;
    for (int i = 0; i < a->size(); ++i) {
        bool check = true;
        for (int j = 0; j < b->size(); ++j) {
            if (a->get(i)==b->get(j)){
                check = false;
                break;
            }
        }
        if (check){
            for (int j = 0; j < sortedList->size(); ++j) {
                if (a->get(i)==sortedList->get(j)){
                    check = false;
                    break;
                }
            }
        }
        if (check){
            sortedList->add(a->get(i));
        }
    }
    return sortedList;
}

int main() {
    SortedList * sortedList = new SortedList;
    SortedList * sortedList1 = new SortedList;
    sortedList->add(5);
    sortedList->add(1);
    sortedList->add(3);
    sortedList->add(3);
    sortedList->add(6);
    sortedList->add(4);
    sortedList->add(2);
    sortedList->add(2);
    sortedList->printAll();
    sortedList1->add(55);
    sortedList1->add(1);
    sortedList1->add(3);
    sortedList1->add(8);
    sortedList1->add(12);
    sortedList1->add(4);
    sortedList1->add(11);
    sortedList1->printAll();
    SortedList * sortedList2 = Union(sortedList,sortedList1);
    sortedList2->printAll();
    SortedList * sortedList3 = Intersect(sortedList,sortedList1);
    sortedList3->printAll();
    SortedList * sortedList4 = Difference(sortedList1,sortedList);
    sortedList4->printAll();



   /*UniqueSortedList * uniqueSortedList = new UniqueSortedList;
   uniqueSortedList->add(5);
   uniqueSortedList->add(5);
   uniqueSortedList->add(5);
   uniqueSortedList->add(5);
   uniqueSortedList->add(1);
   uniqueSortedList->add(3);
   uniqueSortedList->add(3);
   uniqueSortedList->add(3);
   uniqueSortedList->add(7);
   uniqueSortedList->add(3);
   uniqueSortedList->add(3);
   uniqueSortedList->add(1100);
   uniqueSortedList->add(6);
   uniqueSortedList->add(6);
   uniqueSortedList->add(100);
   uniqueSortedList->add(6);
   uniqueSortedList->add(4);
   uniqueSortedList->add(2);
   uniqueSortedList->add(2);
   uniqueSortedList->add(1100);
   uniqueSortedList->add(2);
   uniqueSortedList->printAll();*/
    return 1;
}
