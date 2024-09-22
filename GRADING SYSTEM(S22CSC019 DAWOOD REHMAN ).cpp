#include<bits/stdc++.h>
#include<string.h>
#include<fstream>
#include<limits>
using namespace std;

float sum_marks=0,sum_per=0;
float chk();
string cap(string);
void display(void);
void line1(void);
void line2(void);
int no_div,delID,i=0,x,n,z,j=0,k=1,nADD; 
          //n is quantity x is switch controller z id checker n;
char opt;
string newN,whatGRADE,saving;
ofstream file;
int main(void){
	
	cout<<"\n\n\n\n\n\n\t\t\t___________________________________________________________________________";
	cout<<"\n\n\n\n\n\n\t\t\t*       *       * ****** *       * * *  * * *       *         *     ******\n";
	cout<<"\t\t\t *     * *     *  *      *      *      *      *    * *       * *    *\n";
	cout<<"\t\t\t  *   *   *   *   *****  *     *      *        *  *   *     *   *   ******\n"; 
	cout<<"\t\t\t   * *     * *    *      *      *      *      *  *     *   *     *  *\n"; 
	cout<<"\t\t\t    *       *     ****** ******* * * *   * * *  *        *        * ******\n";
    cout<<"\t\t\t           \n\t\t\t\t  Dawood Technologies\n";
    cout<<"\n\n\t\t\t___________________________________________________________________________\n\n\n\n\n\n\n\n";
	system("pause");
	system("cls");
	
	
	
	line1();


cout<<"\n\t\t\twhat you want to grade e.g students university etc ::";
getline(cin,whatGRADE);
whatGRADE=cap(whatGRADE);
line2();
whatGRADE=cap(whatGRADE);
system("pause");
system("cls");
	cout<<"\n\n\n\n\t\t\t___________________________________________________________________________";

	cout<<"\n\n\n\t\t\t\t\tNUMBER OF CATEGORIES YOU WANT :::: ";    
	no_div=chk();

    line2();
    float alt_per[no_div];
	int t_marks[no_div],id_div[no_div];
	string name_div[no_div];
	
	cout<<"\t\t\t\t\t\tNAME THE CATEGORIES\n\n";
for(i=0;i<no_div;i++){	
     	fflush(stdin);
	    cout<<"\t\t\t\tEnter Category Name  "<<i+1<<"\t:: ";
		getline(cin,name_div[i]);
		name_div[i]=cap(name_div[i]);
		
	 	                  }
system("pause");
system("CLS");	 	                  
cout<<"INPUT NEEDED ="<<no_div;
display();

do{	                          
for(i=0;i<no_div;i++){
         id_div[0]=100;	                     	
		cout<<"\t\t\t"<<name_div[i]<<endl;
		cout<<"\t\t\tID :: "<<id_div[i]<<endl;
	       	cout<<"\t\t\t\t\tPercentage It Carries ::";
	  
	    alt_per[i]=chk();

	  
		cout<<"\t\t\t\t\tMaximum Marks One Get ::";
	
		   t_marks[i]=chk();

	  
	
		sum_per+=alt_per[i];
		cout<<"\n\t\t\t\t\tUsed percentage :"<<sum_per<<"%  "<<"remaining:"<<100-sum_per<<"%\n\n"<<endl;
		id_div[i+1]=id_div[i]+1;
	 	if(sum_per>100){
		  	cout<<"\n\t\t\tYOUR ALLOCATION OF PERCENTAGE IS GREATER THAN LIMIT OF 100\n\n\n";
			i=0;
			
			id_div[0]=100;sum_per=0;
		system("pause");
        system("CLS");   
		i--;
		cout<<"INPUT NEEDED ="<<no_div;
		display();
		 }             
                          
		      	
			
			      }
                          
        
                          
        if(sum_per<100){
	       	cout<<"\t\t\tYOUR ALLOCATION OF PERCENTAGE IS LESS THAN LIMIT OF 100\n\n\n";
			i=0;
			id_div[0]=100;
			sum_per=0;
		system("pause");
        system("CLS");
		 cout<<"INPUT NEEDED ="<<no_div;
		  display();    
				 
				   }else
					 break;                 
   }while(1);
 
   
   		system("pause");
        system("CLS");
            
int coun=0;


   


	    line1();
	
cout<<"\n\t\t\t\tHOW MANY "<<whatGRADE<<" YOU WANT :: ";
		n=chk();
		
	
		line2();

	
	
	float sum_gmarks;
	struct std {
	
		int id;
		string name;
		float m[20];
	} info[n];

	for(int i=0; i<n; i++) {
	
b:cout<<"\n\t\t\t\t\t"<<whatGRADE     <<" :: "<<i+1<<endl;
		cout<<"\t\t\t\t\tID           :: ";
		


			info[i].id=chk();
		if(i>=1){
		
		for(j=0;j<i;j++){
		if(info[i].id==info[j].id){
			cout<<"\t\t\t\tID DUPLICATION";
			goto b;
		}		
			
		}
}
		
	cout<<"\t\t\t\t\tNAME         :: ";
		fflush(stdin);
		getline(cin,info[i].name);
	
	for(int j=0;j<no_div;j++){
	abcd:cout<<"\t\t\t\t\t"<<name_div[j]<<"\n\t\t\t\t\tMARKS "<<"OUT OF ::"<<t_marks[j]<<"/";

			
			info[i].m[j]=chk();
if(info[i].m[j]>t_marks[j]){
	cout<<"\t\t\t\t<Marks Exceeds the Total MARKS>\n";
	goto abcd;
}}
info[i].name=cap(info[i].name);
		
				if(i>=1) {
			for(k=0; k<i; k++) {
				for(j=0; (info[i].name[j])!='\0'&&(info[k].name[j])!='\0'; j++) {
					if(info[i].name[j]!=info[k].name[j]) {
						break;
					}
				}

				if(info[i].name[j]==info[k].name[j]) {
					cout<<"\t\t\t\tSystem Saw first Name Duplication Renter(y/n)?";
					cin>>opt;
					
					
					if(opt=='y'||opt=='Y'){
					goto b;

				}
					
					
					else{
						continue;
					}
				}
			}
		}
	}	
	system("pause");
	system("CLS");
	
	do{
	
	line1();
	cout<<"\n\t\t\t\t\t\tCHOOSE WHATEVER YOU WANT\n";
	line2();
	
	
		cout<<"\n\n\n\t\t\t\t\t\t1--UPDATE LIST\n\n\t\t\t\t\t\t2--DElETE\n\n\t\t\t\t\t\t3--SEARCH LIST\n\n\t\t\t\t\t\t4--SHOW LIST N FILE\n\n";
		cout<<"\t\t\t\t\t\tENTER :: ";
	
	     x=chk();
		system("pause");
		system("cls");
		
		switch(x) {	
//case 0:
//	do{
//	
//int intial=0;
//line1();
//cout<<"\n\t\t\t\t\t\tHOW MANY RECORDS ";
//nADD=chk();
//	intial=n;
//	n+=nADD;
//line2();
//
//	
//	for(int i=intial; i<n; i++) {
//	fflush(stdin);
//zb:cout<<"\n\t\t\t\t\t"<<whatGRADE     <<" :: "<<i+1<<endl;                     //buffer some times work some times not
//		cout<<"\t\t\t\t\tID           :: ";
//			info[i].id=chk();		
//		for(j=0;j<i;j++){
//		if(info[i].id==info[j].id){
//			cout<<"\t\t\t\tID DUPLICATION";
//			goto zb;
//		}	}		
//	cout<<"\t\t\t\t\tNAME         :: ";
//fflush(stdin);
//		getline(cin,info[i].name);
//	for(int j=0;j<no_div;j++){
//	zabcd:cout<<"\t\t\t\t\t"<<name_div[j]<<"\n\t\t\t\t\tMARKS "<<"OUT OF ::"<<t_marks[j]<<"/";
//info[i].m[j]=chk();
//if(info[i].m[j]>t_marks[j]){
//	cout<<"\t\t\t\t<Marks Exceeds the Total MARKS>\n";
//	goto zabcd;
//}}
//info[i].name=cap(info[i].name);
//		
//			for(k=0; k<i; k++) {
//				for(j=0; (info[i].name[j])!='\0'&&(info[k].name[j])!='\0'; j++) {
//					if(info[i].name[j]!=info[k].name[j]) {
//						break;
//					}
//				}
//
//				if(info[i].name[j]==info[k].name[j]) {
//					cout<<"\t\t\t\tSystem Saw first Name Duplication Renter(y/n)?";
//					cin>>opt;
//					
//					
//					if(opt=='y'||opt=='Y'){
//					goto zb;
//
//				}
//					
//					
//					else{
//						continue;
//					}
//				}
//			}
//		
//	}		
//	
//	
//	
//	
//			cout<<"\n\t\t\t\t\t wana update aonther Record (y/n)=";
//					cin>>opt;
//				
//					if(opt=='n'|opt=='N')
//						break;
//				} while(1);	
//	
//	
//	
//	
//	
//	break;
//	
		case 1:
					do{
					
				line1();
				cout<<"\n\t\t\t\t\t"<<whatGRADE <<" ID Data You Wana Change ::";
					x=chk();
                
				    coun=1;	
					line2();
					cout<<n;
					for(i=0;i<n;i++){
				if(x==info[i].id) {	
								cout<<"\t\t\t\t\t PREVIOUS NAME ::"<<info[i].name<<endl;
					for(j=0;j<no_div;j++){
                 	
	             cout<<"\t\t\t\t\t"<<name_div[j]<<"\n     \t\t\t\t\tMARKS "<<"OUT OF ::"<<t_marks[j]<<"/"<<info[i].m[j]<<endl;
	                               	}
						
					fflush(stdin);
					cout<<"\t\t\t\t\t NEW NAME  :: ";
					getline(cin,info[i].name);

					cout<<"\t\t\t\t\t NEW MARKS\n";
					for(int j=0;j<no_div;j++){
	            abcde:cout<<"\t\t\t\t\t\b"<<name_div[j]<<"\n      \t\t\t\t\tMARKS "<<"OUT OF ::"<<t_marks[j]<<"/";
					info[i].m[j]=chk();
             if(info[i].m[j]>t_marks[j]){
         	cout<<"\t\t\t\t<Marks Exceeds the Total MARKS>\n";
          	goto abcde;
}
	 	}
	 	
	 	
	info[i].name=cap(info[i].name);
	coun=0;				

}
}if(coun==1){
	
cout<<"\t\t\t\tRECORD NOT FOUND";
}




					cout<<"\n\t\t\t\t\t wana update aonther Record (y/n)=";
					cin>>opt;
				
					if(opt=='n'|opt=='N')
						break;
				} while(1);
				break;
			case 2:
				do {line1();
					cout<<"\n\t\t\t\t\tID OF "<<whatGRADE<<" RECORD YOU WANA DELETE ::";
			         	 delID=chk();

				
					line2();
					coun=1;
					cout<<n;
					for(int i=0; i<n; i++) {
						if(delID==info[i].id) {
							for(j=i;j<n;j++ ) {
								
							info[j]=info[j+1];
		
				
						
					} 
							
						coun=0;
					}
						
					}if(coun==0){
						n=n-1;
					}
					if(coun==1){
					cout<<"\nt\t\t\t\tINCORECT ID\n";	
					}
					
					cout<<"\t\t\t\t\twana delete another Record (y/n)=";
				cin>>opt;
				
					if(opt=='n'|opt=='N')
						break;
				} while(1);
				break;
			case 3:
				do {
				    line1();
				    cout<<"\n\t\t\t\t\t\tSEARCH";
				    line2();
					cout<<"\n\t\t\t\t\t1-BY NAME\n\t\t\t\t\t2-BY ID\n\t\t\t\t\tENTER :: ";
				
				
				
		x=chk();

			
					
					switch(x) {
						case 1:
				
				do {            line1();
								cout<<"\n\t\t\t\tEnter Name You Wana Search Data Of :: ";
								fflush(stdin);
								getline(cin,newN);                             
										  line2();
						sum_gmarks=0;				  
							newN=cap(newN);			  

								for(int i=0; i<n; i++) {
									for(j=0; (info[i].name[j])!='\0'&&newN[j]!='\0'; j++) {
										if(info[i].name[j]!=newN[j]) {
break;
										
										}
									
									if(info[i].name[j]==newN[j]) {
										cout<<"\t\t\t\tID   ::"<<info[i].id<<endl;
										cout<<"\t\t\t\tNAME ::"<<info[i].name<<endl<<endl;
											for(int j=0;j<no_div;j++){
                             cout<<"\t\t\t\t<"<<name_div[j]<<">\n   \t\t\t\tMARKS "<<"OUT OF ::"<<info[i].m[j]<<"/"<<      t_marks[j]<<endl;
	               sum_gmarks+=alt_per[j]*((info[i].m[j]/t_marks[j])*100)/100;                    
	     cout<<"\t\t\t\tPERCENTILE :: "<<(info[i].m[j]/t_marks[j])*100<<"%"<<endl;
									 cout<<"\t\t\t\tPERCENTILE WEIGHTAGE IN PERCENTAGE :: <"<<alt_per[j]*((info[i].m[j]/t_marks[j])*100)/100<<"%>"<<"FROM "<<alt_per[j]<<"%"<<endl<<endl;		  
								  	}
								  	
								  cout<<"\t\t\t\tTOTAL PERCENTAGE :::::"<<sum_gmarks<<"%"<<endl;	
								  	
								  	
										
										coun=0;
									 	break;
									}
								
									coun=1;
										break;
								}}
								if(coun==1) {
									cout<<"\n\t\t\t\t\tnot found\n";
								}
								cout<<"\n\t\t\t\t\twana  try again (y/n)=";
								cin>>opt;
								if(opt=='n'|opt=='N')
									break;
							} while(1);
							break;
						case 2:
						do{
						line1();
							cout<<"\n\t\t\t\t\t\tEnter ID ::";
							z=chk();
					

			sum_gmarks=0;
							line2();
							coun=1;
							for(int i=0; i<n; i++) {	
								if(z==info[i].id) {
									cout<<"\t\t\t\tNAME ::"<<info[i].name<<endl;
										for(int j=0;j<no_div;j++){
                    cout<<"\t\t\t\t<"<<name_div[j]<<">\n   \t\t\t\tMARKS "<<"OUT OF ::"<<t_marks[j]<<"/"<<info[i].m[j]<<endl;
	                           sum_gmarks+=alt_per[j]*((info[i].m[j]/t_marks[j])*100)/100;                    
	     cout<<"\t\t\t\tPERCENTILE :: "<<(info[i].m[j]/t_marks[j])*100<<"%"<<endl;
									 cout<<"\t\t\t\tPERCENTILE WEIGHTAGE IN PERCENTAGE :: <"<<alt_per[j]*((info[i].m[j]/t_marks[j])*100)/100<<"%>"<<"FROM "<<alt_per[j]<<"%"<<endl<<endl;		      
								 
								 
								 
								 
								 
								  coun=0;
								  
								  
								  	}
								
								 cout<<"\t\t\t\tTOTAL PERCENTAGE :::::"<<sum_gmarks<<"%"<<endl;
								
								
									} 
						
							}	if(coun==1) {
				
									cout<<"\n\t\t\t\t\tNOT FOUND\n";
								}
cout<<"\n\t\t\t\t\twana  try again (y/n)=";
					cin>>opt;
				
					if(opt=='n'|opt=='N')
						break;
}while(1);
							break;

						default:
							cout<<"\t\t\t\t\tEnter valid choice\n";

							break;
					}


					cout<<"\t\t\t\t\tCHANGE SEARCH OPTION (y/n)=";
					cin>>opt;
			
					if(opt=='n'|opt=='N')
						break;
				} while(1);

				break;
			case 4:
                line1();			
				cout<<"\n\t\t\t\t\t\t\t"<<whatGRADE<<" DATA";
				line2();

			 
			cout<<"\t\t\tNAME THE FILE YOU WANT YOUR DATA IN ::";
		rewind(stdin);
		getline(cin,saving);
		cout<<"\t\tYOU WANT TO OVERWRITE/NEW FILE(Y)   OR   APPEND(N)::::: (Y/N) :: ";
		cin>>opt;
	
	if(opt== 'y'||opt=='Y'){
	
		file.open(saving);
}else{


			file.open(saving,ios::app);}
			for(int i=0; i<n; i++) {
	sum_gmarks=0;		

					cout<<"\n\n\n\t\t\t\tID    :: "<<info[i].id<<endl;
file<<"  ID IS   :: "<<info[i].id<<endl;
			         cout<<"\t\t\t\tNAME  :: "<<info[i].name<<endl<<endl;
file<<"  NAME IS ::"<<info[i].name<<endl<<endl;	
			
							for(int j=0;j<no_div;j++){
                             	cout<<"\t\t\t\t<"<<name_div[j]<<">\n"<<"\t\t\t\tMARKS ::"<<info[i].m[j]<<"/"<<t_marks[j]<<endl;
file<<name_div[j]<<"\n"<<"  MARKS   ::"<<info[i].m[j]<<"/"<<t_marks[j]<<endl;	                    
						  
						    cout<<"\t\t\t\tPERCENTILE :: "<<(info[i].m[j]/t_marks[j])*100<<"%"<<endl;
file<<" PERCENTILE :: "<<(info[i].m[j]/t_marks[j])*100<<"%"<<endl;						    
	                          sum_gmarks+=alt_per[j]*((info[i].m[j]/t_marks[j])*100)/100;
	                         
							 cout<<"\t\t\t\tPERCENTILE WEIGHTAGE IN PERCENTAGE :: <"<<alt_per[j]*((info[i].m[j]/t_marks[j])*100)/100<<"%>"<<"FROM "<<alt_per[j]<<"%"<<endl<<endl;
file<<"PERCENTILE WEIGHTAGE IN PERCENTAGE :: <"<<alt_per[j]*((info[i].m[j]/t_marks[j])*100)/100<<"%>"<<"FROM "<<alt_per[j]<<"%"<<endl;
	
						
							
					  
						  
								  	}
							
cout<<"\t\t\t\tTOTAL PERCENTAGE :::::"<<sum_gmarks<<"%"<<endl;
file<<"TOTAL PERCENTAGE :::::"<<sum_gmarks<<"%"<<endl;				
				
					if(sum_gmarks>=85 && sum_gmarks<=100){
					
					cout<<"\t\t\t\tGRADE :: <'A+' G.P '4.00'>  OUTSTANDING\n\n\n"<<endl;
					file<<"GRADE :: <'A+' G.P '4.00'>  OUTSTANDING\n\n\n"<<endl<<endl<<endl;
					}if(sum_gmarks>=80 && sum_gmarks<=84){
						
					cout<<"\t\t\t\tGRADE :: <'A-' G.P '3.66'> EXCELLENET\n\n\n"<<endl;
					file<<"GRADE :: <'A-' G.P '3.66'> EXCELLENET\n\n\n"<<endl<<endl<<endl;	
						}if(sum_gmarks>=75 && sum_gmarks<=79){
						
					cout<<"\t\t\t\tGRADE :: <'B+' G.P '3.33'>  VERY GOOD\n\n\n"<<endl;	
					file<<"GRADE :: <'B+' G.P '3.33'>  VERY GOOD\n\n\n"<<endl<<endl<<endl;
						}if(sum_gmarks>=71 && sum_gmarks<=74){
						
					cout<<"\t\t\t\tGRADE :: <'B' G.P '3.00'>  GOOD\n\n\n"<<endl;	
					file<<"GRADE :: <'B' G.P '3.00'>  GOOD\n\n\n"<<endl<<endl<<endl;
						}if(sum_gmarks>=68 && sum_gmarks<=70){
						
					cout<<"\t\t\t\tGRADE :: <'B-' G.P '2.66'>  AVERAGE\n\n\n"<<endl;	
					file<<"GRADE :: <'B-' G.P '2.66'>  AVERAGE\n\n\n"<<endl<<endl<<endl;	
						}if(sum_gmarks>=64 && sum_gmarks<=67){
						
					cout<<"\t\t\t\tGRADE :: <'C+' G.P '2.33'>  SATISFACTORY\n\n\n"<<endl;
					file<<"GRADE :: <'C+' G.P '2.33'>  SATISFACTORY\n\n\n"<<endl<<endl<<endl;	
						}if(sum_gmarks>=61 && sum_gmarks<=63){
						
					cout<<"\t\t\t\tGRADE :: <'C' G.P '2.00'>  ADEQUATE\n\n\n"<<endl;		
					 file<<"GRADE :: <'C' G.P '2.00'>  ADEQUATE\n\n\n"<<endl<<endl<<endl;  
					   }if(sum_gmarks>=58 && sum_gmarks<=60){
					   
					cout<<"\t\t\t\tGRADE :: <'C_' G.P '1.66'>  PASS\n\n\n"<<endl;	
					file<<"GRADE :: <'C_' G.P '1.66'>  PASS\n\n\n"<<endl<<endl<<endl;		
						}if(sum_gmarks>=54 && sum_gmarks<=57){
						
					cout<<"\t\t\t\tGRADE :: <'D+' G.P '1.30'>  PASS\n\n\n"<<endl;
					file<<"GRADE :: <'D+' G.P '1.30'>  PASS\n\n\n"<<endl<<endl<<endl;	
						}if(sum_gmarks>=50 && sum_gmarks<=53){
						
					cout<<"\t\t\t\tGRADE :: <'D-' G.P '1.00'>  PASS\n\n\n"<<endl;
					file<<"GRADE :: <'D-' G.P '1.00'>  PASS\n\n\n"<<endl<<endl<<endl;	
						}if(sum_gmarks<50){
						
					cout<<"\t\t\t\tGRADE :: <'F' G.P '0.00'>  FAIL\n\n\n"<<endl;	
	              	file<<"GRADE :: <'F' G.P '0.00'>  FAIL\n\n\n"<<endl<<endl<<endl;
			}
					line2();			

			
		}
		
file.close();			
			
				break;
			default:
				cout<<"choose valid option";
		}
		cout<<"\t\t\t\t\twana  go back (y/n) ";
		cin>>opt;
		system("cls");
		if(opt=='n'|opt=='N')
			break;
	} while(1);
	
	
	
	
	return 0;
                }
                
  
  
  
float chk(){
float checker;
cin>>checker;
while(1){

if(cin.fail()){
  cin.clear();
  cin.ignore(numeric_limits<streamsize>::max(),'\n');
  cout<<"\t\t\t\t\tArabic Numerals Only ::";
  cin>>checker;

}if(!cin.fail()){

   return(checker);
   break;
}
   
                      } }           
                
                
    void display(void){
    	cout<<"\n\n\n\n\t\t\t___________________________________________________________________________";
	cout<<"\n\n\n\t\t\t\t\tCUSTOMIZE CATEGORIES PERCENTAGE AND NUMBER";
    cout<<"\n\t\t\t___________________________________________________________________________\n\n";
    	           	  }    
	void line1(void){
	cout<<"\n\n\t\t\t___________________________________________________________________________\n";	
		
	                 }   
	void line2(void) {
	cout<<"\n\t\t\t___________________________________________________________________________\n\n";	
                   	}  

string cap(string a){
	
		for(int j=0;a[j]!='\0'; j++) {

	if(a[j]>='a' && a[j]<='z')
	a[j]=a[j]-32;
								}

	return a;
	
}
