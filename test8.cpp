
#include <iostream>

#include "eurovision.h"

using std::cout;
using std::endl;
#include <fstream>
using std::ifstream;
using std::ofstream;
using std::cerr;
using std::endl;


void TEST8(){
    ofstream to("../test8myresult.txt");
    MainControl eurovision(140,3,4);
    Participant p1("greece","song_greece",126,"singer_greece");
    to<<p1<<endl;
    Participant p2("slovenia","song_slovenia",196,"singer_slovenia");
    to<<p2<<endl;
    Participant p3("france","song_france",201,"singer_france");
    to<<p3<<endl;
    Participant p4("ireland","song_ireland",119,"singer_ireland");
    to<<p4<<endl;
    Participant p5("spain","song_spain",109,"singer_spain");
    to<<p5<<endl;
    Participant p6("croatia","song_croatia",178,"singer_croatia");
    to<<p6<<endl;
    Participant p7("lithiania","song_lithiania",105,"singer_lithiania");
    to<<p7<<endl;
    Participant p8("belgium","song_belgium",124,"singer_belgium");
    to<<p8<<endl;
    Participant p9("luxembourg","song_luxembourg",116,"singer_luxembourg");
    to<<p9<<endl;
    Participant p10("andora","song_andora",100,"singer_andora");
    to<<p10<<endl;
    Participant p11("france","song_france",112,"singer_france");
    to<<p11<<endl;
    Participant p12("serbia","song_serbia",154,"singer_serbia");
    to<<p12<<endl;
    Participant p13("moldova","song_moldova",222,"singer_moldova");
    to<<p13<<endl;
    Participant p14("france","song_france",151,"singer_france");
    to<<p14<<endl;
    Participant p15("turkey","song_turkey",153,"singer_turkey");
    to<<p15<<endl;
    Participant p16("ireland","song_ireland",144,"singer_ireland");
    to<<p16<<endl;
    Participant p17("georgia","song_georgia",147,"singer_georgia");
    to<<p17<<endl;
    Participant p18("serbia","song_serbia",230,"singer_serbia");
    to<<p18<<endl;
    Participant p19("austria","song_austria",228,"singer_austria");
    to<<p19<<endl;
    Participant p20("belarus","song_belarus",115,"singer_belarus");
    to<<p20<<endl;
    Participant p21("cyrpus","song_cyrpus",161,"singer_cyrpus");
    to<<p21<<endl;
    Participant p22("bulgaria","song_bulgaria",104,"singer_bulgaria");
    to<<p22<<endl;
    Participant p23("andora","song_andora",108,"singer_andora");
    to<<p23<<endl;
    Participant p24("kazakhastan","song_kazakhastan",132,"singer_kazakhastan");
    to<<p24<<endl;
    Participant p25("hungary","song_hungary",205,"singer_hungary");
    to<<p25<<endl;
    Participant p26("georgia","song_georgia",125,"singer_georgia");
    to<<p26<<endl;
    Participant p27("turkey","song_turkey",218,"singer_turkey");
    to<<p27<<endl;
    Participant p28("france","song_france",127,"singer_france");
    to<<p28<<endl;
    Participant p29("belgium","song_belgium",200,"singer_belgium");
    to<<p29<<endl;
    Participant p30("serbia","song_serbia",159,"singer_serbia");
    to<<p30<<endl;
    Participant p31("bulgaria","song_bulgaria",211,"singer_bulgaria");
    to<<p31<<endl;
    Participant p32("luxembourg","song_luxembourg",221,"singer_luxembourg");
    to<<p32<<endl;
    Participant p33("france","song_france",114,"singer_france");
    to<<p33<<endl;
    Participant p34("greece","song_greece",147,"singer_greece");
    to<<p34<<endl;
    Participant p35("estonia","song_estonia",218,"singer_estonia");
    to<<p35<<endl;
    Participant p36("italy","song_italy",184,"singer_italy");
    to<<p36<<endl;
    p19.update("new_song",0,"");
    p11.update("new_song",0,"");
    p32.update("new_song",0,"");
    p32.update("new_song",0,"");
    p3.update("new_song",0,"newsinger");
    p34.update("new_song",0,"newsinger");
    p5.update("new_song",0,"newsinger");
    p27.update("new_song",0,"newsinger");
    p4.update("new_song",178,"newsinger");
    p2.update("new_song",106,"newsinger");
    p6.update("new_song",165,"newsinger");
    p3.update("new_song",132,"newsinger");
    to<<eurovision<<endl;
    eurovision+=p31;
    eurovision+=p14;
    eurovision+=p5;
    eurovision+=p34;
    eurovision+=p34;
    eurovision+=p1;
    eurovision+=p34;
    eurovision+=p14;
    eurovision+=p8;
    eurovision+=p29;
    eurovision+=p32;
    eurovision+=p14;
    eurovision+=p18;
    eurovision+=p33;
    to<<eurovision<<endl;
    eurovision+=p24;
    eurovision-=p5;
    eurovision+=p23;
    eurovision-=p9;
    eurovision+=p35;
    eurovision+=p36;
    eurovision+=p35;
    eurovision-=p8;
    eurovision+=p14;
    eurovision+=p33;
    eurovision+=p35;
    eurovision-=p15;
    eurovision+=p19;
    eurovision+=p17;
    eurovision-=p25;
    eurovision+=p35;
    eurovision+=p29;
    eurovision-=p16;
    eurovision-=p19;
    eurovision-=p18;
    eurovision+=p10;
    eurovision+=p18;
    eurovision-=p7;
    eurovision-=p12;
    to<<eurovision<<endl;
    MainControl::Iterator i;
    for (i = eurovision.begin(); i<eurovision.end(); ++i)
        to << *i << endl;
    for (i = eurovision.begin(); !(i==eurovision.end()); ++i)
        to << *i << endl;
    eurovision.setPhase(Contest);
    eurovision.setPhase(Voting);
    eurovision.participate("ireland");
    eurovision.participate("moldova");
    eurovision.participate("france");
    eurovision.participate("luxembourg");
    eurovision.participate("malta");
    eurovision.participate("croatia");
    eurovision.participate("belgium");
    eurovision.participate("austria");
    eurovision.participate("bulgaria");
    eurovision.participate("norway");
    eurovision.participate("malta");
    eurovision.participate("armenia");
    eurovision.participate("turkey");
    eurovision.participate("serbia");
    p17.update("",120,"");
    to<<p17<<endl;
    p13.update("",120,"");
    to<<p13<<endl;
    p35.update("",120,"");
    to<<p35<<endl;
    p27.update("",120,"");
    to<<p27<<endl;
    p14.update("",120,"");
    to<<p14<<endl;
    p13.update("",120,"");
    to<<p13<<endl;
    p17.update("",120,"");
    to<<p17<<endl;
    p23.update("",120,"");
    to<<p23<<endl;
    p8.update("",120,"");
    to<<p8<<endl;
    p15.update("",120,"");
    to<<p15<<endl;
    p2.update("",120,"");
    to<<p2<<endl;
    p11.update("",120,"");
    to<<p11<<endl;
    p3.update("",120,"");
    to<<p3<<endl;
    p21.update("",120,"");
    to<<p21<<endl;
    Voter v1("andora",Regular);
    Voter v2("belgium");
    Voter v3("serbia",Regular);
    Voter v4("russia",Judge);
    Voter v5("croatia");
    Voter v6("croatia");
    Voter v7("latvia");
    Voter v8("russia");
    Voter v9("armenia",Judge);
    Voter v10("france");
    Voter v11("malta");
    Voter v12("greece",Judge);
    Voter v13("lithiania");
    Voter v14("france",Regular);
    Voter v15("sweden",Judge);
    Voter v16("croatia");
    Voter v17("latvia",Judge);
    Voter v18("croatia");
    Voter v19("russia",Regular);
    Voter v20("ukraine");
    Voter v21("germany",Judge);
    Voter v22("croatia",Judge);
    Voter v23("italy",Regular);
    Voter v24("bulgaria");
    Voter v25("uk",Judge);
    Voter v26("israel",Regular);
    Voter v27("estonia",Judge);
    Voter v28("moldova",Judge);
    Voter v29("greece");
    Voter v30("france");
    Voter v31("belgium",Regular);
    Voter v32("france");
    Voter v33("germany");
    Voter v34("germany",Judge);
    Voter v35("croatia",Regular);
    Voter v36("lithiania",Judge);
    Voter v37("hungary",Judge);
    Voter v38("slovenia");
    Voter v39("ireland",Judge);
    Voter v40("malta");
    Voter v41("latvia");
    Voter v42("moldova",Judge);
    Voter v43("estonia",Judge);
    Voter v44("netherlands",Judge);
    Voter v45("israel");
    Voter v46("italy");
    Voter v47("armenia",Regular);
    Voter v48("luxembourg",Regular);
    Voter v49("andora",Judge);
    Voter v50("ukraine");
    Voter v51("sweden",Judge);
    Voter v52("greece");
    Voter v53("croatia",Regular);
    Voter v54("lithiania",Judge);
    Voter v55("italy",Regular);
    Voter v56("malta",Judge);
    Voter v57("uk",Judge);
    Voter v58("georgia",Regular);
    Voter v59("ukraine",Judge);
    Voter v60("switzerland",Judge);
    Voter v61("israel",Judge);
    Voter v62("sweden",Judge);
    Voter v63("bosnia",Regular);
    Voter v64("germany");
    Voter v65("bosnia",Judge);
    Voter v66("ukraine");
    Voter v67("georgia");
    Voter v68("slovakia");
    Voter v69("spain",Regular);
    Voter v70("kazakhastan",Regular);
    Voter v71("ireland",Judge);
    Voter v72("hungary",Regular);
    Voter v73("serbia",Regular);
    Voter v74("switzerland",Regular);
    Voter v75("andora",Judge);
    Voter v76("slovenia");
    Voter v77("latvia",Judge);
    Voter v78("russia");
    Voter v79("slovenia",Regular);
    Voter v80("norway");
    Voter v81("lithiania");
    Voter v82("turkey",Regular);
    Voter v83("lithiania",Regular);
    Voter v84("netherlands");
    Voter v85("austria",Regular);
    Voter v86("spain",Judge);
    Voter v87("israel");
    Voter v88("georgia",Judge);
    Voter v89("luxembourg",Regular);
    Voter v90("greece",Judge);
    Voter v91("luxembourg",Regular);
    Voter v92("slovenia");
    Voter v93("russia",Judge);
    Voter v94("kazakhastan");
    Voter v95("belgium");
    Voter v96("france");
    Voter v97("belarus");
    Voter v98("armenia",Regular);
    Voter v99("italy",Judge);
    to<<eurovision<<endl;
    eurovision+=Vote(v86,"russia","netherlands","spain","bosnia");
    eurovision+=Vote(v3,"norway");
    eurovision+=Vote(v77,"turkey");
    eurovision+=Vote(v11,"greece");
    eurovision+=Vote(v53,"cyrpus");
    eurovision+=Vote(v53,"netherlands");
    eurovision+=Vote(v33,"latvia");
    eurovision+=Vote(v50,"serbia");
    eurovision+=Vote(v57,"slovakia","spain","switzerland");
    eurovision+=Vote(v29,"ireland");
    eurovision+=Vote(v38,"estonia");
    eurovision+=Vote(v8,"greece");
    eurovision+=Vote(v62,"switzerland","estonia","hungary","serbia","netherlands","israel","bosnia","lithiania","germany");
    eurovision+=Vote(v61,"germany","belarus","hungary","slovakia","turkey","ukraine");
    eurovision+=Vote(v47,"moldova");
    eurovision+=Vote(v81,"bosnia");
    eurovision+=Vote(v93,"lithiania","hungary","kazakhastan","serbia");
    eurovision+=Vote(v43,"bulgaria","croatia","sweden","austria","netherlands","georgia","bosnia","cyrpus");
    eurovision+=Vote(v6,"turkey");
    eurovision+=Vote(v85,"israel");
    eurovision+=Vote(v58,"netherlands");
    eurovision+=Vote(v73,"croatia");
    eurovision+=Vote(v65,"moldova","croatia","andora","georgia","turkey","israel","hungary");
    eurovision+=Vote(v89,"austria");
    eurovision+=Vote(v30,"switzerland");
    eurovision+=Vote(v95,"sweden");
    eurovision+=Vote(v64,"latvia");
    eurovision+=Vote(v77,"kazakhastan","belarus","malta","ukraine","andora","luxembourg","russia","italy");
    eurovision+=Vote(v64,"bosnia");
    eurovision+=Vote(v7,"malta");
    eurovision+=Vote(v71,"israel","slovenia","hungary","latvia","germany","turkey","belgium","france");
    eurovision+=Vote(v91,"moldova");
    eurovision+=Vote(v91,"serbia");
    eurovision+=Vote(v6,"cyrpus");
    eurovision+=Vote(v57,"andora","netherlands","switzerland","estonia","norway","germany","belarus");
    eurovision+=Vote(v11,"luxembourg");
    eurovision+=Vote(v71,"france","spain","italy","belgium","croatia","slovakia","kazakhastan","russia","ukraine");
    eurovision+=Vote(v92,"ireland");
    eurovision+=Vote(v10,"italy");
    eurovision+=Vote(v10,"andora");
    eurovision+=Vote(v51,"bosnia","russia","ukraine","serbia","switzerland");
    eurovision+=Vote(v17,"lithiania","sweden","slovenia","luxembourg");
    eurovision+=Vote(v56,"israel","luxembourg","italy","andora","belarus","latvia");
    eurovision+=Vote(v5,"ukraine");
    eurovision+=Vote(v93,"turkey","bulgaria","greece","italy","georgia","hungary","switzerland");
    eurovision+=Vote(v52,"ireland");
    eurovision+=Vote(v51,"hungary","sweden","georgia");
    eurovision+=Vote(v44,"germany","france");
    eurovision+=Vote(v23,"greece");
    eurovision+=Vote(v48,"ireland");
    eurovision+=Vote(v93,"belarus","latvia","austria","spain","hungary");
    eurovision+=Vote(v1,"germany");
    eurovision+=Vote(v1,"estonia");
    eurovision+=Vote(v42,"moldova","ireland","austria","israel","belarus","armenia","croatia","hungary");
    eurovision+=Vote(v4,"bosnia","cyrpus","norway","switzerland","bulgaria","estonia","france");
    eurovision+=Vote(v79,"slovakia");
    eurovision+=Vote(v19,"austria");
    eurovision+=Vote(v61,"moldova","luxembourg","italy","ireland","netherlands");
    eurovision+=Vote(v63,"france");
    eurovision+=Vote(v25,"bosnia","austria","estonia");
    eurovision+=Vote(v19,"georgia");
    eurovision+=Vote(v12,"italy","belgium","hungary","estonia","spain","cyrpus","kazakhastan");
    eurovision+=Vote(v67,"estonia");
    eurovision+=Vote(v16,"slovakia");
    eurovision+=Vote(v86,"slovakia","ukraine","germany","latvia","france","hungary");
    eurovision+=Vote(v4,"armenia","germany","belgium");
    eurovision+=Vote(v20,"hungary");
    eurovision+=Vote(v62,"luxembourg","ireland","sweden","belarus","estonia","malta","bulgaria");
    eurovision+=Vote(v42,"belarus","bosnia");
    eurovision+=Vote(v65,"georgia");
    eurovision+=Vote(v60,"belgium","moldova","armenia","latvia","bulgaria","ukraine","andora");
    eurovision+=Vote(v62,"georgia","cyrpus","croatia","kazakhastan");
    eurovision+=Vote(v70,"lithiania");
    eurovision+=Vote(v47,"israel");
    eurovision+=Vote(v7,"germany");
    eurovision+=Vote(v37,"norway","cyrpus","georgia","andora","belarus","slovenia");
    eurovision+=Vote(v94,"israel");
    eurovision+=Vote(v23,"moldova");
    eurovision+=Vote(v23,"greece");
    eurovision+=Vote(v86,"belarus","serbia","estonia","kazakhastan","georgia","russia");
    eurovision+=Vote(v93,"israel","bulgaria","sweden","cyrpus","greece","serbia","croatia","belarus");
    eurovision+=Vote(v37,"malta","ukraine","moldova");
    eurovision+=Vote(v20,"italy");
    eurovision+=Vote(v54,"ukraine","armenia","norway","turkey");
    eurovision+=Vote(v51,"lithiania","switzerland","kazakhastan","austria");
    eurovision+=Vote(v16,"netherlands");
    eurovision+=Vote(v60,"switzerland","bulgaria","israel","malta","russia","bosnia");
    eurovision+=Vote(v94,"estonia");
    eurovision+=Vote(v75,"sweden","slovenia","lithiania","ukraine","netherlands","serbia","ireland","bulgaria","norway");
    eurovision+=Vote(v29,"bosnia");
    eurovision+=Vote(v6,"netherlands");
    eurovision+=Vote(v99,"andora","norway","latvia");
    eurovision+=Vote(v47,"ireland");
    eurovision+=Vote(v43,"netherlands","austria","italy");
    eurovision+=Vote(v87,"italy");
    eurovision+=Vote(v24,"italy");
    eurovision+=Vote(v9,"hungary","cyrpus","malta","lithiania","austria","spain");
    eurovision+=Vote(v92,"andora");
    eurovision+=Vote(v14,"serbia");
    eurovision+=Vote(v24,"croatia");
    eurovision+=Vote(v96,"switzerland");
    eurovision+=Vote(v95,"estonia");
    eurovision+=Vote(v25,"serbia","france");
    eurovision+=Vote(v58,"sweden");
    eurovision+=Vote(v81,"sweden");
    eurovision+=Vote(v79,"russia");
    eurovision+=Vote(v80,"slovakia");
    eurovision+=Vote(v57,"belarus","croatia","slovakia","norway","spain");
    eurovision+=Vote(v93,"ireland","georgia","cyrpus","latvia","kazakhastan","slovakia","andora","greece","slovenia");
    eurovision+=Vote(v13,"germany");
    eurovision+=Vote(v34,"switzerland","hungary","italy","estonia","lithiania","austria","latvia");
    eurovision+=Vote(v53,"croatia");
    eurovision+=Vote(v24,"cyrpus");
    eurovision+=Vote(v98,"switzerland");
    eurovision+=Vote(v32,"serbia");
    eurovision+=Vote(v44,"croatia","spain","israel","france","greece","kazakhastan");
    eurovision+=Vote(v82,"malta");
    eurovision+=Vote(v49,"switzerland");
    eurovision+=Vote(v93,"armenia");
    eurovision+=Vote(v42,"cyrpus","germany","italy");
    eurovision+=Vote(v16,"ukraine");
    eurovision+=Vote(v14,"sweden");
    eurovision+=Vote(v5,"serbia");
    eurovision+=Vote(v22,"greece");
    eurovision+=Vote(v3,"germany");
    eurovision+=Vote(v37,"turkey","sweden","hungary","estonia");
    eurovision+=Vote(v43,"austria","turkey","hungary","israel");
    eurovision+=Vote(v42,"germany","belgium","moldova","latvia","belarus","slovenia","spain");
    eurovision+=Vote(v50,"italy");
    eurovision+=Vote(v53,"luxembourg");
    eurovision+=Vote(v87,"switzerland");
    eurovision+=Vote(v78,"estonia");
    eurovision+=Vote(v14,"malta");
    eurovision+=Vote(v26,"slovenia");
    eurovision+=Vote(v28,"ireland","croatia","bosnia","hungary","serbia","georgia","malta");
    eurovision+=Vote(v8,"belgium");
    eurovision+=Vote(v61,"latvia","bulgaria","france","armenia","kazakhastan");
    eurovision+=Vote(v24,"netherlands");
    eurovision+=Vote(v77,"bosnia","georgia","belgium","hungary","italy","latvia","croatia","luxembourg","estonia");
    eurovision+=Vote(v53,"bosnia");
    eurovision+=Vote(v92,"croatia");
    eurovision+=Vote(v97,"lithiania");
    eurovision+=Vote(v6,"italy");
    eurovision+=Vote(v90,"lithiania","spain","france","georgia");
    eurovision+=Vote(v68,"slovenia");
    eurovision+=Vote(v43,"bosnia","croatia","sweden","slovakia","france","russia");
    eurovision+=Vote(v27,"germany","spain","estonia","belarus","ireland","hungary","cyrpus");
    eurovision+=Vote(v50,"georgia");
    eurovision+=Vote(v1,"greece");
    eurovision+=Vote(v60,"hungary","norway","italy");
    eurovision+=Vote(v64,"norway");
    eurovision+=Vote(v35,"georgia");
    eurovision+=Vote(v74,"belgium");
    eurovision+=Vote(v23,"austria");
    eurovision+=Vote(v84,"sweden");
    eurovision+=Vote(v71,"greece","bosnia","israel","italy","sweden","armenia");
    eurovision+=Vote(v66,"turkey");
    eurovision+=Vote(v70,"norway");
    eurovision+=Vote(v10,"austria");
    eurovision+=Vote(v2,"belgium");
    eurovision+=Vote(v21,"norway","switzerland","spain","russia");
    eurovision+=Vote(v58,"slovakia");
    eurovision+=Vote(v13,"moldova");
    eurovision+=Vote(v94,"slovakia");
    eurovision+=Vote(v82,"luxembourg");
    eurovision+=Vote(v17,"ireland","serbia","estonia","slovakia","moldova");
    eurovision+=Vote(v99,"bulgaria","belgium","russia");
    eurovision+=Vote(v17,"malta","belarus","austria","france");
    eurovision+=Vote(v34,"turkey","georgia","belarus","greece","slovenia","netherlands","bosnia");
    eurovision+=Vote(v96,"bosnia");
    eurovision+=Vote(v26,"bulgaria");
    eurovision+=Vote(v80,"sweden");
    eurovision+=Vote(v31,"sweden");
    eurovision+=Vote(v4,"latvia","russia","switzerland","turkey");
    eurovision+=Vote(v90,"france","georgia","malta","slovakia","latvia","austria");
    eurovision+=Vote(v52,"estonia");
    eurovision+=Vote(v73,"spain");
    eurovision+=Vote(v53,"bulgaria");
    eurovision+=Vote(v19,"andora");
    eurovision+=Vote(v65,"austria","bulgaria","germany");
    eurovision+=Vote(v48,"germany");
    eurovision+=Vote(v11,"switzerland");
    eurovision+=Vote(v24,"croatia");
    eurovision+=Vote(v43,"moldova","russia","greece","croatia");
    eurovision+=Vote(v15,"netherlands","greece","slovenia","lithiania","norway","israel","luxembourg");
    eurovision+=Vote(v61,"cyrpus");
    eurovision+=Vote(v54,"austria","belgium","bulgaria","switzerland","norway","lithiania","estonia","slovakia");
    eurovision+=Vote(v98,"greece");
    eurovision+=Vote(v47,"moldova");
    eurovision+=Vote(v25,"latvia","luxembourg","kazakhastan","hungary","russia");
    eurovision+=Vote(v66,"slovenia");
    eurovision+=Vote(v13,"estonia");
    eurovision+=Vote(v51,"austria","cyrpus","andora","estonia","slovenia","turkey","norway");
    eurovision+=Vote(v29,"ireland");
    eurovision+=Vote(v93,"malta","lithiania","turkey","luxembourg");
    eurovision+=Vote(v37,"ireland","slovenia","russia");
    eurovision+=Vote(v67,"luxembourg");
    eurovision+=Vote(v58,"russia");
    eurovision+=Vote(v86,"bosnia","france");
    p27.update("shouldnot",143,"error");
    to<<p27<<endl;
    p17.update("shouldnot",143,"error");
    to<<p17<<endl;
    p34.update("shouldnot",143,"error");
    to<<p34<<endl;
    p34.update("shouldnot",143,"error");
    to<<p34<<endl;
    p25.update("shouldnot",143,"error");
    to<<p25<<endl;
    p22.update("shouldnot",143,"error");
    to<<p22<<endl;
    p31.update("shouldnot",143,"error");
    to<<p31<<endl;
    p34.update("shouldnot",143,"error");
    to<<p34<<endl;
    p26.update("shouldnot",143,"error");
    to<<p26<<endl;
    p10.update("shouldnot",143,"error");
    to<<p10<<endl;
    p14.update("shouldnot",143,"error");
    to<<p14<<endl;
    p33.update("shouldnot",143,"error");
    to<<p33<<endl;
    p25.update("shouldnot",143,"error");
    to<<p25<<endl;
    p10.update("shouldnot",143,"error");
    to<<p10<<endl;
    to<<eurovision<<endl;
    to<<eurovision(1,Regular)<<endl;
    to<<eurovision(2,Regular)<<endl;
    to<<eurovision(3,Regular)<<endl;
    to<<eurovision(4,Regular)<<endl;
    to<<eurovision(5,Regular)<<endl;
    to<<eurovision(6,Regular)<<endl;
    to<<eurovision(7,Regular)<<endl;
    to<<eurovision(8,Regular)<<endl;
    to<<eurovision(9,Regular)<<endl;
    to<<eurovision(10,Regular)<<endl;
    to<<eurovision(1,Judge)<<endl;
    to<<eurovision(2,Judge)<<endl;
    to<<eurovision(3,Judge)<<endl;
    to<<eurovision(4,Judge)<<endl;
    to<<eurovision(5,Judge)<<endl;
    to<<eurovision(6,Judge)<<endl;
    to<<eurovision(7,Judge)<<endl;
    to<<eurovision(8,Judge)<<endl;
    to<<eurovision(9,Judge)<<endl;
    to<<eurovision(10,Judge)<<endl;
    to<<eurovision(1,All)<<endl;
    to<<eurovision(2,All)<<endl;
    to<<eurovision(3,All)<<endl;
    to<<eurovision(4,All)<<endl;
    to<<eurovision(5,All)<<endl;
    to<<eurovision(6,All)<<endl;
    to<<eurovision(7,All)<<endl;
    to<<eurovision(8,All)<<endl;
    to<<eurovision(9,All)<<endl;
    to<<eurovision(10,All)<<endl;
    to<<eurovision<<endl;

}