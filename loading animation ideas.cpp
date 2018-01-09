#include <iostream>
#include <windows.h>
#include <conio.h>
#include <cstdlib>
using namespace std;

void loading(){
    cout<<"                 ****              ***             ***\n";Sleep(230);system("color f0");
    cout<<"                ******             ***             ***\n";Sleep(200);system("color 0f");Sleep(30);system("color f0");Sleep(50);system("color 0f");
    cout<<"               ***  ***            ***\n";Sleep(230);system("color f0");
    cout<<"              ***    ***           ***             ***\n";Sleep(230);
    cout<<"             ************          ***             ***\n";Sleep(230);system("color 0f");
    cout<<"            **************         ***             ***\n";Sleep(230);system("color f0");
    cout<<"           ***          ***        *********       ***\n";Sleep(230);system("color 0f");
    cout<<"          ***            ***       *********       ***\n\n";Sleep(230);system("color f0");

    for(int i=0;i<=50;i++){
    system("CLS");
    cout<<"                 ****              ***             ***\n";
    cout<<"                ******             ***             ***\n";
    cout<<"               ***  ***            ***\n";
    cout<<"              ***    ***           ***             ***\n";
    cout<<"             ************          ***             ***\n";
    cout<<"            **************         ***             ***\n";
    cout<<"           ***          ***        *********       ***\n";
    cout<<"          ***            ***       *********       ***\n\n";
    cout<<"                                "<<i*2<<"%";
    cout<<"\n     [";
    for(int j=0;j<=i;j++){
    cout<<"=";
    }cout<<">";
    for(int l=i;l<50;l++){
    cout<<" ";}
    cout<<"]";
    Sleep(100);

    }


}
void ldg(){
for(int i=0;i<=5;i++){
    system("CLS");
    cout<<"\n\n  loading |";Sleep(70);
    system("CLS");
    cout<<"\n\n  loading /";Sleep(70);
    system("CLS");
    cout<<"\n\n  loading -";Sleep(70);
    system("CLS");
    cout<<"\n\n  loading \ ";
    Sleep(70);

}
}




int main()
{
    ldg();
    system("CLS");
    loading();
    return 0;
}
