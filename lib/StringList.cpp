  #include <stdio.h>

class String {
  public:
  const char* string;
  String(const char *s = "")
  {
    string = s;
  }
};

class List {
private:
  
class ListNode {
private:
  String string;
  ListNode *next;
 public:
  ListNode(String a)
    { 
    string = a;
    next=NULL; 
    }
  ListNode* getNext() 
  {
    return next;
  }
  void setNext(ListNode *n) 
  {
  next = n;
  }
 String getString() 
  {
  return string;
  }
 };
 

    ListNode *head;
    ListNode *tail;

  public:
    List();
    void push_back(String a);
    bool remove_front(String &copy);
    };
void List::push_back(String a)
{
    ListNode *node = new ListNode(a);
    if (head==NULL) {
    head = node;
    tail = node;
    } else {
        tail->setNext(node);
        tail = node;
     }
  }
  bool List::remove_front(String &copy)
  {
    if(!empty())
    {
      copy = head->getString();
      ListNode *tmp = head->getNext();
      delete head;
      head=tmp;
      if(tmp==NULL)
          tail = NULL;
       return true;
    }
      return false;
  }
List::List()    //constructor
{
  head = NULL;
  tail = NULL;
}
  List::~List() //deconstructor
  {
    Item t;
    while(!empty())
      remove(t);
  }
  int List::length() 
  { 
    int counter = String.size();
    return counter;
  }

bool List::empty()
{
  return head==NULL;
}
  
