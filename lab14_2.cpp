#include <iostream>
#include <cmath>
using namespace std;

const int N = 30;
const int M = 70;

void updateImage(bool [][M],int,int,int);

void showImage(const bool [][M]);

int main()
{
    bool image[N][M] = {};
    int s,x,y;
    do{
        showImage(image);
        cout << "Input your brush size and location: ";
        cin >> s >> x >> y;
        updateImage(image,s,x,y);
    }while(s != 0 || x != 0 || y != 0);
    return 0;
}

void updateImage(bool pic[N][M],int s,int x,int y)
{
        for(int i=0;i<N; i++)
        {
            for(int j=0; j<M; j++){
                if (sqrt(pow(i-x,2)+pow(j-y,2))+1<=s)
                {
                    pic[i][j]=1;
                }
            }
        }
}
void showImage(const bool pic[N][M]){
    for(int count=0;count<72;count++){
        cout <<"-";
    }
    cout << "\n";
    for(int i=0;i<30;i++){
        for(int x=0;x<71;x++){
            if(x==0) cout << "|";
            if(x==70) {
                cout << "|";
                continue;
            }
            if(pic[i][x]==1) cout << "*";
            else cout << " ";
        }
        cout << "\n";
    }
    for(int count=0;count<72;count++){
        cout <<"-";
    }
    cout << "\n";
}