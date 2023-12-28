#include <stdio.h>
#include <string.h>

struct Contact {
    int id;
    char name[50];
    char phone[12];
    char address[50];
    int status;
};

void bubbleSort(struct Contact contactList[], int n) {
    int i, j;
    struct Contact temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (contactList[j].id > contactList[j + 1].id) {
                temp = contactList[j];
                contactList[j] = contactList[j + 1];
                contactList[j + 1] = temp;
            }
        }
    }
}

void inDanhSach(struct Contact danhBa[], int n) {
    printf("Danh sach lien he:\n");
    printf("ID\tTen\tDien thoai\tDia chi\tTrang thai\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%s\t%s\t%s\t%d\n", danhBa[i].id, danhBa[i].name, danhBa[i].phone, danhBa[i].address, danhBa[i].status);
    }
}

int main() {
    struct Contact contactList[100];
    int n, i, found = 0;
    int timTrangThai;
    char timTen[50];
    int choice;

    printf("Nhap so danh sach contact: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Nhap chi tiet danh sach thu %d:\n", i + 1);
        printf("Nhap ID: ");
        scanf("%d", &contactList[i].id);

        printf("Nhap ten lien he: ");
        getchar();
        fgets(contactList[i].name, sizeof(contactList[i].name), stdin);
        contactList[i].name[strcspn(contactList[i].name, "\n")] = '\0';

        printf("Nhap dien thoai: ");
        scanf("%s", contactList[i].phone);

        printf("Nhap dia chi: ");
        getchar();
        fgets(contactList[i].address, sizeof(contactList[i].address), stdin);
        contactList[i].address[strcspn(contactList[i].address, "\n")] = '\0';

        printf("Nhap trang thai: ");
        scanf("%d", &contactList[i].status);
    }

    do {
        printf("\n--------------------MENU---------------------\n");
        printf("1. In toan bo danh sach contact\n");
        printf("2. Them moi contact\n");
        printf("3. Cap nhat thong tin contact\n");
        printf("4. Xoa contact\n");
        printf("5. Sap xep danh sach contact\n");
        printf("6. Tim kiem theo ten\n");
        printf("7. Tim kiem theo trang thai\n");
        printf("0. Thoat\n");
        printf("-------------------------------------------------\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                inDanhSach(contactList, n);
                break;
            case 2:
                printf("Nhap chi tiet lien he moi:\n");
                printf("Nhap ID: ");
                scanf("%d", &contactList[n].id);

                printf("Nhap ten lien he: ");
                getchar();
                fgets(contactList[n].name, sizeof(contactList[n].name), stdin);
                contactList[n].name[strcspn(contactList[n].name, "\n")] = '\0';

                printf("Nhap dien thoai: ");
                scanf("%s", contactList[n].phone);

                printf("Nhap dia chi: ");
                getchar();
                fgets(contactList[n].address, sizeof(contactList[n].address), stdin);
                contactList[n].address[strcspn(contactList[n].address, "\n")] = '\0';

                printf("Nhap trang thai: ");
                scanf("%d", &contactList[n].status);

                n++;
                printf("Lien he da duoc them moi.\n");
                break;
            case 3:
                printf("Nhap ten lien he muon cap nhat: ");
                getchar();
                fgets(timTen, sizeof(timTen), stdin);
                timTen[strcspn(timTen, "\n")] = '\0';

                for (int i = 0; i < n; i++) {
                    if (strcmp(contactList[i].name, timTen) == 0) {
                        printf("Nhap thong tin moi cho lien he:\n");
                        printf("Nhap ID: ");
                        scanf("%d", &contactList[i].id);

                        printf("Nhap ten lien he: ");
                        getchar();
                        fgets(contactList[i].name, sizeof(contactList[i].name), stdin);
                        contactList[i].name[strcspn(contactList[i].name, "\n")] = '\0';

                        printf("Nhap dien thoai: ");
                        scanf("%s", contactList[i].phone);

                        printf("Nhap dia chi: ");
                        getchar();
                        fgets(contactList[i].address, sizeof(contactList[i].address), stdin);
                        contactList[i].address[strcspn(contactList[i].address, "\n")] = '\0';

                        printf("Nhap trang thai: ");
                        scanf("%d", &contactList[i].status);

                        printf("Lien he da duoc cap nhat.\n");
                        break;
                    } else {
                        printf("Khong tim thay lien he.\n");
                    }
                }
                break;
            case 4:
                printf("Nhap ten lien he muon xoa: ");
                getchar();
                fgets(timTen, sizeof(timTen), stdin);
                timTen[strcspn(timTen, "\n")] = '\0';

                for (int i = 0; i < n; i++) {
                    if (strcmp(contactList[i].name, timTen) == 0) {
                        for (int j = i; j < n - 1; j++) {
                            contactList[j] = contactList[j + 1];
                        }
                        n--;
                        printf("Lien he da bi xoa.\n");
                        break;
                    } else {
                        printf("Khong tim thay lien he.\n");
                    }
                }
                break;
            case 5:
                bubbleSort(contactList, n);
                printf("Danh sach lien he da duoc sap xep theo ID:\n");
                inDanhSach(contactList, n);
                break;
            case 6:
                printf("Nhap ten lien he muon tim kiem: ");
                getchar();
                fgets(timTen, sizeof(timTen), stdin);
                timTen[strcspn(timTen, "\n")] = '\0';
                bubbleSort(contactList, n);
                int left = 0, right = n - 1, mid;
                found = 0;
                while (left <= right) {
                    mid = (left + right) / 2;
                    if (strcmp(contactList[mid].name, timTen) == 0) {
                        found = 1;
                        printf("Tim thay lien he:\n");
                        printf("%d\t%s\t%s\t%s\t%d\n", contactList[mid].id, contactList[mid].name, contactList[mid].phone, contactList[mid].address, contactList[mid].status);
                        break;
                    } else if (strcmp(contactList[mid].name, timTen) < 0) {
                        left = mid + 1;
                    } else {
                        right = mid - 1;
                    }
                }
                if (!found) {
                    printf("Khong tim thay lien he.\n");
                }
                break;
            case 7:
                printf("Nhap trang thai muon tim kiem: ");
                scanf("%d", &timTrangThai);
                found = 0;
                for (int i = 0; i < n; i++) {
                    if (contactList[i].status == timTrangThai) {
                        found = 1;
                        printf("Tim thay lien he:\n");
                        printf("%d\t%s\t%s\t%s\t%d\n", contactList[i].id, contactList[i].name, contactList[i].phone, contactList[i].address, contactList[i].status);
                    }
                }
                if (!found) {
                    printf("Khong tim thay lien he.\n");
                }
                break;
            case 0:
                printf("Cam on ban da su dung chuong trinh!\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai!\n");
                break;
        }
    } while (choice != 0);

    return 0;
}
