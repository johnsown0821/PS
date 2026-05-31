class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int> operand;
        int a,b;
        for (int i=0; i<tokens.size(); i++) {
            if (tokens[i]=="+") {
                a = operand.back();
                operand.pop_back();
                b =  operand.back();
                operand.pop_back();
                operand.push_back(a+b);
            }
            else if (tokens[i]=="-") {
                a = operand.back();
                operand.pop_back();
                b =  operand.back();
                operand.pop_back();
                operand.push_back(b-a);
            }
            else if (tokens[i]=="*") {
                a = operand.back();
                operand.pop_back();
                b =  operand.back();
                operand.pop_back();
                operand.push_back(a*b);
            }
            else if (tokens[i]=="/") {
                a = operand.back();
                operand.pop_back();
                b =  operand.back();
                operand.pop_back();
                operand.push_back(b/a);
            }
            else {
                operand.push_back(stoi(tokens[i]));
            }
        }

        return operand[0];
    }
};