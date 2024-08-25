#include <stdio.h>
#include <stdlib.h>

// 連結リスト
// 実際の値と次の値のポインタを格納する領域を持つ。
// メモリ上にhello worldの文字が連続して配置されていなくても、次の値がどこかわかる。
// メモリを増やしたり解放したりを要求する必要はない。これがコンピュータの操作の中で遅い傾向がある。
// その分メモリを余分に確保することにはなる(ポインタのメモリは8バイト)。メモリを使えば時間が省略でき、メモリを節約すれば時間がかかるのがコンピュータのトレードオフ。
// ポインタをたどるのにそれなりの時間がかかる。終端を見つけるために0(n)の時間が必要。
// 
//
//

// ノード
// 情報をカプセル化したデータ構造がある場合によく使われる用語
typedef struct node
{
    int number;
    // 後に来るものが今使っているものと同種のものであることを意味する時にnextって名前をつけることが多い。わかりにくくね？
    // この場合、次のnodeへのポインタが入る
    struct node *next;
}
node;

int main(void)
{
    // List of size
    // 連結リストを表現。node型のlistという変数。
    // この変数がリストの最初のノードを指すようになる。
    node *list = NULL;

    // Add a number to list
    // node型のnという変数にmallocでnodeの大きさ分の領域を要求
    node *n = malloc(sizeof(node));
    if (n == NULL)
    {
        return 1;
    }
    // nに値を入力。numberには1、nextにはNULL。
    // -> はあるアドレスに行ってその中のフィールドを見ることを意味する
    // (*n).number =1; の糖衣構文。
    n->number = 1;
    n->next = NULL;

    //Update list to point to new node
    // nのアドレスをlistにコピー
    list = n;

    // Add a number to list
    // listに数字を追加
    // nはすでに宣言しているのでそのまま使える
    n = malloc(sizeof(node));
    if (n == NULL)
    {
        free(list);
        return 1;
    }
    n->number = 2;
    n->next = NULL;
    // listのnextの値をnのアドレスにする。この前まではn->next = NULL;でNULLを設定している
    list->next = n;

    // Add a number to list
    n = malloc(sizeof(node));
    if (n == NULL)
    {
        // 先にlistを解放するとlist->nextは辿れなくなるので、よりネストの深いlist->nextから先に解放する
        free(list->next);
        free(list);
        return 1;
    }
    n->number = 3;
    n->next = NULL;
    list->next->next = n;

    // Print numbers
    // この時のlistの状態
    // node0
    //    number:1
    //    *next:node1のアドレス
    // node1
    //    number:2
    //    *next:node2のアドレス
    // node2
    //    number:3
    //    *next:NULL
    for (node *tmp = list; tmp != NULL; tmp = tmp->next )
    {
        printf("%i\n", tmp->number);
        // freeは不要。
        // mallocで割り当てたメモリに対してのみfreeが必要。
    }

    // Free list
    // 連結リスト全体のメモリを解放する
    while (list != NULL)
    {
        //このtmpは前述のforのネストの中にあるtmpとは別物。ネストが分かれているので。
        node *tmp = list->next;
        free(list);
        list = tmp;
    }
    return 0;

}