//pattern of rectangle//

#include <iostream>
using namespace std;

int main(){
    int i;
    int j;

    for(i=1;i<=5;i++){
        for(j=1;j<=4;j++){
            cout<<"*";
        }
    cout<<endl;
    }
}

/*pattern of rectangle with user input
#include <iostream>
using namespace std;

int main(){
    int r,c;
    cout<<"enter no of rows and columns";
    cin>>r>>c;

    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            cout<<"*";
        }
    cout<<endl;
    }
}
*/