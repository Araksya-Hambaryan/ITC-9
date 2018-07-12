//It throws warnings, but I cannot fix them all )
class linkedList <Val extends Number, Pos extends Number> {
    Node head;
    int size;

    void insertAt (Pos position, Val value) {
        if ( isValidposition(position) ) {
            Node <Val> newNode = new Node<Val>();
            newNode.value = value;
            Node temp = head;

            if ( position.intValue() == 1 ) {
                head = newNode;
                head.next = temp;
                ++size;
                return;
            }

            for ( int i = 2; i < position.intValue(); ++i ) {
                temp=temp.next;
            }
            Node temp2 = temp.next;
            temp.next=newNode;
            newNode.next = temp2;
            ++size;
        }
    }

    void pushBack (Val value) {
        Integer s = (Integer)(size + 1);
        insertAt((Pos)s,value);
    }

    void removeAt (Pos position) {
        if ( isValidposition(position) ) {  
            Node temp = head;
            if ( position.intValue() == 1 ) {
                head = temp.next;
                temp = null;
                --size;
                return;
            }

            for ( int i = 2; i < position.intValue(); ++i ) {
                temp=temp.next;
            }
            temp.next=(temp.next).next;
            --size; 

        }
    }

    void removeValue(Val value) {
        Node temp = head;
        Integer position = new Integer(0);
        do {
            position = new Integer(position.intValue() + 1);
            if ( temp.value == value ) {
                removeAt((Pos)position);
                return;
            }
            if ( temp.next == null ) {
                System.out.println("No such value in the List!");
                return;
            }
            temp=temp.next;
        } while ( temp.value != value );
    }

    boolean isValidposition (Pos position) {
        if ( position.intValue() > 0 && position.intValue() <= size + 1 ) {
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
