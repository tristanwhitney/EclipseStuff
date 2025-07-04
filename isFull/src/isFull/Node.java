package isFull;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;

public class Node<E> {
  E data;
  Node<E> leftChild;
  Node<E> rightChild;
  
  public Node() {

  }

  public Node(Node<E> left, Node<E> right) {
      this.leftChild = left;
      this.rightChild = right;
  }

  public boolean isFull() {

     if (rightChild == null && leftChild == null) {
      return true;
     }

     if (rightChild != null && leftChild !=null) {
      return rightChild.isFull() && leftChild.isFull();
     }
      return false;
  }

  public static void main(String [] args) {

  }
}