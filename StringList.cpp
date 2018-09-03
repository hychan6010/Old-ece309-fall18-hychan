class ListNode {
private:
  Item item;
  ListNode *next;
 public:
  ListNode(Item a)
    { item = a; next=NULL }
  ListNode* getNext() 
  {
    return next;
  }
  void setNext(ListNode *n) 
  {
  next = n;
  }
  Item getItem() 
  {
  return item;
  }
 };
 
class List {
private:
    ListNode *head;
    ListNode *tail;
 public:
    List();
    void push_back(Item a);
    bool remove_front(Item &copy);
    };
void List::push_back(Item a)
{
    ListNode *node = newListNode(a);
    if (head==NULL) {
    head = node;
    tail = node;
    } else {
        tail->setNext(node);
        tail = node;
     }
  }
  bool List::remove_front(Item &copy)
  {
    if(!empty())
    {
      copy = head->getItem();
      ListNode *tmp = head->getNext();
      delete head;
      head=tmp;
      if(tmp==NULL)
          tail = NULL;
       return true;
    }
      return false;
  }
List::List()
{
  head = NULL;
  tail = NULL;
}
