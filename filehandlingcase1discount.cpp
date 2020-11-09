#include<iostream>//pre-directory
#include<fstream>//file stream directory and header file
using namespace std; // scope resolution

//Function first that calculates total charge
int totalCharge(int days,int unitPrice)
{
    return days*unitPrice;
}

//Function second stores all the total sum
int total_charge_save(int total_charge[],int num)
{
    int total=0,i;
    for(i=0;i<num;i++)
    {
        total+=total_charge[i];
    }
    return total;
}

//Function third finds the discount according to the table given
int discount(int sum)
{
    int dis_amt=0;
    if(sum<200)
        {
            dis_amt=0;
        }
        else if(sum<=200 || sum>=400)
        {
            dis_amt=(0.15*sum);
        }
        else if(sum<=600 || sum>400)
        {
            dis_amt=(0.10*sum);
        }
        else
        {
            dis_amt=(0.25*sum);
        }
    return dis_amt;
}

//Function last returns net price
int discountAfter(int sum, int disBefore)
{
    return sum-disBefore;
}

//Function display
void display(int sum[],int disCount[],int disCountAfter[],int cust_id,int num)
{

    int i;
    cout<<"\n\n-------------------------------------------------------------------------------------";
    cout<<"\n|\t\t\t\t  Billing Software\t\t\t\t\t|\n";
    cout<<"|\t\t\t\t     Report Analysis\t\t\t\t\t|\n";
    cout<<"-----------------------------------------------------------------------------------------";
    for(i=0;i<num;i++)
    {
        cout<<"\n\nFor Customer "<<cust_id++;
        cout<<",\n\nTotal Charge = "<<sum[i];
        cout<<"\nTotal Discount = "<<disCount[i];
        cout<<"\nTotal Net Price after Discount = "<<disCountAfter[i];
    }

}

// main starts here . . .
int main()
{
    //data type declaration
    int num,i,j,days,unitPrice,sum,dis_before;
    int cust_id=12345;
    int total_charge[3],disBefore[3],disAfter[3],total[3];
    string date="20202015";

    //User message
    cout<<"Please Enter 3 days stock info";
    cout<<"\n\n----------------------------------------------------------";
    cout<<"\n\n----------------------------------------------------------";

    //using the user defined client
    cout<<"\n\nPlease specify number of client => ";
    cin>>num;

    //Looping concept for the client based
    for(i=0;i<num;i++)
    {
        cout<<"\n\nCustomer id => "<<cust_id++;
        cout<<"\nDate => "<<date;
        //implementing nested loop
        for(j=0;j<3;j++)
        {
            cout<<"\n\nDay ["<<j+1<<"] =>";
            cin>>days;
            cout<<"UnitPrice ["<<j+1<<"] =>";
            cin>>unitPrice;
            //using function one here
            total_charge[j]=totalCharge(days,unitPrice);
            cout<<"\nDay "<<j+1<<" charges = "<<total_charge[j];
        }
        total[i]=total_charge_save(total_charge,num); //second function here
        sum=total[i];
        disBefore[i]=discount(sum); //third function here
        dis_before=disBefore[i];
        disAfter[i]=discountAfter(sum,dis_before); //last function here

        //shortly display
        cout<<"\n\nThe sum is "<<total[i];
        cout<<"\nDiscount = "<<disBefore[i];
        cout<<"\nNet Price = "<<disAfter[i];
    }

    //function displays it automatically
    display(total,disBefore,disAfter,cust_id,num);

    ofstream fout;
    fout.open("ClientRecord20202015.txt");
    fout<<"-----------------------------------------------------------------------------------------";
    fout<<"\n|\t\t\t\t Billing System\t\t\t\t\t|\n";
    fout<<"-----------------------------------------------------------------------------------------";
    cust_id=12345;
    for(i=0;i<num;i++)
    {
        fout<<"\n| For Customer "<<cust_id++;
        fout<<",\t\t\t\t\t\t\t\t\t|\n| Total Charge = "<<total[i];
        fout<<"\tTotal Discount = "<<disBefore[i];
        fout<<"\tTotal Net Price After Discount = "<<disAfter[i];
        fout<<"\t|\n-----------------------------------------------------------------------------------------";
    }

    fout.close();

return 0;

}
