#include<iostream>
class Node{
	 public:
	int info;
	Node* next;
};

class List{
	private:
		Node* HEAD;
		Node* TAIL;
		public:
		List();
		~List();
	
		//functions
		
		bool isEmpty();
		void addToHead(int data);
		void traverse();
		void remove(int data);
		int removeFromHead();
		bool search(int data);
		void addToTail(int data);
		void add(int data, Node* predessor);
		bool retrieve ( int data, Node* &outputptr);
		int showHead();
};
class Stack{
	private:
		List l;
	public:
		void isEmpty(){
			bool a = l.isEmpty();
			if(a==true)
			std::cout<<"Stack Empty"<<std::endl;
			else
			std::cout<<"Stack NOT EMpty!"<<std::endl;
		}
		void push(int data){
			l.addToHead(data);
		}
		int top(){
			return l.showHead();
			
			
		}
		int pop(){
			l.removeFromHead();
		}
			
			
		
};
class Queue{
	private:
		List l;
	public:
		void isEmpty(){
			bool a = l.isEmpty();
			if(a==true)
			std::cout<<"Queue Empty"<<std::endl;
			else
			std::cout<<"Queue NOT EMpty!"<<std::endl;
			
		}
		void enqueue(int data){
			l.addToHead(data);
		}
		void dequeue (){
			l.removeFromHead();
			
		}
		void showitems(){
			l.traverse();
		}
};
