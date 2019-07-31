
#include<bits/stdc++.h>
#define   sf1(x)   scanf("%d",&x)
using namespace std;
struct node{
    node *left;
    node *right;
    int ele;
};
struct node *root=NULL;
void build(int ele)
{
    struct node *create=(struct node *)malloc(sizeof(struct node));
    create->left=NULL;
    create->right=NULL;
    create->ele=ele;
    node *tmp=root;
    if(root==NULL) root=create;
    else{
        while(1){
            if(tmp->ele>=ele){
                if(tmp->left==NULL){
                    tmp->left=create;
                    break;
                }
                tmp=tmp->left;
            }
            else{
                if(tmp->right==NULL){
                    tmp->right=create;
                    break;
                }
                tmp=tmp->right;
            }
        }
    }
}
int  maxdep(struct node *node)
{
    if(node==NULL) return 0;
    else{
        int L=maxdep(node->left);
        int R=maxdep(node->right);
        if(L>R)  return L+1;
        else     return R+1;
    }
}
int main()
{
    int n,x;
    sf1(n);
    while(n--){
        sf1(x);
        build(x);
    }
    cout<<maxdep(root)<<endl;
    return 0;
}
