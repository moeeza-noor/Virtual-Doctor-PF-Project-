#include<iostream>
using namespace std;

struct Patient
{
    char name[50];
    int age;
    int symptoms[100];
    int z;
};

int high_bloodpressure(Patient p);
int low_bloodpressure(Patient p);

int main()
{
    Patient p;
    int i;
    
    int high_bp[20] = { 4|| 5|| 6|| 8|| 10|| 12|| 13|| 14 };
    int low_bp[20] = { 7|| 8|| 9|| 11|| 13|| 15|| 16 };

    cout << "Enter your name : ";
    cin.get(p.name, 50);
    cout << "Enter age: ";
    cin >> p.age;
    cout << "Choose from the following symptoms (max 10) : \n";
    cout << "\nSYMPTOMS \n";
    cout << "1. Sneezing \t 2. Dry cough \t 3. Runny nose \n";
    cout << "4. Headaches \t 5. Shortness of breath \t 6. Nosebleeds \n";
    cout << "7. Nausea \t 8. Dizziness \t 9. Dehydration and unusual thirst \n";
    cout << "10. Flushing \t 11. Fainting (syncope) \t 12. Chest pain \n";
    cout << "13. Visual changes (blurred vision) \t 14. Blood in the urine \t 15. Lack of concentration\n";
    cout << "16. Cold, clammy, pale skin \n";


    cout << "\nEnter Symptoms (Enter 0 to continue) :\n";
    for (i = 1; i < 10; i++)
    {
        cin >> p.symptoms[i];
        if (p.symptoms[i] == 0)
            break;
    }

        if (p.symptoms==high_bp)
        {
            high_bloodpressure(p);
        }
        else if (p.symptoms == low_bp)
        {
            low_bloodpressure(p);
        }
    
    return 0;
}

int high_bloodpressure(Patient p)
{
    int s_bp,d_bp;
    cout << "\nHigh blood pressure, or hypertension, occurs when your blood pressure increases to unhealthy levels. Your blood pressure measurement takes into account how much blood is passing through your blood vessels and the amount of resistance the blood meets while the heart is pumping. \n";
    cout << "\nINSTRUCTIONS FOR THE PATIENT:\n Please use BP apparatus and check your blood pressure. A blood pressure reading is taken with a pressure cuff. For an accurate reading, it's important you have a cuff that fits. An ill-fitting cuff may deliver inaccurate readings. \n";
    cout << "\nEnter your current blood pressure systolic number : ";
    cin >> s_bp;
    cout <<"Enter your current blood pressure diastolic number : ";
    cin >> d_bp;


    if (s_bp >= 120 && s_bp <= 129 || d_bp<80)
    {
        cout << "\nMedication for elevated blood pressure:\n";
        cout << "Lifestyle changes may help reduce your high blood pressure.\n";
        cout << "\nFOR SUDDEN CONTROL : \n1. Give tablet Hypotin (10mg) \n2. Monitor the BP after every two minutes. \n";
        cout << "If not controlled, give one more 10mg tablet of Hypotin. \n \nMajority of the time the Blood pressure will be controlled but even after this if the BP is not controlled, then give \n1.Injection hydralazine 1CC dilute with normal saline 10mg every 10 to 15 mints until controlled.\n\nIf the patient is pregnant : 10mg Hypotin only.\nDo not give anything else as it Is not safe.\n";
        cout << "ALTERNATIVE TABLET : \n1. Cepace 25 mg\n";
    }
    else if (s_bp >= 130 && s_bp <= 180 || d_bp >= 80 && d_bp <= 120)
    {
        cout << "\nMedication for high blood pressure (STAGE 1, STAGE 2 AND HYPERTENSION CRISIS) : \n";
        cout << "\nFOR PATIENTS WITH HISTORY OF HIGH BLOOD PRESSURE: \n ";
        
        if (p.age <= 50)
        {
            cout << "\nAge less than 50 years :\n1. Tablet Eziday 50mg 1 daily \n";
            cout << "\nIf still the BP is not controlled : \n1.	Tablet  tamsol o.4 mg OD OR \n2. Tablet  tenormin 50 mg OD \n";
            cout << "Monitor your bp consecutively for a week.\n";
        }
        else
        {
            cout<<"\nAge greater than 50 \n1. Tab sofvasc / norvasc 10mg(OD) \n";
            cout << "\nIf still the BP is not controlled : \n1. Tab sofvasc - v / valtec - AM(5 / 80 - 10 / 160) mg OD \n2. If bp is not controlled than add Tab co - extor / triforge(5 / 12.5 / 80 mg) \n";
            cout << "Monitor your bp consecutively for a week.\n";
        }
    }
    else
    {
        cout << "A healthy blood pressure reading is less than 120/80 millimeters of mercury (mm Hg). \n";
    }

    cout<<"\nPRECAUTIONS: \nTAKE SALT IN MODERATE AMOUNT \n";   
    cout << "\nHOME REMEDIES: \n";
    cout << "\nIncrease the intake of:\n1. Fruits \n2. Vegetables \n3. Whole grains \n4. Lean proteins like fish \n5. Increasing physical activity.\nInclude 150 minutes of physical activity in your daily life style five times a week.\n";
    cout << "\nIf you are overweight or obese, losing weight through a heart-healthy diet and increased physical activity can help lower your blood pressure. If you're under stress, exercising is a great way to manage stress. Other activities can also be helpful. These include: \n";
    cout<<"1. Meditation \n2. Deep breathing \n3. Massage \n4. Muscle relaxation \n5. Yoga or tai chi";
        
    return 0;
}

