#include <iostream>
using namespace std;

// 1. Solid Rectangle
void solidRectangle(int r, int c) {
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++) cout<<"*";
        cout<<endl;
    }
}

// 2. Right Triangle
void rightTriangle(int n) {
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++) cout<<"*";
        cout<<endl;
    }
}

// 3. Inverted Triangle
void invertedTriangle(int n){
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++) cout<<"*";
        cout<<endl;
    }
}

// 4. Pyramid
void pyramid(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++) cout<<" ";
        for(int j=1;j<=2*i-1;j++) cout<<"*";
        cout<<endl;
    }
}

// 5. Inverted Pyramid
void invertedPyramid(int n){
    for(int i=n;i>=1;i--){
        for(int j=1;j<=n-i;j++) cout<<" ";
        for(int j=1;j<=2*i-1;j++) cout<<"*";
        cout<<endl;
    }
}

// 6. Hollow Rectangle
void hollowRectangle(int r,int c){
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            if(i==1 || i==r || j==1 || j==c) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
}

// 7. Floyd's Triangle
void floydTriangle(int n){
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++) cout<<num++<<" ";
        cout<<endl;
    }
}

// 8. Alphabet Triangle
void alphabetTriangle(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++) cout<<(char)('A'+j)<<" ";
        cout<<endl;
    }
}

// 9. Diamond
void diamond(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++) cout<<" ";
        for(int j=1;j<=2*i-1;j++) cout<<"*";
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=n-i;j++) cout<<" ";
        for(int j=1;j<=2*i-1;j++) cout<<"*";
        cout<<endl;
    }
}

// 10. Hollow Pyramid
void hollowPyramid(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++) cout<<" ";
        for(int j=1;j<=2*i-1;j++){
            if(j==1 || j==2*i-1 || i==n) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
}

// 11. Butterfly Pattern
void butterfly(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++) cout<<"*";
        for(int j=1;j<=2*(n-i);j++) cout<<" ";
        for(int j=1;j<=i;j++) cout<<"*";
        cout<<endl;
    }
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++) cout<<"*";
        for(int j=1;j<=2*(n-i);j++) cout<<" ";
        for(int j=1;j<=i;j++) cout<<"*";
        cout<<endl;
    }
}

// 12. Checkerboard / Chessboard
void checkerboard(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((i+j)%2==0) cout<<"# ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}

int main(){
    int choice, n;
    while(true){
        cout<<"\n--- Pattern Menu ---\n";
        cout<<"1. Solid Rectangle\n";
        cout<<"2. Right Triangle\n";
        cout<<"3. Inverted Triangle\n";
        cout<<"4. Pyramid\n";
        cout<<"5. Inverted Pyramid\n";
        cout<<"6. Hollow Rectangle\n";
        cout<<"7. Floyd's Triangle\n";
        cout<<"8. Alphabet Triangle\n";
        cout<<"9. Diamond\n";
        cout<<"10. Hollow Pyramid\n";
        cout<<"11. Butterfly Pattern\n";
        cout<<"12. Checkerboard / Chessboard\n";
        cout<<"13. Exit\n";
        cout<<"Enter choice: ";
        cin>>choice;

        if(choice==13) break;

        cout<<"Enter size (n): ";
        cin>>n;

        switch(choice){
            case 1: solidRectangle(n,n+2); break;
            case 2: rightTriangle(n); break;
            case 3: invertedTriangle(n); break;
            case 4: pyramid(n); break;
            case 5: invertedPyramid(n); break;
            case 6: hollowRectangle(n,n+2); break;
            case 7: floydTriangle(n); break;
            case 8: alphabetTriangle(n); break;
            case 9: diamond(n); break;
            case 10: hollowPyramid(n); break;
            case 11: butterfly(n); break;
            case 12: checkerboard(n); break;
            default: cout<<"Invalid choice!\n";
        }
    }
    return 0;
}
