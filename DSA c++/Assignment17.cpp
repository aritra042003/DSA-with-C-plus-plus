#include <iostream>
using namespace std;
class GraphMatrix
{
private:
    int v_count;
    int e_count;
    int **adj;

public:
    void createGraph(int vno, int eno);
    void printAdjacentNodes(int v);
    bool isIsolated(int v);
    ~GraphMatrix();
};
void GraphMatrix::createGraph(int vno, int eno)
{
    int u, v;
    v_count = vno;
    e_count = eno;
    adj = new int *[v_count];
    for (int i = 0; i < v_count; i++)
        adj[i] = new int[v_count];
    for (int i = 0; i < v_count; i++)
        for (int j = 0; j < v_count; j++)
            adj[i][j] = 0;
    for (int k = 1; k <= e_count; k++)
    {
        cout << "\n Enter node number connecting edge:";
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }
}
void GraphMatrix::printAdjacentNodes(int v)
{
    if (v < v_count && v >= 0)
    {
        for (int i = 0; i < v_count; i++)
            if (adj[v][i] == 1)
                cout << endl
                     << "V" << i;
    }
}
bool GraphMatrix::isIsolated(int v)
{
    bool flag = true;
    if (v < v_count && v >= 0)
    {
        for (int i = 0; i < v_count; i++)
            if (adj[v][i] == 1)
            {
                flag = false;
                break;
            }
    }
    return flag;
}
GraphMatrix::~GraphMatrix()
{
    for (int i = 0; i < v_count; i++)
        delete []adj[i];
    delete []adj;
}
int main()
{
}