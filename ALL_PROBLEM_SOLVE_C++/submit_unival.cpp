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





bool is_unival(treenode* root)
{
    if (root==NULL)
        return -1;

    int level=0;

    queue<treenode*> q;
    q.push(root);
   int store=root->data;
    q.push(NULL);
    int flag=-1;

    while (! q.empty())
    {
        treenode* chkNode= q.front();
        q.pop();
        if (chkNode!=NULL)
        {
             int temp=store;
            int store=chkNode->data;

            if (temp!=store)
            {
                return false;
                break;
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

return true;
}


int main()
{


treenode* root=new treenode(1);

treenode* a=new treenode(1);

treenode* b=new treenode(1);

root->leftchild=a;
root->rightchild=b;

       bool result=is_unival(root);
    if (result==true)
    {
cout << "This is an uni-valued tree."<< endl;
    }
    else
    {
cout << "This is not an uni-valued tree."<< endl;
    }




    return 0;
}


