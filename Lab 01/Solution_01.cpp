#include<iostream>
using namespace std;

class Date{
    private:
        int day, month, year;
        string string_month;
    public:
        Date(int d, int m, int y) : day(d), month(m), year(y) {
            switch(month){
                case 1:
                    string_month = "January ";
                    break;
                case 2:
                    string_month = "February ";
                    break;
                case 3:
                    string_month = "March ";
                    break;
                case 4:
                    string_month = "April ";
                    break;
                case 5:
                    string_month = "May ";
                    break;
                case 6:
                    string_month = "June ";
                    break;
                case 7:
                    string_month = "July ";
                    break;
                case 8:
                    string_month = "August ";
                    break;
                case 9:
                    string_month = "September ";
                    break;
                case 10:
                    string_month = "October ";
                    break;
                case 11:
                    string_month = "November ";
                    break;
                case 12:
                    string_month = "December ";
                    break;
            }
        }
        void Print_Date(){
            cout<<month<<"/"<<day<<"/"<<year-2000<<endl;
            cout<<string_month<<day<<", "<<year<<endl;
            cout<<day<<" "<<string_month<<year<<endl;
        }
};

int main(){
    int d,m,y;
    cout<<"Enter Day: ";
    cin>>d;
    cout<<"Enter Month: ";
    cin>>m;
    cout<<"Enter Year: ";
    cin>>y;

    while(d>31||d<1){
        cout<<"Please Enter Valid Day: ";
        cin>>d;
    }
    while(m>12||m<1){
        cout<<"Please Enter Valid Day: ";
        cin>>m;
    }
    Date DOB(d,m,y);
    DOB.Print_Date();
}