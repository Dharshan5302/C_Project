#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
int op; 
char doctor[20][30]={"Dr. Arun","Dr. Bhaskar","Dr. Kumaran","Dr. Sita", 
						"Dr. Senthil","Dr. Balaji","Dr. Savitha","Dr. Hasini "}; 
char special[20][30]={"General","Cardiologist","Dentist","General", 
						"Pediatrician","Surgeon","Dentist","Pediatrician"}; 
static int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0; 
  
struct dp 
{ 
	int id; 
	char name[50]; 
	char date[10]; 
	char time[10]; 
}; 
struct  dp arun[20], bhaskar[20], Kumaran[20],sita[20], senthil[20], balaji[20], savitha[20], hasini[20]; 
  
int menu(); 
int admitPatient(); 
int patientList(); 
int doc(); 
int doctorList(int op); 
int search_doctor(); 
int table(); 
int spacing(); 
int mspacing(); 
int spacing1(); 
int bookapp(); 
int pud(); 
int medicine(); 
  
struct patient 
{ 
    int id; 
    char patientName[50]; 
    char patientAddress[50]; 
    char disease[50];	 
}; 
  
struct layout 
{ 
        char name[20]; 
        int quantity ; 
        int price; 
        int cost; 
}; 
struct layout fever1={"Dolo", 4,5,4*5}; 
struct layout fever2={"Paracetamol", 3,2,3*2}; 
struct layout fever3={"Aspirin", 1,10,1*10}; 
  
struct layout cold1={"Azee", 3,3,3*3}; 
struct layout cold2={"Cetrizen", 2,5,2*5}; 
struct layout cold3={"Allegra", 5,2,5*2}; 
  
struct layout cough1={"Benadryl", 1,100,1*100}; 
struct layout cough2={"Koflet", 4,2,4*2}; 
struct layout cough3={"Zecuf", 3,1,3*1}; 
  
struct layout diarrhea1={"Loperamide", 2,3,2*3}; 
struct layout diarrhea2={"Lomotil", 2,1,2*1}; 
struct layout diarrhea3={"Florastor", 2,1,2*1}; 
  
struct layout cavity1={"Advil", 2,40,2*40}; 
struct layout cavity2={"Naprozen", 1,5,1*5}; 
struct layout cavity3={"Ibuprofen", 3,8,3*8}; 
  
struct layout gum_swell1={"Corsodyl", 1,150,1*150}; 
struct layout gum_swell2={"Fortegel", 1,50,1*50}; 
struct layout gum_swell3={"Painout", 1,40,1*40}; 
  
struct layout low_bp1={"Cilnidipine", 10,30,10*30}; 
struct layout low_bp2={"Midodrine", 10,10,10*10}; 
struct layout low_bp3={"Fludrocortisone", 10,8,10*8}; 
  
struct layout high_bp1={"Airtel-AM", 20,10,20*10}; 
struct layout high_bp2={"Labtel", 10,2,10*2}; 
struct layout high_bp3={"Arkamin", 15,15,15*15}; 
  
struct layout diabetes1={"Metformin", 20,40,20*40}; 
struct layout diabetes2={"Vogroz", 20,5,20*5}; 
struct layout diabetes3={"Glipizide", 20,8,20*8}; 
  
  
int fever(); 
int cold(); 
int cough(); 
int diarrhea(); 
int cavity(); 
int gum(); 
int high_bp(); 
int low_bp(); 
int diabetes(); 
int exit1(); 
  
int main() 
{ 
	spacing(); 
	printf("**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-\n"); 
	spacing(); 
        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n"); 
        spacing(); 
        printf("=                                             =\n"); 
        spacing(); 
        printf("=                 WELCOME                     =\n"); 
        spacing(); 
        printf("=                   TO                        =\n"); 
        spacing(); 
        printf("=             APOLLO HOSPITALS                =\n"); 
        spacing(); 
        printf("=                                             =\n"); 
        spacing(); 
        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n"); 
        spacing(); 
        printf("**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-\n"); 
       	printf("\n"); 
       	menu(); 
} 
  
