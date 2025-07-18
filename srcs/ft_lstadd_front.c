/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shintarokohtake <shintarokohtake@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 22:21:59 by shintarokoh       #+#    #+#             */
/*   Updated: 2025/07/18 20:47:04 by shintarokoh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new == NULL || lst == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}

// //	you must comment out below

// // ヘルパー関数: リストの内容を表示する
// void    print_list(t_list *head)
// {
//     t_list *current = head;
//     printf("List: ");
//     while (current)
//     {
//         // contentが文字列であることを前提としてchar*にキャストして表示
//         // NULLチェックを追加して堅牢性を高める
//         if (current->content)
//             printf("-> \"%s\" ", (char *)current->content);
//         else
//             printf("-> (NULL Content) ");
//         current = current->next;
//     }
//     printf("-> NULL\n");
// }

// // ヘルパー関数: ft_lstclearに渡すためのdel関数
// // ft_lstnewでcontentに文字列リテラルを渡す場合、content自体をfreeすべきではないため、何もしない関数を用意
// void    del_nothing(void *content)
// {
//     (void)content; // 未使用の引数警告を抑制
//     // ここでは何もしない
// }

// // ft_lstclearの仮実装 (完全な実装はlibftプロジェクトに依存)
// // テストのために必要であれば、Libftのft_lstclearの正しい実装をここに含めるか、
// // main関数と同じファイル内に定義してください。
// // ここでは、ft_lstclearがリストのメモリを解放すると仮定しています。
// /*
// void    ft_lstclear(t_list **lst, void (*del)(void *))
// {
//     t_list  *current;
//     t_list  *next_node;

//     if (!lst || !del)
//         return ;
//     current = *lst;
//     while (current)
//     {
//         next_node = current->next;
//         del(current->content); // contentを解放 (文字列リテラルの場合はdel_nothing)
//         free(current);         // ノード自体を解放
//         current = next_node;
//     }
//     *lst = NULL; // リストのヘッドをNULLにする
// }
// */


// int main()
// {
//     t_list *head = NULL; // リストの先頭ポインタをNULLで初期化

//     printf("--- ft_lstadd_front 関数のテスト ---\n");

//     // 新しいノードをいくつか作成
//     // ft_lstnewがNULLを返す可能性も考慮
//     t_list *node1 = ft_lstnew("First Node");
//     t_list *node2 = ft_lstnew("Second Node");
//     t_list *node3 = ft_lstnew("Third Node");

//     if (!node1 || !node2 || !node3) {
//         printf("エラー: ノードのメモリ割り当てに失敗しました。\n");
//         // 割り当てに成功したノードがあれば解放する (簡単なエラーハンドリング)
//         if (node1) free(node1);
//         if (node2) free(node2);
//         if (node3) free(node3);
//         return 1;
//     }

//     printf("初期状態:\n");
//     print_list(head); // 期待: List: -> NULL

//     printf("\nNode1 を先頭に追加:\n");
//     ft_lstadd_front(&head, node1);
//     print_list(head); // 期待: List: -> "First Node" -> NULL

//     printf("\nNode2 を先頭に追加:\n");
//     ft_lstadd_front(&head, node2);
//     print_list(head); // 期待: List: -> "Second Node" -> "First Node" -> NULL

//     printf("\nNode3 を先頭に追加:\n");
//     ft_lstadd_front(&head, node3);
//     print_list(head); // 期待: List: -> "Third Node" -> "Second Node" -> "First Node" -> NULL

//     printf("\nNULLノードを先頭に追加 (何も起きないはず):\n");
//     ft_lstadd_front(&head, NULL); // NULLノードのテスト
//     print_list(head); // 期待: リストは変更されない

//     printf("\n--- リストのクリーンアップ ---\n");
//     // ここでft_lstclearを呼び出して、リストとノードのメモリを解放します。
//     // contentには文字列リテラルが入っているため、del_nothingを渡します。
//     // (ft_lstclearがLibftの他のボーナス関数として実装されている前提です)
//     // 上記のft_lstclearの仮実装をコメントアウト解除して、このmain関数と同じファイルに含めるか、
//     // libft.hで提供される完全なft_lstclearを使用してください。
//     // この例では、ft_lstclearが存在すると仮定しています。
//     // ft_lstclear(&head, del_nothing);
//     // printf("ft_lstclear後のリスト: ");
//     // print_list(head); // 期待: List: -> NULL

//     return 0;
// }
