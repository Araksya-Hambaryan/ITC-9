class CustomLinkedList {

    private class Node {
        int value = 0;
        Node next = null;
    }
    private Node head = null;
    private Node tail = null;
    private int size = 0;
    

    public boolean isEmpty() {
        return size == 0;
    }

    public int size() {
        return size;
    }

    public void add(int value) {
        ++size;
        Node newNode = new Node();
        newNode.value = value;
        newNode.next = null;
        if (head == null) {
            head = newNode;
            tail = head;
        } else {
            tail.next = newNode;
            tail = tail.next;
        }
    }

    public int get(int index) {
        if (index < 0  || index > size) {
            return 0;
        }
        Node temp = head;
        for (int i = 0; i < index; ++i) {
            temp = temp.next;
        }
        return temp.value;
    }

    public void insert(int index, int value) {
        if (index >= size) {
            return;
        }
        ++size;
        Node tmpNode = head;
        Node newNode = new Node();
        newNode.value = value;
        for (int i = 0; i < index - 1; ++i) {
            tmpNode = tmpNode.next;
        }
        newNode.next = tmpNode.next;
        tmpNode.next = newNode;
    }

    public void removeByIndex(int index) {
        if (index >= size) {
            return;
        }
        Node node = head;
        Node tmpNode = null;
        for (int i = 0; i < index - 1; ++i) {
            node = node.next;
        }
        node.next = node.next.next;
        --size;
    }

    public void removeByValue(int value) {
        Node node = head;
        while (node.next != null) {
            if (node.next.value == value) {
                node.next = node.next.next;
                --size;
                return;
            }
            node = node.next;
        }
    } 

    public void replace(int index, int value) {
        Node node = head;
        if (index >= size) {
            return;
        }
        for (int i = 0; i < index; ++i) {
            node = node.next;
        }
        node.value = value;
    }

    public void print() {
        if (isEmpty()) {
            return;
        }
        Node node = head;
        for (int i = 0; i < size; ++i) {
            System.out.println(node.value + " ");
            node = node.next;
        }
    }
}