int menu() 
{ 
        printf("\t\t\t1. Admit Patient\n"); 
        printf("\t\t\t2. Medicine\n"); 
        printf("\t\t\t3. Doctors available and appoinment\n"); 
        printf("\t\t\t0. Exit\n\n"); 
        char ch;     
        printf("\t\t\tEnter your choice: "); 
        scanf(" %c", &ch); 
         
        if (ch=='1') 
        	admitPatient(); 
        else if (ch=='2') 
        	medicine(); 
        else if (ch=='3') 
        	doc(); 
        else if (ch=='0') 
        	exit1(); 
} 
  
int table() 
{ 
	for (int i=0; i<57; i++) 
	{ 
		printf("_"); 
	} 
	printf("\n"); 
} 
  
int admitPatient() { 
     
  
    struct patient p; 
	 
    printf("\n\tEnter Patient id number: "); 
    scanf("%d", &p.id); 
  
    printf("\n\tEnter Patient name: "); 
     
    scanf("%s", p.patientName); 
  
    printf("\n\tEnter Patient Address: "); 
      scanf("%s", p.patientAddress); 
  
    printf("\n\tEnter Patient Disease: "); 
    scanf("%s", p.disease); 
  
    printf("\t\n\nPatient Added Successfully\n"); 
        
     
    printf("\n\tPatient Conformation:\n\n"); 
    printf("\tPatient id.no: %d\n", p.id); 
    printf("\tPatient name: %s\n", p.patientName); 
    printf("\tPatient Address: %s\n", p.patientAddress); 
    printf("\tPatient Disease: %s\n", p.disease); 
    printf("\n"); 
    menu(); 
  
} 
  
int doctorList(int op) 
{ 
	spacing1(); 
	table(); 
	spacing1(); 
	printf("| Dno |		Doctor name	| Specialization	|\n"); 
	spacing1(); 
	table(); 
	 
	for (int i=0; i<8	; i++) 
	{ 
		spacing1(); 
		printf("|  %d  ",i+1); 
		printf("|  %s\t	|	",doctor[i]); 
		printf(" %s	|\n",special[i]); 
	} 
	spacing1(); 
	table(); 
	if (op==0) 
		doc(); 
} 
  
int doc() 
{ 
	char c; 
	printf("\n");  
	mspacing(); 
	printf("1. Doctors list\n"); 
	mspacing(); 
	printf("2. Select specialization\n"); 
	mspacing(); 
	printf("3. Book appointment \n"); 
	mspacing(); 
	printf("4. Medicine\n"); 
	mspacing(); 
	printf("5. Patient list under each doctor\n"); 
	mspacing(); 
	printf("6. Menu\n"); 
	mspacing(); 
	printf("0. Exit\n"); 
	mspacing(); 
	printf("\nEnter your choice :"); 
	scanf(" %c",&c); 
	if (c=='1') 
	{ 
		int op=0; 
        	doctorList(op); 
        } 
        else if (c=='2') 
        	search_doctor(); 
        else if (c=='3') 
        	bookapp(); 
        else if (c=='4') 
        	medicine(); 
        else if (c=='5') 
        	pud(); 
        else if (c=='6') 
        	menu(); 
        else if (c=='0') 
		exit1(); 
} 
int search_doctor() 
{ 
	char s[40],s1[40]; 
	int ascii; 
	char ch[5]; 
	 
	printf("\t\tEnter the specialization : "); 
	scanf("%s",s); 
	strcpy(s1,s); 
	if (s[0]<97) 
	{ 
		ascii=s[0]+32; 
		ch[0]=ascii; 
		strncpy(s1,ch,1); 
	} 
	else 
	{ 
		ascii=s[0]-32; 
		ch[0]=ascii; 
		strncpy(s1,ch,1); 
	} 
	 
	for (int i=0; i<9;i++) 
	{ 
		if ((strcmp(s,special[i])==0) || (strcmp(s1,special[i])==0)) 
		{ 
			printf(" %s\n",doctor[i]); 
		} 
	} 
	doc(); 
} 
  
