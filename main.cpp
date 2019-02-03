#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i;
	for(i=0; i< 10 ;i++){
        std::cout<<i+1<< " " ;
    }
    std::cout<<std::endl ;
    std::cout<<"diatas adalah hasil for"<<std::endl ;
    
    
    i=0; // perintah ini hanya untuk membuat nilai i menjadi 0 kembali
    while (i<10){
        std::cout<< (i+1)<< " " ;
        i++;
    }
    std::cout<<std::endl ;
    std::cout<<"diatas adalah hasil while"<<std::endl ;
    
    
    i=0;// perintah ini hanya untuk membuat nilai i menjadi 0 kembali
	do {
            std::cout<<i+1<< " " ;
            i++;

        }while(i<10);
    
    std::cout<<std::endl ;
    std::cout<<"diatas adalah hasil do-while"<<std::endl ;
	return 0;
}
