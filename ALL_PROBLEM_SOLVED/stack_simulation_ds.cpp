#include <bits/stdc++.h>
using namespace std;

int top=-1;
char Stack[4]={'\0'};

void Push(char x){
  	Stack[++top]=x;
  	return;
}
char Pop(void){
   return Stack[top--];
}


int main()
{
    char Str1[4]={'\0'};
    char Str2[4]={'\0'};
    int i;
    strcpy(Str1, "CSE");
    cout << "str1 "<< Str1 << endl;
    for(i=0; i<3; ++i){
            cout <<"pushing: " << Str1[i]<< endl;
    Push(Str1[i]);
    }
    for(i=0; i<3; ++i){

    Str2[i]=Pop();
      cout <<"popping: " << Str2[i]<< endl;

    }
    printf("printnig str2 %s", Str2);
    return 0;
}


