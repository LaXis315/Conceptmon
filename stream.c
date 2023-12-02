//file stream test

#include <stdio.h>

int main(){
	FILE *file = fopen("daemons_list","r");
	if(file != NULL){
		while(!feof(file)){
			int id;
			char nome[15];
			int hp;
			int att;
			int spatt;
			int cop;
			int dif;
			int spdif;
			int mass;
			char ab[15];
			fscanf(file, "%i %s %i %i %i %i %i %i %i %s",&id, nome, &hp, &att, &spatt, &cop, &dif, &spdif, &mass, ab);
			printf("--%s--\nHP:%d\nATT:%d\nSPATT:%d\nCOPERTURA:%d\nDIF:%d\nSPDIF:%d\nMASSA:%d\nABILITA:%s\n",nome,hp,att,spatt,cop,dif,spdif,mass,ab);
		}
	}

	fclose(file);
	return 0;
}