int bookapp() 
{ 
	int dno; 
	int op=1; 
	doctorList(op); 
	printf("Enter the doctor name or id : "); 
	scanf("%d",&dno); 
	if (dno == 1 )  
	{ 
			printf("Enter patient id : "); 
			scanf("%d",&arun[a].id); 
			printf("\nEnter patient name : "); 
			scanf("%s",arun[a].name); 
			printf("\nEnter the appointment date (dd/mm/yy):"); 
			scanf(" %s",arun[a].date); 
			printf("\nEnter the appointment time (hr/min) : "); 
			scanf("%s",arun[a].time); 
			a++; 
	} 
	else if (dno == 2 )  
		{ 
			printf("Enter patient id : "); 
			scanf("%d",&bhaskar[b].id); 
			printf("\nEnter patient name : "); 
			scanf("%s",bhaskar[b].name); 
			printf("\nEnter the appointment date (dd/mm/yy):"); 
			scanf(" %s",bhaskar[b].date); 
			printf("\nEnter the appointment time (hr/min) : "); 
			scanf("%s",bhaskar[b].time); 
			a++; 
		} 
		 
	else if (dno == 3 )  
		{ 
			printf("Enter patient id : "); 
			scanf("%d",&Kumaran[c].id); 
			printf("\nEnter patient name : "); 
			scanf("%s",Kumaran[c].name); 
			printf("\nEnter the appointment date (dd/mm/yy) :"); 
			scanf(" %s",Kumaran[c].date); 
			printf("\nEnter the appointment time (hr/min) : "); 
			scanf("%s",Kumaran[c].time); 
			a++; 
		} 
		 
		else if (dno == 4 )   
		{ 
			printf("Enter patient id : "); 
			scanf("%d",&sita[d].id); 
			printf("\nEnter patient name : "); 
			scanf("%s",sita[d].name); 
			printf("\nEnter the appointment date (dd/mm/yy) :"); 
			scanf(" %s",sita[d].date); 
			printf("\nEnter the appointment time (hr/min) : "); 
			scanf("%s",sita[d].time); 
			a++; 
		} 
		 
		else if (dno == 5 )  
		{ 
			printf("Enter patient id : "); 
			scanf("%d",&senthil[e].id); 
			printf("\nEnter patient name : "); 
			scanf("%s",senthil[e].name); 
			printf("\nEnter the appointment date (dd/mm/yy) :"); 
			scanf(" %s",senthil[e].date); 
			printf("\nEnter the appointment time (hr/min) : "); 
			scanf("%s",senthil[e].time); 
			a++; 
		} 
		 
		else if (dno == 6 )   
		{ 
			printf("Enter patient id : "); 
			scanf("%d",&balaji[f].id); 
			printf("\nEnter patient name : "); 
			scanf("%s",balaji[f].name); 
			printf("\nEnter the appointment date (dd/mm/yy) :"); 
			scanf(" %s",balaji[f].date); 
			printf("\nEnter the appointment time (hr/min) : "); 
			scanf("%s",balaji[f].time); 
			a++; 
		} 
		 
		else if (dno == 7 )   
		{ 
			printf("Enter patient id : "); 
			scanf("%d",&savitha[g].id); 
			printf("\nEnter patient name : "); 
			scanf("%s",savitha[g].name); 
			printf("\nEnter the appointment date (dd/mm/yy) :"); 
			scanf(" %s",savitha[g].date); 
			printf("\nEnter the appointment time (hr/min) : "); 
			scanf("%s",savitha[g].time); 
			a++; 
		} 
		 
		else if (dno == 8 )   
		{ 
			printf("Enter patient id : "); 
			scanf("%d",&hasini[h].id); 
			printf("\nEnter patient name : "); 
			scanf("%s",hasini[h].name); 
			printf("\nEnter the appointment date (dd/mm/yy) :"); 
			scanf(" %s",hasini[h].date); 
			printf("\nEnter the appointment time (hr/min) : "); 
			scanf("%s",hasini[h].time); 
			a++; 
		} 
		mspacing(); 
		printf("Appointment is fixed"); 
		doc(); 
  
} 
  
