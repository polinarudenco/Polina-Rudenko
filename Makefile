all: menu

menu: menu.o ind_ft_neg.o ind_lt_neg.o s_btwn_neg.o s_bf_n_af_neg.o
	gcc menu.o ind_ft_neg.o ind_lt_neg.o s_btwn_neg.o s_bf_n_af_neg.o -o menu

menu.o: menu.c 
	gcc -c menu.c -o menu.o

ind_ft_neg.o: ind_ft_neg.c
	gcc -c ind_ft_neg.c -o ind_ft_neg.o

ind_lt_neg.o: ind_lt_neg.c
	gcc -c ind_lt_neg.c -o ind_lt_neg.o

s_btwn_neg.o: s_btwn_neg.c ind_ft_neg.o ind_lt_neg.o
	gcc -c s_btwn_neg.c -o s_btwn_neg.o

s_bf_n_af_neg.o: s_bf_n_af_neg.c ind_ft_neg.o ind_lt_neg.o
	gcc -c s_bf_n_af_neg.c -o s_bf_n_af_neg.o

clean:
	rm -rf *.o menu
