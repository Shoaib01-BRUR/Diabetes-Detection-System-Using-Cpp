#include<bits/stdc++.h>
#include <unistd.h>

using namespace std;

class diabetes
{
private:
    char name[40];
    float age;
    int wt;
    float ht;
    char sex;
    char s[100];
public:
    void welcome_screen(void);
    void getvalue(void);
    void getlevel1_symptoms(void);
    void getlevel2_symptoms(void);
    void getlevel3_symptoms(void);
    int analyse_symptoms(int);
    char display_message(int,int);
};

int main()
{
    char ch,choice,cho;
    //int m,n=2;
    float m;
    int n=1;
    void diagnosis(void);
    diabetes dts;
    dts.welcome_screen();
    dts.getvalue();
    diagnosis();
    dts.getlevel1_symptoms();
    m=dts.analyse_symptoms(n);
    choice=dts.display_message(m,n);
    choice=toupper(choice);
    if(choice=='Y')
    {
        ++n;
        dts.getlevel2_symptoms();
        m=dts.analyse_symptoms(n);
        choice=dts.display_message(n,m);
        choice=toupper(choice);
        if(choice=='Y')
        {
            ++n;
            dts.getlevel3_symptoms();
            m=dts.analyse_symptoms(n);
            cho=dts.display_message(n,m);
            cho=toupper(cho);
            if(cho=='Y')
            {
                ++n;
                dts.getlevel3_symptoms();
                m=dts.analyse_symptoms(n);
                choice=dts.display_message(m,n);
            }
        }
    }
}


void diabetes::welcome_screen()
{


    cout<<setw(75)<<"********* W E L C O M E ********* "<<endl<<endl;
    cout<<"\n\n\n\n\n\t\t\t ";
    cout<<setw(45)<<" Begum Rokeya University "<<endl;
    cout<<setw(85)<<" M E D I C A L   D I A G N O S I S   S O F T W A R E  "<<endl;

    cout<<"\n\n\n\n\n\n\t\t\t ";
    cout<<setw(40)<<"D O N E  B Y  : "<<endl;
    cout<<setw(75)<<"*Shoaib* *Mim* *Hironmoy* & *Shammni* "<<endl;
    cout<<setw(80)<<"* 1705001 * * 1705002 * * 1705045 * & * 1605016 * "<<endl;

    sleep(5);
    cout<<endl<<endl<<"******** PRESS ANY KEY TO CONTINUE ********* ";
    cin.get();
    system("cls");
    return;
}


void diabetes::getvalue()
{

    cout<<setw(75)<<" P E R S O N A L   I N F O R M A T I O N"<<endl<<endl;
    cout<<setw(30)<<"N A M E        :";
    cin>>name;
    cout<<setw(30)<<"A G E          :";
    cin>>age;
    cout<<setw(30)<<"W E I G H T    :";
    cin>>wt;
    cout<<setw(30)<<"H E I G H T    :";
    cin>>ht;
    cout<<setw(30)<<"S E X (M/F)    :";
    cin>>sex;
    sleep(5);
    system("cls");
    return;
}


void diagnosis(void)
{

    cout<<setw(75)<<" **  D I A G N O S I S   W I N D O W **   ";
    cout<<"\n\n\n";
    cout<<setw(50)<<" Let's have a look at  symptoms.........";
    cout<<"\n\n\n";
    cout<<setw(50)<<" Please enter the form in next page .";
    cout<<"\n\n\n\n\n\n\t\t\t ";
    sleep(5);
    cout<<"***** PRESS ANY KEY ***** ";
    cin.get();
    system("cls");
}

void diabetes::getlevel1_symptoms(void)
{
    int i=0;
    cout<<setw(75)<< " *** MEDICAL DIAGONOSIS FORM *** "<<endl<<endl<<endl;
    cout<<setw(30)<<"APPETITE (H(HIGH),/L(LOW),/N(NORMAL)             : ";
    cin>>s[i];
    s[i]=toupper(s[i]);
    ++i;
    cout<<setw(30)<<"FREQUENCY OF THIRST(H(HIGH),/L(LOW)/N(NORMAL)    : ";
    cin>>s[i];
    s[i]=toupper(s[i]);
    ++i;
    cout<<setw(30)<<"FREQUENCY OF URINATION(H(HIGH),/L(LOW),/N(NORMAL): ";
    cin>>s[i];
    s[i]=toupper(s[i]);
    ++i;
    cout<<setw(30)<<"VISION (I(IMPAIRMENT),/N(NORMAL)                 : ";
    cin>>s[i];
    s[i]=toupper(s[i]);
    ++i;
    cout<<setw(30)<<"URINE SUGAR(P(PASSIVE)/A(ACTIVE)                 : ";
    cin>>s[i];
    s[i]=toupper(s[i]);
    ++i;
    cout<<setw(30)<<"KETONUREA(P(PASSIVE)/A(ACTIVE)                   : ";
    cin>>s[i];
    s[i]=toupper(s[i]);
    ++i;
    cout<<setw(30)<<"FASTING BLOOD SUGAR(H(HIGH)/L(LOW)/N(NOMAL)      : ";
    cin>>s[i];
    s[i]=toupper(s[i]);
    ++i;
    cout<<setw(30)<<"R B S (H(HIGH)/L(LOW)/N(NORMAL)                  : ";
    cin>>s[i];
    s[i]=toupper(s[i]);
    ++i;
    cout<<setw(30)<<"FAMILY HISTORY OF DIABETES(P(PASSIVE)/A(ACTIVE)  : ";
    cin>>s[i];
    s[i]=toupper(s[i]);
    ++i;
    cout<<setw(30)<<"OGTT(D/N)                                        : ";
    cin>>s[i];
    s[i]=toupper(s[i]);
    ++i;
}