int pud() 
{ 
	op=1; 
	int d1; 
        doctorList(op); 
        printf("\nEnter the doctor name or id to see the patients schedule : "); 
        scanf("%d",&d1); 
        spacing1(); 
	table(); 
	spacing1(); 
	printf("| Sno | PId |	Patient name	|   Date   |    Time   |\n"); 
	spacing1(); 
	table(); 
	if (d1 == 1 )  
	{ 
		for (int i=0; i<a ;i++) 
		{ 
			spacing1(); 
			printf("|  %d  ",(i+1)); 
			printf("|  %d  |",arun[i].id); 
			printf("     %-14s|",arun[i].name); 
			printf("  %s  |",arun[i].date);	 
			printf("  %s  |\n",arun[i].time); 
		} 
		 
	} 
	 
	else if (d1 == 2 )  
	{ 
		for (int i=0; i<b ;i++) 
		{ 
			spacing1(); 
			printf("|  %d  ",(i+1)); 
			printf("|  %d  |",bhaskar[i].id); 
			printf("     %-14s|",bhaskar[i].name); 
			printf("  %s  |",bhaskar[i].date);	 
			printf("  %s  |\n",bhaskar[i].time); 
		} 
		 
	} 
	 
	else if (d1 == 3 )   
	{ 
		for (int i=0; i<c ;i++) 
		{ 
			spacing1(); 
			printf("|  %d  ",(i+1)); 
			printf("|  %d  |",Kumaran[i].id); 
			printf("     %-14s|",Kumaran[i].name); 
			printf("  %s  |",Kumaran[i].date);	 
			printf("  %s  |\n",Kumaran[i].time); 
		} 
		 
	} 
	 
	else if (d1 == 4 )   
	{ 
		for (int i=0; i<d; i++) 
		{ 
			spacing1(); 
			printf("|  %d  ",(i+1)); 
			printf("|  %d  |",sita[i].id); 
			printf("     %-14s|",sita[i].name); 
			printf("  %s  |",sita[i].date);	 
			printf("  %s  |\n",sita[i].time); 
		} 
		 
	} 
	 
	else if (d1 == 5)  
	{ 
		for (int i=0; i<e ;i++) 
		{ 
			spacing1(); 
			printf("|  %d  ",(i+1)); 
			printf("|  %d  |",senthil[i].id); 
			printf("     %-14s|",senthil[i].name); 
			printf("  %s  |",senthil[i].date);	 
			printf("  %s  |\n",senthil[i].time); 
		} 
		 
	} 
	 
	else if (d1 == 6 )  
	{ 
		for (int i=0; i<f ;i++) 
		{ 
			spacing1(); 
			printf("|  %d  ",(i+1)); 
			printf("|  %d  |",balaji[i].id); 
			printf("     %-14s|",balaji[i].name); 
			printf("  %s  |",balaji[i].date);	 
			printf("  %s  |\n",balaji[i].time); 
		} 
		 
	} 
	 
	else if (d1 == 7 )   
	{ 
		for (int i=0; i<g ;i++) 
		{ 
			spacing1(); 
			printf("|  %d  ",(i+1)); 
			printf("|  %d  |",savitha[i].id); 
			printf("     %-14s|",savitha[i].name); 
			printf("  %s  |",savitha[i].date);	 
			printf("  %s  |\n",savitha[i].time); 
		} 
		 
	} 
	 
	else if (d1 == 8 )   
	{ 
		for (int i=0; i<h ;i++) 
		{ 
			spacing1(); 
			printf("|  %d  ",(i+1)); 
			printf("|  %d  |",hasini[i].id); 
			printf("     %-14s|",hasini[i].name); 
			printf("  %s  |",hasini[i].date);	 
			printf("  %s  |\n",hasini[i].time); 
		} 
		 
	} 
	 
	spacing1(); 
	table(); 
	int op=0; 
	if (op==0) 
		doc(); 
} 
  
int spacing() 
{ 
	int i; 
	for (i=0;i<6;i++) 
	{ 
		printf("\t"); 
	} 
} 
  
int spacing1() 
{ 
	int i; 
	for (i=0;i<5;i++) 
	{ 
		printf("\t"); 
	} 
} 
  
int mspacing() 
{ 
	int i; 
	for (i=0;i<7;i++) 
	{ 
		printf("\t"); 
	} 
} 
  
