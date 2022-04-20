#include <stdio.h>
#include <glib.h>
GList* list;
int main() {
    list = g_list_append(list, "а");
    list = g_list_append(list, "b");
    list = g_list_append(list, "с");
    for (; list != NULL; list = list->next)
        printf("%s\n", (char * )list->data);
    return 0;
}
