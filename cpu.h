#ifndef CPU_H
#define CPU_H

declare cpu16
{
	input datai[16];
	output address[16];
	output datao[16];

#ifdef DEBUG_E
	output debug_z;
	output debug_s;
	output debug_i;
	output debug_d;
	output debug_m;
	output debug_x;
	output debug_pc[16];
	output debug_op[16];
	output debug_im[16];
	output debug_st[16];
	output debug_rega[16];
	output debug_regz[16];
#endif
	
	func_in startup();
	func_out mread(address) : datai;
	func_out mwrite(address, datao);
	func_out hlt();
}
declare inc16
{
	input a[16];
	output q[16];
	func_in exe(a) : q;
}
declare alu16
{
	input a[16];
	input b[16];
	input fn[4];
	output q[16];
	output z;
	func_in exe(a, b, fn);
}

#endif

