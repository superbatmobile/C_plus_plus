//
//  main.c
//  linked_list_q1
//
//  Created by 王資猛 on 2020/10/24.
//  Copyright © 2020 王資猛. All rights reserved.
//

#include <stdio.h>
#include<stdlib.h>

typedef struct __list{
    int data;
    struct __list *next;
}list;

void list_initial(list *start);
void print_list(list *start);
list *sort(list *start);

int main(int argc, const char * argv[]) {
    // insert code here...
    list *start;
    start=(list *)malloc(sizeof(list));
    list_initial(start);
    print_list(start);
    start=sort(start);
    print_list(start);
    return 0;
}

void list_initial(list *start){
    list *head ;
    
    head=start;
    
    int randArray[10];
    for(int i=0;i<10;i++){
        randArray[i]=rand()%100;
    }
    
    for(int i=0;i<10;i++){
        list *temp=malloc(sizeof(list));
        temp->data=randArray[i];
        //printf("%d\n",temp->data);
        head->next=temp;
        head=head->next;
    }
    start=start->next;
}

void print_list(list *start){
    list* head=start;
    for(int i=0;i<10;i++){
        printf("%d",start->data);
        printf("\n");
        start=start->next;
    }
    start=head;
}

list *sort(list *start) {
    if (!start || !start->next)
        return start;
    list *left = start;
    list *right = left->next;
    left->next = NULL;
    
    left = sort(left);
    right = sort(right);
    
    for (list *merge = NULL; left || right; ) {
        if (!right || (left && left->data < right->data)) {
            if (!merge) {
                start=merge=left;
            } else {
                merge->next=left;
                merge = merge->next;
            }
            left=left->next;
            
        } else {
            if (!merge) {
                start=merge=right;
            } else {
                merge->next=right;
                merge = merge->next;
            }
            right=right->next;
        }
    }
    return start;
}
