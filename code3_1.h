struct queue{                       // キューを表す構造体の定義
  int  box[qmax+1];
  int front,rear;
};

void initialize(struct queue *q)      // キューの初期化
{
  q->front =1;
  q->rear=0;
}

void insert(struct queue *q,char item)    // キューへ要素を挿入
{
  q->box[++q->rear]= item;
}

void delete(struct queue *q)        // キューから先頭要素を削除
{
  ++q->front;
}

int empty(struct queue *q)          // FALSE=0  TRUE=1
{
  return (q->rear < q-> front);
}

int top(struct queue *q)           // キューの先頭要素
{
  return(q->box[q->front]);
}

//バケットソート テキストのコード3.1
struct queue q[m+1];

void qtoa(struct queue *q, int a[])
{
  static int j;

  while(!empty(q)) {
    a[++j] = top(q);
    delete(q);
  }
}

void bucketsort(int a[], int n)
{
  int i;

  for (i=1; i<=m; i++)
    initialize(&q[i]);
  for (i=1; i<=n; i++)
    insert(&q[a[i]], a[i]);
  for (i=1; i<=m; i++)
    qtoa(&q[i], a);
}
