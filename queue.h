#ifndef queue_h
#define queue_h
#include <iostream>

using namespace std;

struct mobil {
       string A[5];
       int BATAS, data=-1;
};
class car {
    public:
    mobil y;
    bool isEmpty(){ 
    	if(y.data == -1){
    		return true;
    		}
    	return false;
   	}
    
    void batas(int n){
        y.A[n];
        y.BATAS = n-1;
    }
    
    bool isFull(){ 
    	if(y.data ==y.BATAS ){
    		return true;
   		}
    	else{
            return false;
        }   	
   	}		
    	
    void enqueue(string x){	
    	if(isFull()){
    		cout<<"========================="<<endl;
    		cout<<"\n==ANTRIAN SUDAH PENUH=="<<endl;
    		cout<<"========================="<<endl;
   		}
    	else{
    		y.data++;
    		y.A[y.data] = x;
    		cout<<"\n====================================="<<endl;
			cout<<"== Antrian mobil berhasil masuknih =="<<endl;
			cout<<"=====================================\n"<<endl;   		
		   }	
   	}
    	
    void dequeue(){	
    	if(isEmpty()){
    		cout<<"\n=================================="<<endl;
    		cout<<"== tidak ada mobil yang ngantri =="<<endl;
    		cout<<"=================================="<<endl;
			}
    	else{
    		cout<<"\n\n=================================="<<endl;
			cout<<"Mobil "<<y.A[y.data-1]<<" udah keluar niihh"<<endl;
			cout<<"=================================="<<endl;
    		for(int i=0;i<y.data;i++){
    			y.A[i] = y.A[i+1];
    			}
    		y.data--;
    		}
    	}
    
    void tampil(){
    	if(isEmpty()){
    		cout<<"\n\no> Antrian kosong "<<endl;
    		}
    	else{
    		for(int i=0;i<=y.data;i++){
    		        cout<<endl<<y.A[i]<<" ";
    			}
    		cout<<"\n\no> Total Mobil yang di Antrian = "<<y.data+1<<endl;
    		}
    	
    	}
};
#endif
