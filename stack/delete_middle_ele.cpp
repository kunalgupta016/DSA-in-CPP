#include <iostream>
#include <stack>
using namespace std;

void deletemiddle(stack<int> &st, int size, int count)
{

    // base
    if (count == size / 2)
    {
        st.pop();
        return;
    }

    int num = st.top();
    st.pop();
    deletemiddle(st, size, count + 1);
    st.push(num);
}

int main()
{
    int count = 0;
    stack<int> st;
    st.push(6);
    st.push(7);
    st.push(8);
    st.push(9);

    int size = st.size();
    deletemiddle(st, size, count);
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;

    return 0;
}