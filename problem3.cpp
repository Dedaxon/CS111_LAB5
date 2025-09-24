int IntLinkedList::removeAll(int x) {
    int removed = 0;
    while(head != nullptr && head->elem == x) {
        removeFront();
        removed++;
    }

    IntNode* curr = head;
    while(curr != nullptr && curr->next != nullptr) {
        if(curr->next->elem == x) {
            IntNode* temp = curr->next;
            curr->next = curr->next->next;
            delete temp;
            removed++;
        } else {
            curr = curr->next;
        }
    }
    return removed;
}