int low_bloodpressure(Patient p)
{
    int s_bp, d_bp;
    cout << "\nLow blood pressure occurs when blood pressure is much lower than normal. This means the heart, brain, and other parts of the body do not get enough blood. Low blood pressure might seem desirable, and for some people, it causes no problems. However, for many people, abnormally low blood pressure (hypotension) can cause dizziness and fainting. In severe cases, low blood pressure can be life-threatening. The medical name for low blood pressure is hypotension.\n";
    cout << "\nINSTRUCTIONS FOR THE PATIENT:\n Please use BP apparatus and check your blood pressure. A blood pressure reading is taken with a pressure cuff. For an accurate reading, it's important you have a cuff that fits. An ill-fitting cuff may deliver inaccurate readings. \n";
    cout << "\nEnter your current blood pressure systolic number : ";
    cin >> s_bp;
    cout << "Enter your current blood pressure diastolic number : ";
    cin >> d_bp;

    if (s_bp < 120 || d_bp < 80)
    {
        cout << "\nThe following drugs are often used in treating low blood pressure. \n1. Fludrocortisone : Fludrocortisone is a medication that seems to help most types of low blood pressure. \n2. Midodrine : Midodrine activates receptors on the smallest arteries and veins to produce an increase in blood pressure. \n";
        cout << "\nPRECAUTIONS:\n1.	Use more salt.\n2. Drink more water.Fluids increase blood volume and help prevent dehydration, both of which are important in treating hypotension.\n3. Wear compression stockings.\n";   
    }

    cout << "\nPRECAUTIONS: \nTAKE SALT IN MODERATE AMOUNT \n";
    cout << "\nHOME REMEDIES: \n";
    cout << "\nIncrease the intake of:\n1. Fruits \n2. Vegetables \n3. Whole grains \n4. Lean proteins like fish \n5. Increasing physical activity.\nInclude 150 minutes of physical activity in your daily life style five times a week.\n";
    cout << "\nIf you are overweight or obese, losing weight through a heart-healthy diet and increased physical activity can help lower your blood pressure. If you're under stress, exercising is a great way to manage stress. Other activities can also be helpful. These include: \n";
    cout << "1. Meditation \n2. Deep breathing \n3. Massage \n4. Muscle relaxation \n5. Yoga or tai chi";

    return 0;
}