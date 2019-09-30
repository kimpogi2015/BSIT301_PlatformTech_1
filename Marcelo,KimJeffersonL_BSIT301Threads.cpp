#include <iostream>
#include <thread>
#include <string>
 using namespace std;
 
void thread1 (int x){
	int i=0;
	for(i=0; i < x; i++){
		cout << "This is thread 1 ";
	}
}

void thread2(int x){
	int i=0;
	for (i=0; i < x; i++){
		cout << "This is thread 2 ";
	}
}
void thread3(int x){
	int i=0;
	for (i=0; i < x; i++){
		cout << "This is thread 3 ";
	}
}

void thread4(int x){
	int i=0;
	for (i=0; i < x; i++){
		cout << "This is thread 4 ";
	}
}

int main() {
	
	int i = 0;
	thread th1(thread1, 4);
	thread th2(thread2, 4);
	thread th3(thread3, 4);
	thread th4(thread4, 4);
    
    for(i = 0; i< 10; i++) {
    	cout << "This print is from Main Method \n" ;
	}
	
	th1.join();
	th2.join();
	th3.join();
	th4.join();
     return 0;

}
