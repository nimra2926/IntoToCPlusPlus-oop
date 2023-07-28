#include <iostream>
#include "Functions.h"

using namespace std;

int main() {
    int c;
    int ptr[10];
    int value;
    int opt;
    sortedArray s(c, ptr);
    do{
        cout<<endl;
        cout<<"WHICH TASK DO YOU WANT TO PERFORM?"<<endl;
        cout<<"1.CONSTRUCTOR.."<<endl;
        cout<<"2.SORT THE ARRAY AND PRINT IT.."<<endl;
        cout<<"3.CHECK THAT ARRAY IS FULL OR NOT.."<<endl;
        cout<<"4.PRINT THE ARRAY.."<<endl;
        cout<<"5.SEARCH AN ELEMENTS FROM THE ARRAY.."<<endl;
        cout<<"6.DELETE AN ELEMENT FROM AN SPECIFIC INDEX.."<<endl;
        cout<<"7.CHECK THAT ARRAY IS EMPTY OR NOT.."<<endl;
        cout<<"8.DESTRUCTOR.."<<endl;
        cout<<"9.EXIT.."<<endl;
        cin>>opt;
        switch(opt){
            case 1:{
                sortedArray s(c, ptr);
                break;
            }
            case 2:{
                s.insertElement(value);
                s.print();
                break;
            }
            case 3:{
                s.full();
                break;
            }
            case 4:{
                s.print();
                break;
            }
            case 5:{
                s.search(value);
                break;
            }
            case 6:{
                int index;
                s.deleteElement(index);
                break;
            }
            case 7:{
                s.empty();
                break;
            }
            case 8:{
                s.~sortedArray();
                break;
            }
            case 9:{
                cout<<"YOU CHOOSE TO EXIT..."<<endl;
                exit(2);
                break;
            }
            default:{
                cout<<"YOU HAVE ENTERED AN INVALID INPUT .."<<endl;
                break;
            }
        }

    }while(opt>=1 && opt<=9);


    return 0;
}
