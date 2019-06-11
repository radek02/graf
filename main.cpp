#include <iostream>
#include <vector>

using namespace std;
int n, m, a, b;

int main()
{
    vector <int> V[10];
    bool test[10];
    cin>>n>>m;
    for(int i=0; i<m; i++)
    {
        cin>>a>>b;
        V[a].push_back(b);
        V[b].push_back(a);
        test[a]=1;
        test[b]=1;
    }

    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<V[i].size(); j++)
        {
            cout<<V[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0; i<10; i++)
    {
        if(!test[i])
        {
            cout<<endl<<"NIE !!!";
            break;
        }
    }
    return 0;
}
