package singlyLinkedList;
public class SinglyLinkedList {

	private class Node {
		private int value;
		private Node nextNode;
		
		public Node(int i) {
			value = i;
			nextNode = null;
		}
		
		public int getValue() {
			return value;
		}
		
		public void setValue(int i) {
			value = i;
		}
		
		public Node getNextNode() {
			return nextNode;
		}
		
		public void setNextNode(Node n) {
			nextNode = n;
		}

		public void addNodeAtTaill(Node n) {
			if (this.nextNode == null) {
				this.nextNode = n;
			} else {
				this.nextNode.addNodeAtTaill(n);
			}
		}

		public Node removeAtTail(Node valueAtTail) {
			if (this.nextNode == null) {
				valueAtTail.setValue(this.getValue());
				return null;
			} else {
				this.nextNode = this.nextNode.removeAtTail(valueAtTail);
				return this;
			}
		}
		
	}
	
	private Node headNode;
	
	public SinglyLinkedList() {
		headNode = null;
	}
	
	public void addAtHead(int i) {
		Node newNode = new Node(i);
		newNode.setNextNode(headNode);
		headNode = newNode;
	}
	
	public void addAtTail(int i) {
		Node newNode = new Node(i);
		if (headNode == null) {
			headNode = newNode;
		} else {
			headNode.addNodeAtTaill(newNode);
		}
	}
	
	public int removeAtHead() {
		if (headNode == null) {
			return -1;
		} else {
			Node returnedNode = headNode;
			headNode = headNode.getNextNode();
			return returnedNode.getValue();
		}
	}
	
	public int removeAtTail() {
		if (headNode == null) {
			return -1;
		} else {
			Node returnedNode = new Node(-1);
			headNode = headNode.removeAtTail(returnedNode);
			return returnedNode.getValue();
		}
	}
	
	public void reverse() {
		if (headNode == null || headNode.nextNode == null) {
			return;
		}
		Node prev = headNode;
		Node curr = headNode.nextNode;
		Node temp;
		headNode.nextNode = null;
		while(curr != null) {
			temp = curr.nextNode;
			curr.nextNode = prev;
			prev = curr;
			curr = temp;
		}
		headNode = prev;
	}
	
	public void display() {
		Node temp = headNode;
		while (temp.nextNode != null) {
			System.out.print(temp.getValue() + "\t");
			temp = temp.nextNode;
		}
		System.out.print(temp.getValue() + "\n");
	}
	
	public void search(int toSearchFor) {
		Node temp = headNode;
		while (temp.nextNode != null && temp.getValue() != toSearchFor) {
			temp = temp.nextNode;
		}
		if (temp.nextNode == null && temp.getValue() != toSearchFor) {
			System.out.println(toSearchFor + " Not Found.");
		} else {
			System.out.println(toSearchFor + " Found.");
		}
	}
	
	public static void main(String[] args) {
		SinglyLinkedList l = new SinglyLinkedList();
		l.addAtHead(3);
		l.addAtHead(2);
		System.out.println("\n--------------------------------------------------\n");
		System.out.println("---------------Displaying All nodes---------------");
		System.out.println("\n--------------------------------------------------\n");
		l.display();
		System.out.println("\n--------------------------------------------------\n");
		System.out.println("----------------Inserting At Start----------------");
		System.out.println("\n--------------------------------------------------\n");
		l.addAtHead(7);
		l.display();
		System.out.println("\n--------------------------------------------------\n");
		System.out.println("-----------------Inserting At End-----------------");
		System.out.println("\n--------------------------------------------------\n");
		l.addAtTail(7);
		l.display();
		System.out.println("\n--------------------------------------------------\n");
		System.out.println("---------------Reversing the order---------------");
		System.out.println("\n--------------------------------------------------\n");
		l.reverse();
		l.display();
		System.out.println("\n--------------------------------------------------\n");
		System.out.println("----------------Deleting At Start-----------------");
		System.out.println("\n--------------------------------------------------\n");
		l.removeAtHead();
		l.display();
		System.out.println("\n--------------------------------------------------\n");
		System.out.println("-----------------Deleing At End-------------------");
		System.out.println("\n--------------------------------------------------\n");
		l.removeAtTail();
		l.display();
		System.out.println("\n--------------------------------------------------\n");
		System.out.println("----------------Searching For Value----------------");
		System.out.println("\n--------------------------------------------------\n");
		l.search(3);
		l.search(19);
	}
}
