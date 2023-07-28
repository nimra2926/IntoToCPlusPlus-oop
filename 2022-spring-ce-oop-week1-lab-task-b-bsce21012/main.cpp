#include <iostream>
#include "Functions.h"
using namespace std;

int main() {
int size;
    int **arr = new int*[size];
    cout<<"please enter size =";
    cin>>size;
    for(int i=0;i<=size;i++){
         addColumnsTask1( *arr ,(size-size+i));
    }
    for(int i=0; i<=size; i++){
         rowViseInputTask1( *arr,(size-size+i));
        }
        for(int i=0; i<=size; i++){
            rowWisePrintTask1( *arr,(size-size+i));
            }

    return 0;
}

