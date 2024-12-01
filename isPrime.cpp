#include <iostream>
#include <vector>
int main(){
    int n;
    do{
        std::cout << "Vui long nhap do lon cua mang: \n";
        std::cin >> n;
    }while(n < 0);
    std::vector<int> chuso(n);

    for(int i = 0; i < n; i++){
        std::cout << "Vui long nhap so thu " << i + 1 << ": \n";
        std::cin >> chuso[i];
    }  
    int snd = 0;  
    for(int j = 0; j < n; j++){
        if(chuso[j] > 0){
            snd++;
        }
    }
    std::cout << "Trong mang co tat ca " << snd << " so nguyen duong";
    return 0;
}