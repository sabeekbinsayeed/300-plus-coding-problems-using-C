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

void spaceprint(int level)
{
    for (int i=0;i<level;i++)
    {
        cout <<"   ";
    }

}


void inOrder (treenode* root, string &chk)
{
    if (root==NULL)
    {
        return ;
    }

    inOrder (root->leftchild,chk);

    stringstream ss;
ss << root->data;
string s=ss.str();
     chk += s;
    inOrder(root->rightchild,chk);


}
void preOrder (treenode* root, string &chk)
{
    if (root==NULL)
    {
        return ;
    }
    stringstream ss;
ss << root->data;
string s=ss.str();



 chk += s;

    preOrder (root->leftchild,chk);



    preOrder(root->rightchild,chk);


}

void postOrder (treenode* root, string &chk)
{
    if (root==NULL)
    {
        return ;
    }

    postOrder (root->leftchild,chk);


    postOrder(root->rightchild,chk);

    stringstream ss;
ss << root->data;
string s=ss.str();
     chk += s;


}


void printtree(treenode* root, int level)
{
    if (root==NULL)
    {
        return ;
    }


    if (root ->leftchild==NULL && root->rightchild==NULL )
    {
        cout << root->data << endl;
        return ;
    }
    else
    {
        cout << endl;
        spaceprint(level);
         cout << "Root: "<<root->data << endl;
    }

    if (root->leftchild!=NULL)
    {
        spaceprint(level);
     cout << "Left: ";
     printtree(root->leftchild,level+1);
    }

    if (root->rightchild!=NULL)
    {
        spaceprint(level);
     cout << "Right: ";
     printtree(root->rightchild,level+1);
    }





}




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

                   // cout << "min1 :" << min1 << endl;
                }


            cout << chkNode->data <<" ";

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

return min1;
}


int main()
{
    /*
    int n;
    cin >> n;
    treenode* allnodes[n];
    for (int i=0;i< n;i++)
    {
        allnodes[i]=new treenode(-1);

    }

     for (int i=0;i< n;i++)
    {
      int value, left, right;
      cin >> value >> left >> right;
      allnodes[i]->data=value;

      if (left > n-1 || right > n-1)
      {
          cout <<" invalid index " << endl;
          break;
      }

      if (left !=-1)
      {
allnodes[i]->leftchild= allnodes[left];
      }


      if (right !=-1)
      {
allnodes[i]->rightchild= allnodes[right];
      }




    }

      printtree( allnodes[0],0);
string levelorder="";
*/
treenode* root=new treenode(5);

treenode* a=new treenode(4);

treenode* b=new treenode(3);

root->leftchild=a;
root->rightchild=b;


       int second_min= second_minimum(root);
       if (second_min>1000)
       {
           second_min=-1;
       }

       cout << "second minimum" << second_min;




    return 0;
}

