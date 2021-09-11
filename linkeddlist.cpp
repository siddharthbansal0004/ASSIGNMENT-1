#include <bits/stdc++.h>
using namespace std;


class node
{
public:
    string info;
    node *left = NULL, *right = NULL;
    node(string x)
    {
        info = x;
    }
};
int toInt(string s)
{
    int num = 0;

      if(s[0]!='-')
        for (int i=0; i<s.length(); i++)
            num = num*10 + (int(s[i])-48);

      else
        for (int i=1; i<s.length(); i++)
        {
            num = num*10 + (int(s[i])-48);
            num = num*-1;
        }

    return num;
}



int eval(node* root)
{
   if (!root) {
        return 0;
   }

    if (!root->left && !root->right)
    {


        return toInt(root->info);
    }


    int l = eval(root->left);

    int r = eval(root->right);


    if (root->info=="+")
        return l+r;

    if (root->info=="-")
        return l-r;

    if (root->info=="*")
        return l*r;

    return l/r;
}


int main()
{
    // CREATED A TREE GIVEN IN  LABTEST SAMPLE CASE

    node *root = new node("-");
    root->left = new node("*");
    root->left->left = new node("50");
    root->left->right = new node("2");
    root->right = new node("-");
    root->right->left = new node("100");
    root->right->right = new node("/");
    root->right->right->left = new node("20");
    root->right->right->right = new node("2");

    int ans=eval(root);
    delete(root);
    string answer=to_string(ans);
    root= new node(answer);
    cout<<root->info;
    return 0;
}
