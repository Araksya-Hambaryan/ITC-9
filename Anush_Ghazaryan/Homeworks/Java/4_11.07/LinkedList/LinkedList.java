import java.util.*;

public class LinkedList<T> {
 
    private Node<T> head;
    private Node<T> tail;
     
    public void add(T element){
         
        Node<T> node = new Node<T>();
        node.setValue(element);
        System.out.println("Added: " + element);

        if(head == null){
            head = node;
            tail = node;
        } else {
            tail.setNextRef(node);
            tail = node;
        }
    }
     
    public void addAfter(T element, T after){
         
        Node<T> tmp = head;
        Node<T> refNode = null;
//        System.out.println("Traversing");
        while(true){
            if(tmp == null){
                break;
            }
            if(tmp.compareTo(after) == 0){
                refNode = tmp;
                break;
            }
            tmp = tmp.getNextRef();
        }
        if(refNode != null){
            Node<T> node = new Node<T>();
            node.setValue(element);
            node.setNextRef(tmp.getNextRef());
            if(tmp == tail){
                tail = node;
            }
            tmp.setNextRef(node);
             
        } else {
            System.out.println("Couldn't find the given element");
        }
    }
     
    public void deleteFront(){
         
        if(head == null){
            System.out.println("Underflow");
        }
        Node<T> tmp = head;
        head = tmp.getNextRef();
        if(head == null){
            tail = null;
        }
        System.out.println("Deleted: " + tmp.getValue());
    }
     
    public void deleteAfter(T after){
         
        Node<T> tmp = head;
        Node<T> refNode = null;
      //  System.out.println("Traversing");
        while(true){
            if(tmp == null){
                break;
            }
            if(tmp.compareTo(after) == 0){
                refNode = tmp;
                break;
            }
            tmp = tmp.getNextRef();
        }
        if(refNode != null){
            tmp = refNode.getNextRef();
            refNode.setNextRef(tmp.getNextRef());
            if(refNode.getNextRef() == null){
                tail = refNode;
            }
            System.out.println("Deleted: " + tmp.getValue());
        } else {
            System.out.println("Couldn't  find the given element");
        }
    }
     
    public void traverse(){
         
        Node<T> tmp = head;
        while(true){
            if(tmp == null){
                break;
            }
            System.out.println(tmp.getValue());
            tmp = tmp.getNextRef();
        }
    }
     
}
 
