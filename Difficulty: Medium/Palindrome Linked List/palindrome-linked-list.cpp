/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
       data = x;
       next = NULL;
    }
};
*/


class Solution {
  public:
    bool isPalindrome(Node *head) {
        //  code here
        vector<int> arr;
        
        Node* temp=head;
        
        while(temp!=NULL){
            arr.push_back(temp->data);
            temp=temp->next;
        }
        
        int n=arr.size();
        
        for(int i=0;i<n;i++){
            if(arr[i]!=arr[n-1-i]){
                return false;
            }
        }
        
        return true;
    }
};