#include <stdio.h>

int main(){
    int gio_lam_viec;
    float luong_co_ban, tong_luong, phu_cap;
    printf (" Hay nhap so gio lam viec trong thang (gio): ");
    scanf ("%d", &gio_lam_viec);
    printf (" Hay nhap muc luong theo gio (Dong): ");
    scanf ("%f", &luong_co_ban);
    if (gio_lam_viec > 160)
    {
        luong_co_ban = gio_lam_viec * luong_co_ban;
        phu_cap = luong_co_ban * 0.1;
        tong_luong = luong_co_ban + phu_cap;
        printf (" Tong tien luong la: %.0f\n", tong_luong);
        printf ("Tien luong co ban la: %.0f\n", luong_co_ban);
        printf ("Tien luong phu cap la: %.0f\n", phu_cap);
    }
    else {
        tong_luong = gio_lam_viec *luong_co_ban;
         printf (" Tong tien luong la: %.0f\n", tong_luong);
    }
return 0;
}