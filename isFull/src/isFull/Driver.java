package isFull;



public class Driver {
	
	public static void main(String args[]) {
		Node<Integer> a = new Node<Integer>();
		Node<Integer> b = new Node<Integer>();
		Node<Integer> c = new Node<Integer>(a, b);
		
		System.out.println(c.isFull());
	}

}
