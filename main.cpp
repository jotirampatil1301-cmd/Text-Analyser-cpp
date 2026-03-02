#include<iostream>
using namespace std;

int countVowels(string s){
    int count = 0;

    for(int i = 0; i < s.length(); i++){
        if(s[i]=='a' || s[i]=='A' ||
           s[i]=='e' || s[i]=='E' ||
           s[i]=='i' || s[i]=='I' ||
           s[i]=='o' || s[i]=='O' ||
           s[i]=='u' || s[i]=='U'){
               count++;
        }
    }
    return count;
}

int countConsonants(string s){
    int count = 0;

    for(int i = 0; i < s.length(); i++){

        if((s[i] >= 'a' && s[i] <= 'z') || 
           (s[i] >= 'A' && s[i] <= 'Z')){

            if(!(s[i]=='a' || s[i]=='A' ||
                 s[i]=='e' || s[i]=='E' ||
                 s[i]=='i' || s[i]=='I' ||
                 s[i]=='o' || s[i]=='O' ||
                 s[i]=='u' || s[i]=='U')){

                count++;
            }
        }
    }
    return count;
}
int countDigits(string s){
    int count = 0;

    for(int i = 0; i < s.length(); i++){
        if(s[i] >= '0' && s[i] <= '9'){
            count++;
        }
    }
    return count;
}
int countWords(string s){
    int count = 0;
    bool inWord = false;

    for(int i = 0; i < s.length(); i++){
        if(s[i] != ' ' && !inWord){
            inWord = true;
            count++;
        }
        else if(s[i] == ' '){
            inWord = false;
        }
    }
    return count;
}
int main(){
    string s;
    cout << "Enter the String: ";
    getline(cin, s);

    int n;

    while(true){
        cout<<"\n===== TEXT ANALYSER MENU =====\n";
        cout<<"1. Count Vowels\n";
        cout<<"2. Count Consonants\n";
        cout<<"3. Count Digits\n";
        cout<<"4. Count Words\n";
        cout<<"5. Enter New String\n";
        cout<<"6. Exit\n";
        cout<<"Enter your choice: ";
        cin>>n;

        switch(n){
            case 1:
                cout<<"Vowels: "<<countVowels(s)<<endl;
                break;

            case 2:
                cout<<"Consonants: "<<countConsonants(s)<<endl;
                break;

            case 3:
                cout<<"Digits: "<<countDigits(s)<<endl;
                break;

            case 4:
                cout<<"Words: "<<countWords(s)<<endl;
                break;

            case 5:
                cin.ignore();
                cout<<"Enter new string: ";
                getline(cin, s);
                break;

            case 6:
                cout<<"Exiting Program...\n";
                return 0;

            default:
                cout<<"Invalid choice!\n";
        }
    }
}
