public class MyLinkedList {
    private Node m_head = new Node(0);
    private int m_size = 0;
    static class Node {
        int m_value;
        Node m_next;
        Node(int value) {
            m_value = value;
        }
    }

    public int getSize() {
        return m_size;
    }

    public int getElement(final int index) {
        if (index >= m_size || index < 0) {
            throw new IndexOutOfBoundsException("Index: " + index + ", Size " + index );
        }
        Node current = m_head;
        int step = 0;
        while (step != index) {
            current = current.m_next;
            ++step;
        }
        return current.m_value;
    }

    public void pushBack(final int value) {
        Node newNode = new Node(value);
        if (m_size == 0) {
            m_head = newNode;
            ++m_size;
            return;
        }
        ++m_size;
        Node current = m_head;
        while (current.m_next != null) {
            current = current.m_next;
        }
        current.m_next = newNode;
    }

    public void insert(final int index, final int value) {
        if (index >= m_size || index < 0) {
            throw new IndexOutOfBoundsException("Index: " + index + ", Size " + index );
        }
        Node newNode = new Node(value);
        if (index == 0) {
            newNode.m_next = m_head;
            m_head = newNode; 
            ++m_size;
            return;   
        }
        if (m_size == 1) {
            m_head.m_next = newNode;
            return;
        }
        Node current = m_head;
        int step = 0;
        while (step < index - 1) {
            current = current.m_next;
            ++step;
        }
        newNode.m_next = current.m_next;
        current.m_next = newNode;
        ++m_size;
    }

    public void popBack() {
        if (m_size == 0) {
            System.out.print("\nThis Linked list is empty\n");
            return;
        }
        if (m_size == 1) {
            m_head = null;
            return;
        }
        Node current = m_head.m_next;
        Node tmp = m_head;
        while (current.m_next != null) {
            current = current.m_next;
            tmp = tmp.m_next; 
        }
        --m_size;
        current = null;
        tmp.m_next = null;
    }
    
    public void remove(final int index) {
        if (m_size == 0) {
            System.out.print("\nThis Linked list is empty\n");
            return;
        }
        if (index >= m_size || index < 0) {
            throw new IndexOutOfBoundsException("Index: " + index + ", Size " + index );
        }
        if (m_size == 1) {
            m_head = null;
            --m_size;
            return;
        }
        if (index == 0) {
            Node tmp = m_head;
            m_head = m_head.m_next;
            --m_size;
            return;
        }
        Node current = m_head;
        int step = 0;
        while (step < index - 1) {
            current = current.m_next;
            ++step;
        }
        Node tmp = current.m_next;
        current.m_next = tmp.m_next;
        tmp = null;
        --m_size;

    }

    public void printList() {
        Node current = m_head;
        System.out.print("\nLinked list is: ");
        while (current != null) {
            System.out.print(current.m_value+" ");
            current = current.m_next;
        }
        System.out.print("\n");
    }
}
