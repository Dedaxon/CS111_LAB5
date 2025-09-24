
bool IntLinkedList::removeBack() {
    if(empty()) return false;
    if(head->next == nullptr) {  // only one node
        delete head;
        head = nullptr;
        return true;
    }
    IntNode* prev = nullptr;
    IntNode* curr = head;
    while(curr->next != nullptr) {
        prev = curr;
        curr = curr->next;
    }
    prev->next = nullptr;
    delete curr;
    return true;
}
