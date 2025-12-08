#include<stdio.h>
#include<malloc.h>

struct nod {
	strucy nod *left;
	char data;
	struct nod *right;
};

typedef struct nod NOD;
typedef NOD POKOK;
NOD *NodBaru(char item) {
	NOD *n;
	n = (NOD*) malloc(sizeof(NOD));
	if(n != NULL){
			n->data = item;
			n->left = NULL;
			n->right = NULL;
	}
	return n;
}

void BinaPokok(POKOK**T){
		*T = NULL;
}
typedef enum {FALSE = 0, TRUE = 1}BOOL;

BOOL PokokKosong(POKOK*T){
	return((BOOL)(T==NULL));
}
void TambahNod(NOD**p, char item){
	NOD*n;
	n = NodBaru(item);
	*p = n;
}
void preOrder(POKOK*T){
	if(!PokokKosong(T)){
			printf("%c", T->data);
			preOrder(T->left);
			preOrder(T->right);
	}
}
void preOrder(POKOK*T){
	if(!PokokKosong(T)){
			printf("%c", T->left);
			preOrder(T->data);
			preOrder(T->right);
	}
}
void preOrder(POKOK*T){
	if(!PokokKosong(T)){
			printf("%c", T->left);
			preOrder(T->);right
			preOrder(T->data);
	}
}
int main()
{
	POKOK *kelapa;
	char buah;
	BinaPokok(&kelapa);
	TambahNod(&kelapa, buah = 'M');
	TambahNod(&kelapa->left, buah = 'E');
	TambahNod(&kelapa->left->right, buah = 'I');
	TambahNod(&kelapa->right, buah = 'L');
	TambahNod(&kelapa->right->, buah = 'O');
	TambahNod(&kelapa->right->left, buah = 'D');
	printf("Tampilan secara PreOrder: ");
	preOrder(kelapa);
	printf("\nTampilan secara InOrder: ");
	inOrder(kelapa);
	printf("\nTampilan secara PreOrder: ");
	postOrder(kelapa);
	printf("\n\n");
	return 0;
}
