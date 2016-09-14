* simulation file template for Hibikino
****
* SPICE FET model
.lib 'mos_tt.lib'
mfet1 1 13 15 1 pch w=12u l=2u
mfet2 5 6 15 1 pch w=12u l=2u
mfet3 6 10 16 1 pch w=12u l=2u
mfet4 1 13 17 1 pch w=12u l=2u
mfet5 1 13 16 1 pch w=12u l=2u
mfet6 9 5 17 1 pch w=12u l=2u
mfet7 10 2 18 1 pch w=12u l=2u
mfet8 1 13 19 1 pch w=12u l=2u
mfet9 1 13 18 1 pch w=12u l=2u
mfet10 2 9 19 1 pch w=12u l=2u
mfet11 1 13 13 1 pch w=12u l=2u
mfet12 5 6 7 0 nch w=6u l=2u
mfet13 0 3 4 0 nch w=6u l=2u
mfet14 0 3 7 0 nch w=6u l=2u
mfet15 4 10 6 0 nch w=6u l=2u
mfet16 9 5 11 0 nch w=6u l=2u
mfet17 0 3 8 0 nch w=6u l=2u
mfet18 0 3 11 0 nch w=6u l=2u
mfet19 8 2 10 0 nch w=6u l=2u
mfet20 2 9 14 0 nch w=6u l=2u
mfet21 0 3 12 0 nch w=6u l=2u
mfet22 0 3 14 0 nch w=6u l=2u
mfet23 12 13 13 0 nch w=6u l=2u
** Net name table **
*$ CtrlInv.gex/Gnd	0
*$ VCOCtrl.gex/Gnd	0
*$ CtrlInv.gex/Vdd	1
*$ VCOCtrl.gex/Vdd	1
*$ Out	2
*$ Vctrl	3
****
vs 1 0 dc 5v
vc 3 0 dc 1v
.ic v(0) 0v
.ic v(2) 3v
.tran 1ns 500ns
.end
