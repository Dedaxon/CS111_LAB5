void IntLinkedList::removeFront() {
    if(empty()) return;   
    IntNode* old = head;
    head = head->next;
    delete old;
}