int medicine() 
{ 
	int dio; 
	int choice; 
	printf("1. General\n"); 
	printf("2. Oral problems\n");	//cavity,gumswelling 
	printf("3. Heart related problems\n"); // high bp,low bp,diabetics 
	printf("Enter the specification to check for dioease list : "); 
	scanf("%d",&dio); 
	if (dio == 1) 
	{ 
		printf("1. Fever\n"); 
		printf("2. Cold\n"); 
		printf("3. Cough\n"); 
		printf("4. Diarrhea\n"); 
		printf("Enter your choice : "); 
		scanf("%d",&choice); 
		printf("\n"); 
		if (choice==1) 
			fever(); 
		else if (choice==2) 
			cold(); 
		else if (choice==3) 
			cough(); 
		else if (choice==4) 
			diarrhea(); 
	} 
	 
	else if (dio==2) 
	{ 
		printf("1. Cavity\n"); 
		printf("2. Gum swelling\n"); 
		printf("Enter your choice : "); 
		scanf("%d",&choice); 
		printf("\n"); 
		if (choice==1) 
			cavity(); 
		else if (choice==2) 
			gum(); 
	} 
	else if (dio==3) 
	{ 
		printf("1. High Bp\n"); 
		printf("2. Low Bp\n"); 
		printf("3. Diabetes\n"); 
		printf("Enter your choice : "); 
		scanf("%d",&choice); 
		printf("\n"); 
		if (choice==1) 
			high_bp(); 
		else if (choice==2) 
			low_bp(); 
		else if (choice==3)	 
			diabetes(); 
	} 
	printf("\n"); 
	menu(); 
} 
  
int fever() 
{ 
	printf("Medicine Name\t\tQuantity\t\tPrice\t\tCost\n\n"); 
	printf("%s\t\t\t %d \t\t\t%d\t\t%d\n", fever1.name, fever1.quantity, fever1.price,fever1.cost); 
	printf("%s\t\t %d \t\t\t%d\t\t%d\n", fever2.name, fever2.quantity, fever2.price,fever2.cost); 
	printf("%s\t\t\t %d \t\t\t%d\t\t%d\n", fever3.name, fever3.quantity, fever3.price,fever3.cost); 
	printf("\nThe total cost of the medicines is %d\n",fever1.cost+fever2.cost+fever3.cost);	 
} 
  
int cold() 
{ 
	printf("Medicine Name\t\tQuantity\t\tPrice\t\tCost\n\n"); 
	printf("%s\t\t\t %d \t\t\t%d\t\t%d\n", cold1.name, cold1.quantity, cold1.price,cold1.cost); 
	printf("%s\t\t %d \t\t\t%d\t\t%d\n", cold2.name, cold2.quantity, cold2.price,cold2.cost); 
	printf("%s\t\t\t %d \t\t\t%d\t\t%d\n", cold3.name, cold3.quantity, cold3.price,cold3.cost); 
	printf("The total cost of the medicines is %d\n",cold1.cost+cold2.cost+cold3.cost); 
} 
  
int cough() 
{ 
	printf("Medicine Name\t\tQuantity\t\tPrice\t\tCost\n\n"); 
	printf("%s\t\t %d \t\t\t%d\t\t%d\n", cough1.name, cough1.quantity, cough1.price,cough1.cost); 
	printf("%s\t\t\t %d \t\t\t%d\t\t%d\n", cough2.name, cough2.quantity, cough2.price,cough2.cost); 
	printf("%s\t\t\t %d \t\t\t%d\t\t%d\n", cough3.name, cough3.quantity, cough3.price,cough3.cost); 
	printf("The total cost of the medicines is %d\n",cough1.cost+cough2.cost+cough3.cost); 
} 
  
int diarrhea() 
{ 
	printf("Medicine Name\t\tQuantity\t\tPrice\t\tCost\n\n"); 
	printf("%s\t\t %d \t\t\t%d\t\t%d\n", diarrhea1.name, diarrhea1.quantity, diarrhea1.price,diarrhea1.cost); 
	printf("%s\t\t\t %d \t\t\t%d\t\t%d\n", diarrhea2.name, diarrhea2.quantity, diarrhea2.price,diarrhea2.cost); 
	printf("%s\t\t %d \t\t\t%d\t\t%d\n", diarrhea3.name, diarrhea3.quantity, diarrhea3.price,diarrhea3.cost); 
	printf("The total cost of the medicines is %d\n",diarrhea1.cost+diarrhea2.cost+diarrhea3.cost); 
} 
  
