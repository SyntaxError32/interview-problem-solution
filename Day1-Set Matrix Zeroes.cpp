#include<bits/stdc++.h>
#define ii pair<int,int>
using namespace std;

int main() {
        int n,m;
        cin >> n >> m;

        int matrix[n+1][n+1];
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                cin >> matrix[i][j];
            }
        }

        vector <ii> v;
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                    if(matrix[i][j] == 0) {
                        v.push_back({i,j});
                }
            }
        }

        //int n = matrix.size();
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                    if(matrix[i][j] == 0) {
                        v.push_back({i,j});
                }
            }
        }

        for(int i=0;i<v.size();i++) {
            for(int j=0;j<n;j++)matrix[j][v[i].second] = 0;
            for(int j=0;j<m;j++)matrix[v[i].first][j] = 0;
        }

         for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                    cout << matrix[i][j] << " ";
                }
             cout << endl;
           }
}
