#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <assert.h>

enum abilities{
	nessuna,
	super_force
};

char *daemon_names[]={"Carlorg", "Fraffrog", "Dio"};

char *ability_names[] = {"nessuna","Super Forza"};

typedef struct daemon_stat{
	char *name;
	
	int hp;
	int att;
	int spatt;
	int cop;
	int def;
	int spdef;
	int mass;

	enum abilities ab;
} daemon;

void print_daemon_stats(daemon *d){
	printf("--%s--\nHP:%d\nATT:%d\nSPATT:%d\nCOPERTURA:%d\nDIF:%d\nSPDIF:%d\nMASSA:%d\nABILITA:%s\n",d->name,d->hp,d->att,d->spatt,d->cop,d->def,d->spdef,d->mass,ability_names[d->ab]);
}

daemon *make_daemon(char *name, int hp, int att, int spatt, int cop, int def, int spdef, int mass, enum abilities ab){
	daemon *dmn = malloc(sizeof(daemon));
	assert(dmn != null)
	strcpy(dmn->name,name);
	dmn->hp = hp;
	dmn->att = att;
	dmn->spatt = spatt;
	dmn->cop = cop;
	dmn->def = def;
	dmn->spdef = spdef;
	dmn->mass = mass;
	dmn->ab = ab;
	return dmn; 
}

daemon *load_daemon(char num){
	
}

int main(int argc, char *argv[]){
	daemon starter = {daemon_names[0],10,10,22,31,12,0,100,super_force};
	print_daemon_stats(&starter);
	return 0;
}