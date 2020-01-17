//
//  main.cpp
//  choengchaip-testing
//
//  Created by Chengchai Phachonyut on 17/1/2563 BE.
//  Copyright © 2563 Chengchai Phachonyut. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int monthLeft = 0;
    int i = 1;
    double household = 0;
    double recurring = 0;
    cout << "Insert your period ( month ) : ";
    cin >> monthLeft;
    double profits[monthLeft];
    while(i<=monthLeft){
        double expanses,income;
        char chartmp;
        if(i==1){
            printf("Now : %dst month\n", i);
        }else if(i == 2){
            printf("Now : %dnd month\n", i);
        }else if(i == 3){
            printf("Now : %drd month\n", i);
        }else{
            printf("Now : %dth month\n", i);
        }
        printf("Remaining : %i month left\n", monthLeft - i);
        cout << "\n";
        cout << "You want to set your recurring costs ?\n";
        cout << "y/n \n";
        cin >> chartmp;
        if(chartmp == 'y'){
            cout << "Input your recurring : ";
            cin >> recurring;
        }
        cout << "\nInput your expanses : ";
        cin >> expanses;
        household -= expanses;
        cout << "Input your income : ";
        cin >> income;
        household += income;
        household -= recurring;
        profits[i-1] = income - expanses;
        i++;
        cout << "\n";
        cout << "********************\n";
        cout << "Summary : \n";
        cout << "\n";
        cout << "This month \n";
        printf("Your expanses : %.2f \n",expanses);
        printf("Your income : %.2f \n",income);
        printf("Your recurring : %.2f \n",recurring);
        cout << "\n";
        printf("Your household's budget remaining : %.2f\n", household);
        cout << "\n";
        cout << "********************\n";
        cout << "\n";
        cout << "\n";
    }
    cout << "Result : \n";
    double sum = 0;
    for(int i=0;i<monthLeft;i++){
        printf("Your %d month profit : %.2f\n",i+1,profits[i]);
        sum += profits[i];
    }
    cout << "\n";
    printf("Sum of profits : %.2f", sum);
    cout << "\n";
    return 0;
}
