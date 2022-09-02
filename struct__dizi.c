#include<stdio.h>
#include<string.h>
	

int main(){
int i,n;
struct student{
    int number;
	char name[40];
	char surname[40];
	int midtermGrade;
    };
    

struct student data[10]={18,"ali","cinar",86,
                         26,"ahmet","yasin",28,
                         12,"mustafa","yel",94,
                         47,"ayse","ulu",55,
                         36,"semih","suna",28,
                         122,"tunc","kagit",72,
                         7,"veli","tas",46,
                         134,"kübra","sal",84,
                         85,"aylin","kel",22,
                         110,"fatma","yas",36
};


printf("***bilgileri alinan ogrenci listesi***\n");

for(i = 0 ; i < 3 ; i++){	

    printf("\n adi : %s\n soyadi : %s\n kayit sirasi: %d\n numarasi : %d\n vize notu : %d\n " , 
	        data[i].name, data[i].surname, (i+1), data[i].number, data[i].midtermGrade);

}
return 0;
}
