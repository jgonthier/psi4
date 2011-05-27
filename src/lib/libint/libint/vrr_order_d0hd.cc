#include <stdio.h>
#include "libint.h"
#include "vrr_header.h"

  /* Computes quartets necessary to compute (d0|hd) integrals */

void vrr_order_d0hd(Libint_t * Libint, prim_data *Data)
{
 REALTYPE *vrr_stack = Libint->vrr_stack;
 REALTYPE *tmp, *target_ptr;
 int i, am[2];
 _BUILD_00p0(Data,vrr_stack+0, Data->F+3, Data->F+4, NULL, NULL, NULL);
 _BUILD_00p0(Data,vrr_stack+3, Data->F+2, Data->F+3, NULL, NULL, NULL);
 _BUILD_00p0(Data,vrr_stack+6, Data->F+4, Data->F+5, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+9, vrr_stack+0, vrr_stack+6, Data->F+3, Data->F+4, NULL);
 _BUILD_00d0(Data,vrr_stack+15, vrr_stack+3, vrr_stack+0, Data->F+2, Data->F+3, NULL);
 _BUILD_00f0(Data,vrr_stack+21, vrr_stack+15, vrr_stack+9, vrr_stack+3, vrr_stack+0, NULL);
 _BUILD_00p0(Data,vrr_stack+31, Data->F+5, Data->F+6, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+34, vrr_stack+6, vrr_stack+31, Data->F+4, Data->F+5, NULL);
 _BUILD_00f0(Data,vrr_stack+40, vrr_stack+9, vrr_stack+34, vrr_stack+0, vrr_stack+6, NULL);
 _BUILD_00g0(Data,vrr_stack+50, vrr_stack+21, vrr_stack+40, vrr_stack+15, vrr_stack+9, NULL);
 _BUILD_00p0(Data,vrr_stack+0, Data->F+1, Data->F+2, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+65, vrr_stack+0, vrr_stack+3, Data->F+1, Data->F+2, NULL);
 _BUILD_00f0(Data,vrr_stack+71, vrr_stack+65, vrr_stack+15, vrr_stack+0, vrr_stack+3, NULL);
 _BUILD_00g0(Data,vrr_stack+81, vrr_stack+71, vrr_stack+21, vrr_stack+65, vrr_stack+15, NULL);
 _BUILD_p0g0(Data,vrr_stack+96, vrr_stack+81, vrr_stack+50, NULL, NULL, vrr_stack+21);
 _BUILD_00h0(Data,vrr_stack+141, vrr_stack+81, vrr_stack+50, vrr_stack+71, vrr_stack+21, NULL);
 _BUILD_00p0(Data,vrr_stack+3, Data->F+0, Data->F+1, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+15, vrr_stack+3, vrr_stack+0, Data->F+0, Data->F+1, NULL);
 _BUILD_00f0(Data,vrr_stack+162, vrr_stack+15, vrr_stack+65, vrr_stack+3, vrr_stack+0, NULL);
 _BUILD_00g0(Data,vrr_stack+172, vrr_stack+162, vrr_stack+71, vrr_stack+15, vrr_stack+65, NULL);
 _BUILD_00h0(Data,vrr_stack+187, vrr_stack+172, vrr_stack+81, vrr_stack+162, vrr_stack+71, NULL);
 _BUILD_00p0(Data,vrr_stack+162, Data->F+6, Data->F+7, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+15, vrr_stack+31, vrr_stack+162, Data->F+5, Data->F+6, NULL);
 _BUILD_00f0(Data,vrr_stack+65, vrr_stack+34, vrr_stack+15, vrr_stack+6, vrr_stack+31, NULL);
 _BUILD_00g0(Data,vrr_stack+208, vrr_stack+40, vrr_stack+65, vrr_stack+9, vrr_stack+34, NULL);
 _BUILD_00h0(Data,vrr_stack+223, vrr_stack+50, vrr_stack+208, vrr_stack+21, vrr_stack+40, NULL);
 _BUILD_p0h0(Data,vrr_stack+244, vrr_stack+141, vrr_stack+223, NULL, NULL, vrr_stack+50);
 _BUILD_p0h0(Data,vrr_stack+307, vrr_stack+187, vrr_stack+141, NULL, NULL, vrr_stack+81);
 _BUILD_00i0(Data,vrr_stack+370, vrr_stack+141, vrr_stack+223, vrr_stack+81, vrr_stack+50, NULL);
 _BUILD_00i0(Data,vrr_stack+398, vrr_stack+187, vrr_stack+141, vrr_stack+172, vrr_stack+81, NULL);
 _BUILD_00p0(Data,vrr_stack+21, Data->F+7, Data->F+8, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+24, vrr_stack+162, vrr_stack+21, Data->F+6, Data->F+7, NULL);
 _BUILD_00f0(Data,vrr_stack+165, vrr_stack+15, vrr_stack+24, vrr_stack+31, vrr_stack+162, NULL);
 _BUILD_00g0(Data,vrr_stack+0, vrr_stack+65, vrr_stack+165, vrr_stack+34, vrr_stack+15, NULL);
 _BUILD_00h0(Data,vrr_stack+75, vrr_stack+208, vrr_stack+0, vrr_stack+40, vrr_stack+65, NULL);
 _BUILD_00i0(Data,vrr_stack+426, vrr_stack+223, vrr_stack+75, vrr_stack+50, vrr_stack+208, NULL);
 _BUILD_p0i0(Data,vrr_stack+454, vrr_stack+370, vrr_stack+426, NULL, NULL, vrr_stack+223);
 _BUILD_p0i0(Data,vrr_stack+538, vrr_stack+398, vrr_stack+370, NULL, NULL, vrr_stack+141);
 am[0] = 0;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+622, vrr_stack+370, vrr_stack+426, vrr_stack+141, vrr_stack+223, NULL);
 am[0] = 0;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+658, vrr_stack+398, vrr_stack+370, vrr_stack+187, vrr_stack+141, NULL);
 _BUILD_00p0(Data,vrr_stack+30, Data->F+8, Data->F+9, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+33, vrr_stack+21, vrr_stack+30, Data->F+7, Data->F+8, NULL);
 _BUILD_00f0(Data,vrr_stack+39, vrr_stack+24, vrr_stack+33, vrr_stack+162, vrr_stack+21, NULL);
 _BUILD_00g0(Data,vrr_stack+49, vrr_stack+165, vrr_stack+39, vrr_stack+15, vrr_stack+24, NULL);
 _BUILD_00h0(Data,vrr_stack+15, vrr_stack+0, vrr_stack+49, vrr_stack+65, vrr_stack+165, NULL);
 _BUILD_00i0(Data,vrr_stack+36, vrr_stack+75, vrr_stack+15, vrr_stack+208, vrr_stack+0, NULL);
 am[0] = 0;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+0, vrr_stack+426, vrr_stack+36, vrr_stack+223, vrr_stack+75, NULL);
 am[0] = 1;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+694, vrr_stack+622, vrr_stack+0, NULL, NULL, vrr_stack+426);
 am[0] = 1;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+802, vrr_stack+658, vrr_stack+622, NULL, NULL, vrr_stack+370);
 _BUILD_d0h0(Data,vrr_stack+910, vrr_stack+307, vrr_stack+244, vrr_stack+187, vrr_stack+141, vrr_stack+96);
   tmp = vrr_stack + 910;
   target_ptr = Libint->vrr_classes[2][5];
   for(i=0;i<126;i++)
     target_ptr[i] += tmp[i];
 _BUILD_d0i0(Data,vrr_stack+0, vrr_stack+538, vrr_stack+454, vrr_stack+398, vrr_stack+370, vrr_stack+244);
   tmp = vrr_stack + 0;
   target_ptr = Libint->vrr_classes[2][6];
   for(i=0;i<168;i++)
     target_ptr[i] += tmp[i];
 am[0] = 2;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+168, vrr_stack+802, vrr_stack+694, vrr_stack+658, vrr_stack+622, vrr_stack+454);
   tmp = vrr_stack + 168;
   target_ptr = Libint->vrr_classes[2][7];
   for(i=0;i<216;i++)
     target_ptr[i] += tmp[i];

}
