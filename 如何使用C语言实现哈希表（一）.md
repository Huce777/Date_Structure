### *如何使用C语言实现哈希表（一）*

#### *哈希表是什么？*

Hash表也称散列表，也有直接译作哈希表，Hash表是一种特殊的数据结构，它同数组、链表以及二叉排序树等相比较有很明显的区别，它能够快速定位到想要查找的记录，而不是与表中存在的记录的关键字进行比较来进行查找 。这个源于Hash表设计的特殊性，它采用了函数映射的思想将记录的存储位置与记录的关键字关联起来，从而能够很快速地进行查找。

#### *什么是 HashMap？*

###### **存储方式主要有两种：线性存储和链式存储，常见的线性存储例如数组，常见的链式存储如链表、[二叉树](https://zhida.zhihu.com/search?q=二叉树&zhida_source=entity&is_preview=1)等。哈希表的存储主干为线性存储，这也是它在理想状态(无冲突)下[时间复杂度](https://zhida.zhihu.com/search?q=时间复杂度&zhida_source=entity&is_preview=1)为O(1)的关键所在。普通线性存储的存储内容与索引地址之间没有任何的联系，只能通过索引地址推算出存储内容，不能从存储内容推算出索引地址，是一个单向不可逆的过程，而HashMap存储的是一个<key, value>的键值对，通过key和索引地址建立了一层关系，这层关系称之为[哈希函数](https://zhida.zhihu.com/search?q=哈希函数&zhida_source=entity&is_preview=1)(或散列函数)，这样既可以通过key推算出索引地址，也可以通过推算出的索引地址直接定位到键值对，这是一个双向可逆的过程。需要注意的一点是HashMap并不直接暴露出键值对的索引地址，但是可以通过哈希函数推算出HashCode，其实HashCode就是真实的索引地址。**

#### *1.引入库并初始化*

```c
#include "uthash.h"
typedef struct {
    int key; //可以就只有key不加value
    int value;
    UT_hash_handle hh;
} Hash;
Hash *hashtable = NULL;

```

#### *2.增删改查hash数据*

##### *2.1 增加和修改 hash_insert(key,val)*

```c
/* 插入和修改hash */
void hash_insert(int ikey, int ival) {
    struct Hash* it = find(ikey);
    if (it == NULL) {
        struct Hash* tmp = malloc(sizeof(struct Hash));
        tmp->key = ikey, tmp->val = ival;
        HASH_ADD_INT(hashtable, key, tmp);
    } else {
        it->val = ival;
    }
}

```

##### *2.2 查找 hash_find(key)*

*找到返回hash数据，找不到返回NULL*

```c
/* 查找hash */
struct hashTable* hash_find(int ikey) {
    struct Hash* tmp;
    HASH_FIND_INT(hashtable, &ikey, tmp);
    return tmp;
}

```

##### *2.3 删除 hash_delete(key)*

*传入key值，删除成功返回1，失败返回0*

```c
/* 删除hash */
int hash_delete(int ikey) {
	struct Hash* it = find(ikey);
	if (it != NULL) {
		HASH_DEL(hash, it);
	    free(it);
	    it = NULL;
	    return 1;
	}else{
		return 0;
	}
}

```

```c
#include "uthash.h"
typedef struct {
    int key; //可以就只有key不加value
    int value;
    UT_hash_handle hh;
} Hash;
Hash *hashtable = NULL;

struct Hash* hash_find(int ikey) {
    struct Hash* tmp;
    HASH_FIND_INT(hashtable, &ikey, tmp);
    return tmp;
}
void hash_insert(int ikey, int ival) {
    struct Hash* it = find(ikey);
    if (it == NULL) {
        struct Hash* tmp = malloc(sizeof(struct Hash));
        tmp->key = ikey, tmp->val = ival;
        HASH_ADD_INT(hashtable, key, tmp);
    } else {
        it->val = ival;
    }
}
int hash_delete(int ikey) {
	struct Hash* it = find(ikey);
	if (it != NULL) {
		HASH_DEL(hashtable, it);
	    free(it);
	    it = NULL;
	    return 1;
	}else{
		return 0;
	}
}

```

