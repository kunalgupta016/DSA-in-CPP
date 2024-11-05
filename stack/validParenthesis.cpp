#include <iostream>
#include <stack>
using namespace std;

int main()
{

    string str = "{()}";
    stack<char> st;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];

        if (ch == '(' || ch == '{' || ch == '[')
        {
            st.push(ch);
        }
        else
        {
            if (!st.empty())
            {
                char top = st.top();
                if ((ch == ')' && top == '(') || (ch == '}' && top == '{') || (ch == ']' && top == '['))
                {
                    st.pop();
                }
                else
                {
                    cout << "0" << endl;
                }
            }
            else
            {
                cout << "0" << endl;
            }
        }
    }

    if (st.empty())
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "0" << endl;
    }

    return 0;
}