#include <stdio.h> 
#include <string.h> 
struct Books{ 
	int BookID; 
	char BookTitle[50]; 
} ComputerBook;

void DisplayData(struct Books CBook);

int main() { 
	printf("Enter Book ID:\t");      
	scanf("%d", &ComputerBook.BookID); 
	printf("Enter Book Title:\t");   
	scanf("%s", &ComputerBook.BookTitle); 
	DisplayData(ComputerBook);
	return 0; 
} 
void DisplayData(struct Books CBook) { 
	printf("Book ID:\t%d\n", CBook.BookID); 
	printf("Book Title:\t%s\n", CBook.BookTitle); 
} 

// void DisplayData(struct Books CBook): คือ ฟังก์ชันที่รับสิ่งสิ่งหนึ่งเข้ามาในรูปแบบโครงสร้าง Books ในนาม CBook
// พารามิเตอร์ที่รับเข้ามา: คิอ object CBook
