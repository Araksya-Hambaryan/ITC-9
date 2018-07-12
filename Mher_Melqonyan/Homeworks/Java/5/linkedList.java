class linkedList {
    Node head;
    int size;

    void insertAt (int position, int value) {
        if ( isValidposition(position) ) {
            Node newNode = new Node();
            newNode.value = value;
            Node temp = head;

            if ( position == 1 ) {
                head = newNode;
                head.next = temp;
                ++size;
                return;
            }

            for ( int i = 2; i < position; ++i ) {
                temp=temp.next;
            }
            Node temp2 = temp.next;
            temp.next=newNode;
            newNode.next = temp2;
            ++size;
        }
    }

    void pushBack (int value) {
        insertAt(size + 1,value);
    }

    void removeAt (int position) {
        if ( isValidposition(position) ) {  
            Node temp = head;
            if ( position == 1 ) {
                head = temp.next;
                temp = null;
                --size;
                return;
            }

            for ( int i = 2; i < position; ++i ) {
                temp=temp.next;
            }
            temp.next=(temp.next).next;
            --size; 

        }
    }
    
    void removeValue(int value) {
        Node temp = head;
        int position = 0;
        do {
            ++position;
            if ( temp.value == value ) {
                removeAt(position);
                return;
            }
            if ( temp.next == null ) {
                System.out.println("No such value in the List!");
                return;
            }
            temp=temp.next;
        } while ( temp.value != value );
    }

    boolean isValidposition (int position) {
        if ( position > 0 && position <= size + 1 ) {
            return true;
        } else {
            throw new IndexOutOfBoundsException("Invalid position!");
        }
    }

    void print() {
        Node temp = head;
        while ( temp != null ) {
            System.out.println("Value is: " + temp.value);
            temp=temp.next;
        }
        System.out.println("Size is: " + size);
    }

    linkedList() {
        size = 0;
        head = null;
    }

}
