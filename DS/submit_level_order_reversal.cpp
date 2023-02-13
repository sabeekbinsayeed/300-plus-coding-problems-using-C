#include <bits/stdc++.h>
using namespace std;
class treenode {
    public:
int data;
treenode* leftchild;
treenode* rightchild;
treenode(int d)
{
    data=d;
    leftchild=NULL;
    rightchild=NULL;
}

};



void level_order_reverse(treenode* root)
{
    if (root==NULL)
        return ;

    int level=0;
    queue<treenode*> q;
    q.push(root);
    q.push(NULL);
int ar[50];
int z=0;

    while (! q.empty())
    {
        treenode* chkNode= q.front();
        q.pop();
        if (chkNode!=NULL)
        {
          //  cout << chkNode->data <<" ";
//

if (chkNode->rightchild!=NULL)
            {
                q.push(chkNode->rightchild);
            }
            if (chkNode->leftchild!=NULL)
            {
                q.push(chkNode->leftchild);
            }



         //   cout << chkNode->data <<"- ";
            ar[z]=chkNode->data;
            z++;
        }
        else
        {

            if (!q.empty())
            {
                q.push(NULL);
                level=level+1;
            }
        }
    }

    for (int i=z-1;i>=0;i--)
    {
cout << ar[i]<< " ";
    }


}



int main()
{
   treenode* root=new treenode(3);

treenode* a=new treenode(9);

treenode* b=new treenode(20);

treenode* c=new treenode(15);

treenode* d=new treenode(7);


root->leftchild=a;
root->rightchild=b;
b->leftchild=c;
b->rightchild=d;

        level_order_reverse(root);



    return 0;
}

