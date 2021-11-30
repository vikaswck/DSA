#include<iostream>
#include<queue>
#include"tree.h"
treenode<int>* takeinputLevelWise(){
    int rootdata;
    cout << "enter root data" << endl;
    cin >> rootdata;
    treenode<int> *root = new treenode<int>(rootdata);
    queue<treenode<int>*> pendingnodes;
    pendingnodes.push(root);
    while(pendingnodes.size() != 0){
        treenode<int>* front = pendingnodes.front();
        pendingnodes.pop();
        cout<<"enter num of children of "<<front->data<<endl;
        int numChild;
        cin>> numChild;
        for(int i=0;i<numChild;i++){
        int childData;
        cout<<"enter "<<i<<"th child of "<<front->data<<endl;
        cin>>childData;
        treenode<int>* child = new treenode<int>(childData);
        front->children.push_back(child);
        pendingnodes.push(child);
        }
    }
    return root;
}
treenode<int>* takeinput(){
    int rootdata;
    cout<<"enter data"<<endl;
    cin>>rootdata;
    treenode<int> *root = new treenode<int>(rootdata);
    int n;
    cout<<"enter children of "<<rootdata<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        treenode<int>* child = takeinput();
        root->children.push_back(child);
    }
    return root;
}
void print(treenode<int>* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<":";
    for(int i=0;i<root->children.size();i++){
        cout<<root->children[i]->data<<",";
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++){
        print(root->children[i]);
    }

}
int main(){
    treenode<int>* root = takeinputLevelWise();
    print(root);
    // treenode<int> *root = new treenode<int>(10);
    // treenode<int> *child1 = new treenode<int>(11);
    // treenode<int> *child2 = new treenode<int>(12);
    // root->children.push_back(child1);
    // root->children.push_back(child2);
   
}