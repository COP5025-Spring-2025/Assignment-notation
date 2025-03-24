#include "notation_app.cpp"

int main() {
    string expression;
    map<string, int> variables;

    cout << "Enter expression: ";
    getline(cin, expression);

    string type = detectNotation(expression);
    cout << "Detected notation: " << type << endl;

    vector<string> tokens;
    int result = 0;

    if (type == "infix") {
        tokens = infixToPostfix(expression);
        auto vars = extractVariables(tokens);
        for (const auto& var : vars) {
            cout << "Enter value for '" << var << "': ";
            cin >> variables[var];
        }
        result = evalPostfix(tokens, variables);
    } else {
        tokens = tokenize(expression);
        auto vars = extractVariables(tokens);
        for (const auto& var : vars) {
            cout << "Enter value for '" << var << "': ";
            cin >> variables[var];
        }
        if (type == "prefix") result = evalPrefix(tokens, variables);
        else if (type == "postfix") result = evalPostfix(tokens, variables);
        else {
            cout << "Unknown or unsupported notation." << endl;
            return 1;
        }
    }

    cout << "Evaluated result: " << result << endl;
    return 0;
}