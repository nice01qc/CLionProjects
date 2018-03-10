#include<iostream>
#include<stack>
using namespace std;
void sortStackByStack(stack<int>& s)
{
    stack<int> help;
    while (!s.empty())
    {
        int cur = s.top();
        s.pop();
        while (!help.empty()&&cur>help.top())
        {
            int tmp = help.top();
            s.push(tmp);
            help.pop();
        }
        help.push(cur);
    }
    while (!help.empty())
    {
        int tmp = help.top();
        s.push(tmp);
        help.pop();
    }
}
void show(stack<int> s)
{
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}
int main()
{
    stack<int> stk;
    int a[] = { 3,4,5,1,2,1 };
    for (int i = 0; i<6; i++)
    {
        stk.push(a[i]);
    }
    cout << "before:" ;
    show(stk);
    cout << "after:";
    sortStackByStack(stk);
    show(stk);
    system("pause");
    return 0;
}