int diabetes::analyse_symptoms(int n)

{
    int i=0;
    int count=0;
    int result=0;
    switch(n)
    {
    case 1:
        if(s[9]=='D' )
            result=-1;
        else if(s[5]=='P'&& s[6]=='P' && s[7]=='H')
            result=-1;
        else
        {
            for(i=0; i<10; i++)
            {
                if(s[i]=='H'||s[i]=='P'||s[i]=='D'||s[i]=='I')
                    count++;
            }
            if(count>5)
                result=-1;
        }
        break;

    case 2:
        if((s[0]=='P')||(s[1]=='P')||(s[2]=='P')||(s[3]=='H')||(s[4]=='P')||(s[5]=='P')||(s[6]=='P'))
            result=-1;
        else
            result=0;
        break;
    case 3:
        if((s[0]=='Y')&&(s[1]=='N')&&(s[2]=='W')&&(s[3]=='P')&&(s[4]=='P')||

                (s[0]=='Y')&&(s[1]=='B')&&(s[2]=='W')&&(s[3]=='P')&&(s[4]=='P')||

                (s[0]=='Y')&&(s[1]=='N')&&(s[2]=='M')&&(s[3]=='P')&&(s[4]=='P')||

                (s[0]=='Y')&&(s[1]=='N')&&(s[2]=='Y')&&(s[3]=='P')&&(s[4]=='P'))
            result=0;
        else
            result=-1;
        break;
    default:
        break;
    }
    return(result);
}

char diabetes::display_message(int n,int m)

{
    char ch;
    switch(n)
    {
    case 1:
        switch(m);
        {
        case 0:
            cout<<setw(30)<<"THE PERSON IS NOT DIABETIC"<<endl<<endl;
            cout<<setw(30)<<"PRESS ANY KEY TO QUIT.";
            cin.get();
            break;

        case -1:

            cout<<setw(30)<<"THE PERSON IS DIABETIC ";
            cout<<setw(30)<<"PROCEED (Y/N)  ?";
            cin>>ch;
            break;

            //  default: break;
        }





    case 2:
        switch(m)
        {
        case 0:
            cout<<setw(30)<<"IT IS PRIMARY DIABETES.";
            cout<<setw(30)<<"Proceed(Y/N)?   ";
            cin>>ch;
            break;

        case -1:
            cout<<setw(30)<<"IT IS SECONDARY DIABETES"<<endl<<endl;
            cout<<"PRESS ANY KEY TO QUIT";
            cin.get();
            break;

        }
        break;

    case 3:
        switch(m)
        {
        case 0:
            cout<<setw(30)<<" IT IS INSULIN DEPENDENT DIABETES"<<endl<<endl;
            cout<<"press any key to quit";
            cin.get();
            break;


        case -1:
            cout<<setw(30)<<"IT IS NON INSULIN DEPENDENT DIABETES"<<endl<<endl;
            cout<<"PRESS ANY  KEY TO QUIT .";
            cin.get();
            break;

            //	   default: break;

        }

        // break ;
        //	default : break;
    }
    return (ch);
}



void diabetes::getlevel2_symptoms()
{

    system("cls");
    int j=0;
    cout<<setw(30)<<"PANCREATITIS(P/A)       :";
    cin>>s[j];
    s[j]=toupper(s[j]);
    j++;
    cout<<setw(30)<<"CARCINOMA(P/A)          :";
    cin>>s[j];
    s[j]=toupper(s[j]);
    ++j;
    cout<<setw(30)<<"CIRHHOSIS(P/A)          :";
    cin>>s[j];
    s[j]=toupper(s[j]);
    ++j;
    cout<<setw(30)<<" HCTS  (H/L/N)          :";
    cin>>s[j];
    s[j]=toupper(s[j]);
    ++j;

    cout<<setw(30)<<"HEPATITIS(P/A)          :";
    cin>>s[j];
    s[j]=toupper(s[j]);
    ++j;
    cout<<setw(30)<<" HORMONAL DISORDER(P/A) :";

    cin>>s[j];
    s[j]=toupper(s[j]);
    ++j;
    cout<<setw(30)<<" PANCREATECTOMY(P/A)    :";
    cin>>s[j];
    s[j]=toupper(s[j]);
    ++j;
    return;
}

void diabetes::getlevel3_symptoms()
{
    system("cls");
    int k=0;
    cout<<setw(30)<<" AGE(young(Y)/Middle aged(M)/Elderly(E))                      :";
    cin>>s[k];
    s[k]= toupper (s[k]);
    ++k;
    cout<<setw(30)<<"BODY WEIGHT(normal(N)/Above normal(A)/Below normal(B)/obese)  :";
    cin>>s[k];
    s[k]= toupper(s[k]);
    ++k;
    cout<<setw(30)<<" DURATION (weeks(W)/Months(M)/Years(Y))                       :";
    cin>>s[k];
    s[k]= toupper(s[k]);
    ++k;

    cout<<setw(30)<<"KETONUREA(P/A)                                                :";
    cin>>s[k];
    s[k]= toupper(s[k]);
    ++k;
    cout<<setw(30)<<"AUTO ANTIBODIES(P/A)                                          :";
    cin>>s[k];
    s[k]= toupper(s[k]);
    ++k;
    return;
}


