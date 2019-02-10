
#include <iostream>
using namespace std;

// Generic Programming - Ignore

class Node
{
  public:
    // Data
    int data;
    // Pointer to the next Node
    Node *next;
    Node *prev;
    // Construct that makes the ptr to NULL
    Node(int value)
    {
        next = NULL;
        prev = NULL;
        data = value;
    }
};

class DLL
{
  public:
    Node *head;
    DLL()
    {
        head = NULL;
    }
    void insert(int value)
    {
        // Create a new node
        Node *temp = new Node(value);
        // CHeck if empty list
        if (head == NULL)
        {
            head = temp;
        }
        else
        { // If not empty list.
            Node *current = head;
            while (current->next != NULL)
                current = current->next;
            current->next = temp;
            temp->prev = current;
        }
    }
    void display()
    {
        Node *current = head;
        Node *last;
        while (current != NULL)
        {
            cout << current->data << "->";
            current = current->next;
        }
        cout << endl;
    }
    int countItems()
    {
        Node *current = head;
        int i = 0;
        while (current != NULL)
        {
            current = current->next;
            i++;
        }
        return i;
    }
    void InsertAt(int value, int pos)
    {
        if (pos < countItems())
        {
            // Create a new node
            Node *temp = new Node(value);
            // Check if empty list
            if (head == NULL)
            {
                head = temp;
            }
            else
            { // If not empty list.
                Node *current = head;
                int i = 1;
                while (i < pos)
                {
                    current = current->next;
                    i++;
                }
                temp->next = current->next;
                current->next = temp;
                temp->prev = current;
                temp->next->prev = temp;
            }
        }
        else
        {
            cout << "the entered position does not exist" << endl;
        }
    }
    void DeleteAt(int pos)
    {
        Node *current = head;
        int i = 1;
        while (i < pos)
        {
            current = current->next;
            i++;
        }
        current->prev->next = current->next;
        current->next->prev=current->prev;
    }
    void Del()
    {
        Node *current = head;
        // Deletes the last element.
        while (current->next != NULL)
            current = current->next;
        current->prev->next = NULL;
    }
};

int main()
{
    DLL dll1;
    for (int i = 1; i < 11; i++)
    {
        dll1.insert(i);
    }
    dll1.display();
    dll1.insert(11);
    dll1.display();
    dll1.InsertAt(3,8);
    dll1.display();
    dll1.Del();
    dll1.display();
    cout<<dll1.countItems()<<endl;
    dll1.DeleteAt(5);
    dll1.display();

}

    

