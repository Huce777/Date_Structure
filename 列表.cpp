#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h> 
/* �б��� */
typedef struct {
    int *arr;        // ���飨�洢�б�Ԫ�أ�
    int capacity;    // �б�����
    int size;        // �б��С
    int extendRatio; // �б�ÿ�����ݵı���
} MyList;

/* ���캯�� */
MyList *newMyList() {
    MyList *nums = malloc(sizeof(MyList));
    nums->capacity = 10;
    nums->arr = malloc(sizeof(int) * nums->capacity);
    nums->size = 0;
    nums->extendRatio = 2;
    return nums;
}

/* �������� */
void delMyList(MyList *nums) {
    free(nums->arr);
    free(nums);
}

/* ��ȡ�б��� */
int size(MyList *nums) {
    return nums->size;
}

/* ��ȡ�б����� */
int capacity(MyList *nums) {
    return nums->capacity;
}

/* ����Ԫ�� */
int get(MyList *nums, int index) {
    assert(index >= 0 && index < nums->size);
    return nums->arr[index];
}

/* ����Ԫ�� */
void set(MyList *nums, int index, int num) {
    assert(index >= 0 && index < nums->size);
    nums->arr[index] = num;
}

/* ��β�����Ԫ�� */
void add(MyList *nums, int num) {
    if (size(nums) == capacity(nums)) {
        extendCapacity(nums); // ����
    }
    nums->arr[size(nums)] = num;
    nums->size++;
}

/* ���м����Ԫ�� */
void insert(MyList *nums, int index, int num) {
    assert(index >= 0 && index < size(nums));
    // Ԫ��������������ʱ���������ݻ���
    if (size(nums) == capacity(nums)) {
        extendCapacity(nums); // ����
    }
    for (int i = size(nums); i > index; --i) {
        nums->arr[i] = nums->arr[i - 1];
    }
    nums->arr[index] = num;
    nums->size++;
}

/* ɾ��Ԫ�� */
// ע�⣺stdio.h ռ���� remove �ؼ���
int removeItem(MyList *nums, int index) {
    assert(index >= 0 && index < size(nums));
    int num = nums->arr[index];
    for (int i = index; i < size(nums) - 1; i++) {
        nums->arr[i] = nums->arr[i + 1];
    }
    nums->size--;
    return num;
}

/* �б����� */
void extendCapacity(MyList *nums) {
    // �ȷ���ռ�
    int newCapacity = capacity(nums) * nums->extendRatio;
    int *extend = (int *)malloc(sizeof(int) * newCapacity);
    int *temp = nums->arr;

    // ���������ݵ�������
    for (int i = 0; i < size(nums); i++)
        extend[i] = nums->arr[i];

    // �ͷž�����
    free(temp);

    // ����������
    nums->arr = extend;
    nums->capacity = newCapacity;
}

/* ���б�ת��Ϊ Array ���ڴ�ӡ */
int *toArray(MyList *nums) {
    return nums->arr;
}
