class LinkedList {

	private static Node head;
	private static int numNodes;
	
	public LinkedList(Object dt) {
		head = new Node(dt);
	}
	
	public void addAtHead(Object dt) {
		Node temp = head;
		head = new Node(dt);
		head.next = temp;
		numNodes++;
	}
	
	public void addAtTail(Object dt) {
		Node temp = head;
		while(temp.next != null) {
			temp = temp.next;
		}
		temp.next = new Node(dt);
		numNodes++;
	}
		
	public void deleteAtIndex(int index) {
		Node temp = head;
		for(int i=0; i< index - 1 && temp.next != null; i++) {
			temp = temp.next;
		}
		temp.next = temp.next.next;
		numNodes--;
	}
		
	public static Node find(int index) {
		Node temp=head;
		for(int i=0; i<index; i++) {
			temp = temp.next;
		}
		return temp;
	}
		
	public static void printList() {
		Node temp = head;
		while(temp != null) {
			System.out.println(temp.data);
			temp = temp.next;
		}
	}
	
	public static int getSize() {
		return numNodes;
	}
	
	class Node {

		private Node next;
		private Object data;
		
		public Node(Object dt) {
			data = dt;
		}
		
		public Object getData() {
			return data;
		}
	}
}
