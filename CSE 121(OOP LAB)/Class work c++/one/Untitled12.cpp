#include<iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    cout << sizeof(N)/ sizeof(int) << endl;
    while (N != 0)
    {
            int arr[N][N];
            int m = 1;
            int n = 1;
            int r;
            for(int col = 0; col < N; col++){
                int x = n;
                for(int row = 0; row < N; row++){
                    if(col == 0){
                        arr[row][col] = m++;
                    }else{
                        r = n;
                        if(n == 0){
                            r = n;
                            arr[row][col] = r++;
                        }else{
                             arr[row][col] = r--;
                        }
                    }
                }
                n++;

            }

            for(int row = 0; row < N; row++){
                for(int col = 0; col < N; col++){
                    cout << arr[row][col] << " ";
                }
                cout << endl;
            }
            cin >> N;
            arr[N][N];
    }


}
