TOP=cpu_sim
CC=nsl2vl
VCC=iverilog
NSLOPT=
VERIOPT=
LIBS=
SRC=
WAVE=cpu.gtkw

$(TOP).v: $(TOP).nsl
	$(CC) $(NSLOPT) -verisim2 -target $(TOP) $(TOP).nsl
$(TOP).vvp: $(TOP).v
	$(VCC) $(VERIOPT) -o $(TOP).vvp $(TOP).v
$(TOP).vcd: $(TOP).vvp
	vvp $(TOP).vvp
sim: $(TOP).vvp
	vvp $(TOP).vvp
gtkwave: $(TOP).vcd
	gtkwave $(TOP).vcd $(SIG) &
compile: $(TOP).nsl
clean:
	rm -f $(TOP).v $(TOP).vcd $(TOP).vvp
