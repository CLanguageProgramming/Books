#include <stdio.h>
#include <string.h>
struct Books
{
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
}b1, b2;
int main()
{
  printf("Enter Book 1 Details:\n");
  printf(" Enter Title: ");
  fgets(b1.title, sizeof(b1.title), stdin);
  printf(" Enter Author: ");
  fgets(b1.author, sizeof(b1.author), stdin);
  printf(" Enter Subject: ");
  fgets(b1.subject, sizeof(b1.subject), stdin);
  printf(" Enter Book ID: ");
  scanf("%d", &b1.book_id);
  getchar();
  
  printf("\nEnter Book 2 Details:\n");
  printf(" Enter Title: ");
  fgets(b2.title, sizeof(b1.title), stdin);
  printf(" Enter Author: ");
  fgets(b2.author, sizeof(b1.title), stdin);
  printf(" Enter Subject: ");
  fgets(b2.subject, sizeof(b1.title), stdin);
  printf(" Enter Book ID: ");
  scanf("%d", &b2.book_id);
  
  printf("Book 1 Details: \n");
  printf(" Book Title: %s", b1.title);
  printf(" Book Author: %s", b1.author);
  printf(" Book Subject: %s", b1.subject);
  printf(" Book ID: %d", b1.book_id);
  printf("\n");
  
  printf("Book 2 Details: \n");
  printf(" Book Title: %s", b2.title);
  printf(" Book Author: %s", b2.author);
  printf(" Book Subject: %s", b2.subject);
  printf(" Book ID: %d", b2.book_id);
}
