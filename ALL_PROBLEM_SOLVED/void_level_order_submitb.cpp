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


void level_order(treenode* root)
{
    if (root==NULL)
        return ;

    int level=0;
    queue<treenode*> q;
    q.push(root);
    q.push(NULL);

    while (! q.empty())
    {
        treenode* chkNode= q.front();
        q.pop();
        if (chkNode!=NULL)
        {
            cout << chkNode->data <<" ";



            if (chkNode->leftchild!=NULL)
            {
                q.push(chkNode->leftchild);
            }

            if (chkNode->rightchild!=NULL)
            {
                q.push(chkNode->rightchild);
            }
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


 treenode* root1=new treenode(1);

treenode* a1=new treenode(2);

treenode* b1=new treenode(3);


root1->leftchild=a1;
root1->rightchild=b1;

        level_order(root);



    return 0;
}

