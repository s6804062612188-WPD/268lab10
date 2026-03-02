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

