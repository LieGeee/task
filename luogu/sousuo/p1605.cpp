// 插入操作，参数为头指针、插入位置和插入数据，返回插入后的头指针
LinkList insert(LinkList head, int pos, int data) {
    // 检查插入位置是否合法，如果不合法，打印错误信息并返回原头指针
    if (pos < 1) {
        printf("插入位置不能小于1！\n");
        return head;
    }
    // 创建一个新的节点，并分配内存空间，检查是否分配成功
    LinkList newNode = (LinkList)malloc(sizeof(LNode));
    if (newNode == NULL) {
        printf("内存分配失败！\n");
        exit(1);
    }
    // 将插入数据赋值给新节点的数据域
    newNode->data = data;
    // 如果插入位置为1，即在头节点之前插入，那么将新节点的指针域指向头节点，然后将新节点作为头节点返回
    if (pos == 1) {
        newNode->next = head;
        return newNode;
    }
    // 如果插入位置不为1，那么需要找到插入位置的前一个节点，用一个临时指针p从头节点开始遍历，用一个计数器count记录当前位置
    LinkList p = head;
    int count = 1;
    // 当p不为空且count小于pos-1时，继续向后移动p，同时增加count
    while (p != NULL && count < pos - 1) {
        p = p->next;
        count++;
    }
    // 如果p为空，说明插入位置超出了链表的长度，打印错误信息并返回原头指针
    if (p == NULL) {
        printf("插入位置超出了链表的长度！\n");
        return head;
    }
    // 如果p不为空，说明找到了插入位置的前一个节点，那么将新节点的指针域指向p的后一个节点，然后将p的指针域指向新节点，最后返回原头指针
    newNode->next = p->next;
    p->next = newNode;
    return head;
}
