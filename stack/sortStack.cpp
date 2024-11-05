#include <iostream>
#include <stack>
using namespace std;

void insertSorted(stack<int> &st, int num)
{
    if (st.empty() || (!st.empty() && num > st.top()))
    {
        st.push(num);
        return;
    }

    int x = st.top();
    st.pop();
    insertSorted(st, num);
    st.push(x);
}

void sort(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }
    int num = st.top();
    st.pop();
    sort(st);
    insertSorted(st, num);
}

void print(stack<int> st)
{
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main()
{
    stack<int> st;
    st.push(5);
    st.push(-2);
    st.push(9);
    st.push(-7);
    st.push(3);
    print(st);
    sort(st);
    print(st);

    return 0;
}