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


int second_minimum(treenode* root)
{
    if (root==NULL)
        return -1;

    int level=0;

    queue<treenode*> q;
    q.push(root);
    int min=999999;
    int min1=1111;
    q.push(NULL);
    int flag=-1;

    while (! q.empty())
    {
        treenode* chkNode= q.front();
        q.pop();
        if (chkNode!=NULL)
        {
             if (chkNode->data < min )
                {
                    min1=min;

                    min=chkNode->data;


                }

                if (chkNode-> data > min && chkNode->data < min1)
                {
                    min1=chkNode->data;

                }




            stringstream ss;


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
if (min1==1111)
    min1=-1;
return min1;
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
       int second_min= second_minimum(root);
       cout << second_min << endl;




    return 0;
}

