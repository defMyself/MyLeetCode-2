int main()
{
    stack<char> oprtr;
    stack<double> oprnd;
    string input;
    bool quit=false;
    dobule x, y;
    while(!quit)
    {
        cout << "RPN> ";
        cin >> input;
        switch(input[0])
        {
        case 'Q':
        case 'q': quit = true; break;
        //
        }
}