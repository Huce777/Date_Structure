/* ��������ʵ�ֵ�ջ */
typedef struct {
    ListNode *top; // ��ͷ�ڵ���Ϊջ��
    int size;      // ջ�ĳ���
} LinkedListStack;

/* ���캯�� */
LinkedListStack *newLinkedListStack() {
    LinkedListStack *s = malloc(sizeof(LinkedListStack));
    s->top = NULL;
    s->size = 0;
    return s;
}

/* �������� */
void delLinkedListStack(LinkedListStack *s) {
    while (s->top) {
        ListNode *n = s->top->next;
        free(s->top);
        s->top = n;
    }
    free(s);
}

/* ��ȡջ�ĳ��� */
int size(LinkedListStack *s) {
    return s->size;
}

/* �ж�ջ�Ƿ�Ϊ�� */
bool isEmpty(LinkedListStack *s) {
    return size(s) == 0;
}

/* ��ջ */
void push(LinkedListStack *s, int num) {
    ListNode *node = (ListNode *)malloc(sizeof(ListNode));
    node->next = s->top; // �����¼ӽڵ�ָ����
    node->val = num;     // �����¼ӽڵ�������
    s->top = node;       // ����ջ��
    s->size++;           // ����ջ��С
}

/* ����ջ��Ԫ�� */
int peek(LinkedListStack *s) {
    if (s->size == 0) {
        printf("ջΪ��\n");
        return INT_MAX;
    }
    return s->top->val;
}

/* ��ջ */
int pop(LinkedListStack *s) {
    int val = peek(s);
    ListNode *tmp = s->top;
    s->top = s->top->next;
    // �ͷ��ڴ�
    free(tmp);
    s->size--;
    return val;
}
