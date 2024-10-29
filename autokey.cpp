#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
//CREATE A NODE
struct Node* createNode(int data){
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->next=NULL;
    return newNode;
}
void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}
void insertAtBeginning(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}
void LinkedSum(struct Node** head,struct Node** head2,struct Node** sumL){
    struct Node* temp=*head;
    struct Node* temp2=*head2;
    int i=0, j=0, sum=0;
    int a1[100],a2[100];

    while(temp!=NULL){
        a1[i]=temp->data;
        i++;
        temp=temp->next;
    }
    while(temp2!=NULL){
        a2[j]=temp2->data;
        j++;
        temp2=temp2->next;
    }
     while (i > 0 && j > 0) {
        sum = a1[i-1] + a2[j-1];
        insertAtBeginning(sumL, sum);
        i--;
        j--;
    }

    while (i > 0) {
        insertAtBeginning(sumL, a1[i-1]);
        i--;
    }

    while (j > 0) {
        insertAtBeginning(sumL, a2[j-1]);
        j--;
    }
}

//TO PRINT A LIST
void traverse(struct Node* head){
    struct Node* temp=head;
    printf("final list: ");
    while(temp!=NULL){
        printf("%d ->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}
int main(){
    struct Node* head=NULL;
    struct Node* head2=NULL;
    struct Node* sumhead=NULL;
    int n,a,m;
    printf("enter the limit for first:");
    scanf("%d",&n);
        printf("enter the values: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        insertAtEnd(&head,a);
    }
    printf("enter the limit for second:");
    scanf("%d",&m);
        printf("enter the values: ");

    for(int i=0;i<m;i++){
        scanf("%d",&a);
        insertAtEnd(&head2,a);
    }
    LinkedSum(&head,&head2,&sumhead);
    traverse(sumhead);
    return 0;
}

