// https://www.geeksforgeeks.org/add-1-number-represented-linked-list/

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int n)
    {
        data = n;
        next = NULL;
    }
};

Node* head = NULL;
void addNode(int n){
	Node* temp = new Node(n);
	if(head == NULL)
		head = new Node(n);
	else
	{
		Node* t = head;
		while(t->next)
			t = t->next;
		t->next = temp;
	}
}

void reverseList(){
	Node* prev = NULL;
	Node* current = head;
	Node* next;
	while(current != NULL){
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	head = prev;
}

void addOne(){
	int carry = 1, sum;
	Node* curr = head;
	Node* temp;
	while(curr){
		sum = curr->data + carry;
		carry = (sum >= 10)? 1 : 0;
		curr->data = sum%10;
		temp = curr;
		curr = curr->next;
	}
	if(carry)
	{
		Node* t = new Node(carry);
		temp->next = t;
	}
}

void printlist(){
	Node*n = head;
	while(n != NULL){
		cout << n->data << " ";
		n = n->next;
	}
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	while(n--){
		int x;
		cin >> x;
		addNode(x);
	}
	reverseList();
	addOne();
	reverseList();
	printlist();
}