int cavity() 
{ 
printf("Medicine Name\t\tQuantity\t\tPrice\t\tCost\n\n"); 
printf("%s\t\t\t %d \t\t%d\t\t%d\n", cavity1.name,cavity1.quantity, cavity1.price,cavity1.cost); 
printf("%s\t\t %d \t\t%d\t\t%d\n", cavity2.name, cavity2.quantity, cavity2.price,cavity2.cost); 
printf("%s\t\t %d \t\t%d\t\t%d\n", cavity3.name, cavity3.quantity, cavity3.price,cavity3.cost); 
printf("The total cost of the medicines is %d\n",cavity1.cost+cavity2.cost+cavity3.cost); 
} 
  
int gum() 
{ 
	printf("Medicine Name\t\tQuantity\t\tPrice\t\tCost\n\n"); 
	printf("%s\t\t\t%d \t\t%d\t\t%d\n", gum_swell1.name,gum_swell1.quantity, gum_swell1.price,gum_swell1.cost); 
	printf("%s\t\t\t %d \t\t%d\t\t%d\n", gum_swell2.name, gum_swell2.quantity, gum_swell2.price,gum_swell2.cost); 
	printf("%s\t\t\t\t %d \t\t%d\t\t%d\n", gum_swell3.name, gum_swell3.quantity, gum_swell3.price,gum_swell3.cost); 
	printf("The total cost of the medicines is %d\n",gum_swell1.cost+gum_swell2.cost+gum_swell3.cost); 
} 
  
int high_bp() 
{ 
	 
	printf("Medicine Name\t\tQuantity\t\tPrice\t\tCost\n\n"); 
	printf("%s\t\t %d \t\t\t%d\t\t%d\n", high_bp1.name, high_bp1.quantity, high_bp1.price,high_bp1.cost); 
	printf("%s\t\t\t %d \t\t\t%d\t\t%d\n", high_bp2.name, high_bp2.quantity, high_bp2.price,high_bp2.cost); 
	printf("%s\t\t\t %d \t\t\t%d\t\t%d\n", high_bp3.name, high_bp3.quantity, high_bp3.price,high_bp3.cost); 
	printf("The total cost of the medicines is %d\n",high_bp1.cost+high_bp2.cost+high_bp3.cost); 
} 
  
int low_bp() 
{ 
	printf("Medicine Name\t\tQuantity\t\tPrice\t\tCost\n\n"); 
	printf("%s\t\t %d \t\t%d\t\t%d\n", low_bp1.name, low_bp1.quantity, low_bp1.price,low_bp1.cost); 
	printf("%s\t\t %d \t\t%d\t\t%d\n", low_bp2.name, low_bp2.quantity, low_bp2.price,low_bp2.cost); 
	printf("%s\t %d \t\t%d\t\t%d\n", low_bp3.name, low_bp3.quantity, low_bp3.price,low_bp3.cost); 
	printf("The total cost of the medicines is %d\n",low_bp1.cost+low_bp2.cost+low_bp3.cost); 
  
} 
  
int diabetes() 
{ 
	printf("Medicine Name\t\tQuantity\t\tPrice\t\tCost\n\n"); 
	printf("%s\t\t %d \t\t%d\t\t%d\n", diabetes1.name,diabetes1.quantity, diabetes1.price,diabetes1.cost); 
	printf("%s\t\t\t %d \t\t%d\t\t%d\n", diabetes2.name, diabetes2.quantity, diabetes2.price,diabetes2.cost); 
	printf("%s\t\t %d \t\t%d\t\t%d\n", diabetes3.name, diabetes3.quantity, diabetes3.price,diabetes3.cost); 
	printf("The total cost of the medicines is %d\n",diabetes1.cost+diabetes2.cost+diabetes3.cost); 
} 
  
  
int exit1() 
{ 
	mspacing(); 
	printf("Thank you.\n\n"); 
} 

