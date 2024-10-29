void AccountList::addAccount(Account* _accountToAdd) {
    Account *account = new Account(*_accountToAdd);
    
    // Add logic to link the new account properly
    if (size > 0) {
        this->at(size - 1).next = account; // Link the last account to the new one
    } else {
        head = account; // If this is the first account, set head
    }
    
    account->next = nullptr; // Ensure the new account's next is null
    size++;
}