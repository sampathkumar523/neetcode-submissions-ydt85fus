class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stac;
        string strAll = "+-*/";       

        for(auto &str : tokens)
        {
            if(strAll.find(str) != string::npos)
            {
                int op1 = stac.top();
                stac.pop();
                int op2 = stac.top();
                stac.pop();

                if(str == "+")
                {
                    int resop = op2+op1;
                    stac.push(resop);
                }
                else if(str == "-" )
                {
                    int resop = op2-op1;
                    stac.push(resop);
                }
                else if(str == "*")
                {
                    int resop = op2*op1;
                    stac.push(resop);
                }
                else if(str == "/")
                {
                    int resop = floor(op2/op1);
                    stac.push(resop);
                }
            }
            else
            {
                stac.push(stoi(str));
            }
        }

        return stac.top();
    }
};
