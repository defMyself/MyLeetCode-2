int main()
{
    TList tlist;
    tlist.push_back(new Tree("Cohen"));
    tlist.push_back(new Tree("Davis"));
    tlist.push_back(new Tree("Evans"));
    Tree t0("Baker",tlist);
    tlist.clear();
    tlist.push_back(new Tree("Gauss"));
    Tree t1("Foley", tlist);
    tlist.clear();
    for(It it = t.begin(); it!=t.end(); it++)
        cout << *it << " ";
    cout << "\n";
}