#include <stdio.h> 
#include <string.h> 
struct Books{ 
	int BookID; 
	char BookTitle[50]; 
} ComputerBook;

void DisplayData(struct Books *CBook);

int main() { 
	printf("Enter Book ID:\t");      
	scanf("%d", &ComputerBook.BookID); 
	printf("Enter Book Title:\t");   
	scanf("%s", &ComputerBook.BookTitle); 
	DisplayData(&ComputerBook);
	return 0; 
} 
void DisplayData(struct Books *CBook) { 
	printf("Book ID:\t%d\n",(*CBook).BookID); 
	printf("Book Title:\t%s\n",CBook->BookTitle);  
} 

// (*CBook).BookID คือ: อ่านค่า CBook ณ ตำแหน่งนั้นด้วยโครงสร้าง struct Book
// CBook->BookTitle: คือ: เข้าถึง BookTitle ด้วย pointer CBook, จะได้ผลลัพธ์เดียวกับบรรทัดข้างบน
