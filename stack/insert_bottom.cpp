#include <iostream>
#include <stack>
using namespace std;

void insertBottom(stack<int> &st, int x, int size)
{
    // base
    if (st.empty())
    {
        st.push(x);
        return;
    }

    int num = st.top();
    st.pop();

    // recursive call

    insertBottom(st, x, size);
    st.push(num);
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
    st.push(6);
    st.push(7);
    st.push(8);
    st.push(9);
    print(st);
    int size = st.size();
    int x = 4;
    insertBottom(st, x, size);

    print(st);

    return 0;
}