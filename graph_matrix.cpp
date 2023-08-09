#include <bits/stdc++.h>

using namespace std;


    class graph
    {
    public:
        int vertex;
        bool **matrix;

        graph(int vertex)
        {
            this->vertex = vertex;
            matrix = new bool *[vertex];

            for (int i = 0; i < vertex; i++)
            {
                matrix[i] = new bool[vertex];
                for (int j = 0; j < vertex; j++)
                {
                    matrix[i][j] = false;
                }
            }
        }
        void addedge(int i, int j)
        {
            matrix[i][j] = true;
            matrix[j][i] = true;
        }

        void print()
        {

            for (int i = 0; i < 10; i++)
            {
                for (int j = 0; j < 10; j++)
                {
                    cout << matrix[i][j] << " ";
                }
                cout << endl;
            }
        }

        ~graph()
        {
            for (int i = 0; i < vertex; i++)
            {
                delete[] matrix[i];
            }
            delete[] matrix;
        }
    };

    int main()
    {
        graph g(10);
        g.addedge(1, 0);
        g.addedge(2, 3);
        g.addedge(5, 0);
        g.addedge(6, 7);
        g.addedge(8, 9);
        g.addedge(9, 8);
        g.addedge(1, 0);
        g.addedge(1, 0);
        g.addedge(3, 0);
        g.addedge(6, 0);
        g.addedge(2, 7);
        g.addedge(7, 0);
        g.addedge(2, 0);
        g.addedge(1, 9);

        cout << "hii" << endl;
        g.print();

        return 0;
    }