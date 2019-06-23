
#include <iostream>

#include "eurovision.h"

using std::cout;
using std::endl;
#include <fstream>
using std::ifstream;
using std::ofstream;
using std::cerr;
using std::endl;


void TEST2() {
    ofstream to("../test2myresult.txt");
    MainControl eurovision;
    Participant p1("israel","song_israel",131,"singer_israel");
    to<<p1<<endl;
    Participant p2("georgia","song_georgia",182,"singer_georgia");
    to<<p2<<endl;
    Participant p3("greece","song_greece",216,"singer_greece");
    to<<p3<<endl;
    Participant p4("greece","song_greece",211,"singer_greece");
    to<<p4<<endl;
    Participant p5("croatia","song_croatia",224,"singer_croatia");
    to<<p5<<endl;
    Participant p6("malta","song_malta",212,"singer_malta");
    to<<p6<<endl;
    Participant p7("malta","song_malta",168,"singer_malta");
    to<<p7<<endl;
    Participant p8("russia","song_russia",107,"singer_russia");
    to<<p8<<endl;
    Participant p9("belarus","song_belarus",183,"singer_belarus");
    to<<p9<<endl;
    Participant p10("moldova","song_moldova",193,"singer_moldova");
    to<<p10<<endl;
    Participant p11("estonia","song_estonia",122,"singer_estonia");
    to<<p11<<endl;
    Participant p12("belarus","song_belarus",173,"singer_belarus");
    to<<p12<<endl;
    Participant p13("turkey","song_turkey",167,"singer_turkey");
    to<<p13<<endl;
    Participant p14("lithiania","song_lithiania",184,"singer_lithiania");
    to<<p14<<endl;
    Participant p15("bulgaria","song_bulgaria",129,"singer_bulgaria");
    to<<p15<<endl;
    Participant p16("malta","song_malta",228,"singer_malta");
    to<<p16<<endl;
    Participant p17("croatia","song_croatia",215,"singer_croatia");
    to<<p17<<endl;
    Participant p18("greece","song_greece",194,"singer_greece");
    to<<p18<<endl;
    Participant p19("turkey","song_turkey",173,"singer_turkey");
    to<<p19<<endl;
    Participant p20("estonia","song_estonia",129,"singer_estonia");
    to<<p20<<endl;
    Participant p21("austria","song_austria",123,"singer_austria");
    to<<p21<<endl;
    Participant p22("italy","song_italy",112,"singer_italy");
    to<<p22<<endl;
    Participant p23("switzerland","song_switzerland",164,"singer_switzerland");
    to<<p23<<endl;
    Participant p24("georgia","song_georgia",209,"singer_georgia");
    to<<p24<<endl;
    Participant p25("austria","song_austria",164,"singer_austria");
    to<<p25<<endl;
    Participant p26("cyrpus","song_cyrpus",116,"singer_cyrpus");
    to<<p26<<endl;
    Participant p27("russia","song_russia",220,"singer_russia");
    to<<p27<<endl;
    Participant p28("latvia","song_latvia",128,"singer_latvia");
    to<<p28<<endl;
    Participant p29("serbia","song_serbia",200,"singer_serbia");
    to<<p29<<endl;
    Participant p30("bosnia","song_bosnia",109,"singer_bosnia");
    to<<p30<<endl;
    Participant p31("ireland","song_ireland",153,"singer_ireland");
    to<<p31<<endl;
    Participant p32("norway","song_norway",147,"singer_norway");
    to<<p32<<endl;
    Participant p33("belgium","song_belgium",141,"singer_belgium");
    to<<p33<<endl;
    Participant p34("ukraine","song_ukraine",228,"singer_ukraine");
    to<<p34<<endl;
    Participant p35("italy","song_italy",132,"singer_italy");
    to<<p35<<endl;
    Participant p36("austria","song_austria",189,"singer_austria");
    to<<p36<<endl;
    p21.update("new_song",0,"");
    p10.update("new_song",0,"");
    p32.update("new_song",0,"");
    p1.update("new_song",0,"");
    p24.update("new_song",0,"newsinger");
    p31.update("new_song",0,"newsinger");
    p18.update("new_song",0,"newsinger");
    p36.update("new_song",0,"newsinger");
    p26.update("new_song",118,"newsinger");
    p8.update("new_song",114,"newsinger");
    p25.update("new_song",121,"newsinger");
    p10.update("new_song",108,"newsinger");
    to<<eurovision<<endl;
    eurovision+=p9;
    eurovision+=p13;
    eurovision+=p36;
    eurovision+=p9;
    eurovision+=p28;
    eurovision+=p27;
    eurovision+=p24;
    eurovision+=p7;
    eurovision+=p29;
    eurovision+=p30;
    eurovision+=p8;
    eurovision+=p33;
    eurovision+=p6;
    eurovision+=p8;
    to<<eurovision<<endl;
    eurovision+=p8;
    eurovision-=p14;
    eurovision-=p36;
    eurovision+=p32;
    eurovision+=p12;
    eurovision+=p31;
    eurovision+=p22;
    eurovision+=p36;
    eurovision-=p23;
    eurovision-=p11;
    eurovision-=p34;
    eurovision-=p8;
    eurovision-=p3;
    eurovision-=p11;
    eurovision-=p27;
    eurovision+=p6;
    eurovision+=p30;
    eurovision+=p14;
    eurovision-=p14;
    eurovision-=p29;
    eurovision+=p34;
    eurovision-=p35;
    eurovision-=p31;
    eurovision-=p8;
    to<<eurovision<<endl;
    MainControl::Iterator i;
    for (i = eurovision.begin(); i<eurovision.end(); ++i)
        to << *i << endl;
    for (i = eurovision.begin(); !(i==eurovision.end()); ++i)
        to << *i << endl;
    eurovision.setPhase(Contest);
    eurovision.setPhase(Voting);
    eurovision.participate("austria");
    eurovision.participate("netherlands");
    eurovision.participate("latvia");
    eurovision.participate("serbia");
    eurovision.participate("sweden");
    eurovision.participate("belarus");
    eurovision.participate("ireland");
    eurovision.participate("belgium");
    eurovision.participate("italy");
    eurovision.participate("serbia");
    eurovision.participate("lithiania");
    eurovision.participate("belgium");
    eurovision.participate("serbia");
    eurovision.participate("sweden");
    p18.update("",120,"");
    to<<p18<<endl;
    p12.update("",120,"");
    to<<p12<<endl;
    p31.update("",120,"");
    to<<p31<<endl;
    p18.update("",120,"");
    to<<p18<<endl;
    p14.update("",120,"");
    to<<p14<<endl;
    p9.update("",120,"");
    to<<p9<<endl;
    p4.update("",120,"");
    to<<p4<<endl;
    p24.update("",120,"");
    to<<p24<<endl;
    p5.update("",120,"");
    to<<p5<<endl;
    p3.update("",120,"");
    to<<p3<<endl;
    p5.update("",120,"");
    to<<p5<<endl;
    p2.update("",120,"");
    to<<p2<<endl;
    p35.update("",120,"");
    to<<p35<<endl;
    p35.update("",120,"");
    to<<p35<<endl;
    Voter v1("lithiania",Judge);
    Voter v2("lithiania",Regular);
    Voter v3("israel");
    Voter v4("germany");
    Voter v5("slovenia");
    Voter v6("sweden",Judge);
    Voter v7("bulgaria");
    Voter v8("austria",Judge);
    Voter v9("belarus",Judge);
    Voter v10("netherlands",Regular);
    Voter v11("bulgaria",Regular);
    Voter v12("georgia");
    Voter v13("uk",Judge);
    Voter v14("latvia",Regular);
    Voter v15("france",Judge);
    Voter v16("moldova",Judge);
    Voter v17("belgium");
    Voter v18("israel");
    Voter v19("italy",Judge);
    Voter v20("bosnia",Judge);
    Voter v21("france");
    Voter v22("austria",Judge);
    Voter v23("ireland",Regular);
    Voter v24("bulgaria");
    Voter v25("bulgaria");
    Voter v26("france");
    Voter v27("france",Judge);
    Voter v28("greece",Judge);
    Voter v29("slovakia");
    Voter v30("bosnia");
    Voter v31("estonia",Regular);
    Voter v32("germany",Regular);
    Voter v33("russia",Regular);
    Voter v34("georgia",Regular);
    Voter v35("italy");
    Voter v36("estonia");
    Voter v37("greece");
    Voter v38("italy",Regular);
    Voter v39("estonia",Judge);
    Voter v40("austria",Regular);
    Voter v41("bosnia",Regular);
    Voter v42("lithiania",Judge);
    Voter v43("serbia");
    Voter v44("russia");
    Voter v45("italy",Judge);
    Voter v46("norway",Judge);
    Voter v47("greece");
    Voter v48("bosnia");
    Voter v49("austria",Judge);
    Voter v50("estonia",Judge);
    Voter v51("russia",Judge);
    Voter v52("israel");
    Voter v53("norway",Regular);
    Voter v54("armenia");
    Voter v55("cyrpus",Regular);
    Voter v56("lithiania",Judge);
    Voter v57("lithiania",Judge);
    Voter v58("israel");
    Voter v59("georgia",Judge);
    Voter v60("kazakhastan",Regular);
    Voter v61("bosnia",Judge);
    Voter v62("austria",Regular);
    Voter v63("uk",Regular);
    Voter v64("latvia");
    Voter v65("france",Judge);
    Voter v66("ireland",Regular);
    Voter v67("croatia",Judge);
    Voter v68("greece",Regular);
    Voter v69("italy");
    Voter v70("kazakhastan",Regular);
    Voter v71("turkey",Regular);
    Voter v72("hungary",Regular);
    Voter v73("france",Regular);
    Voter v74("ireland",Regular);
    Voter v75("bosnia");
    Voter v76("estonia",Regular);
    Voter v77("latvia",Judge);
    Voter v78("ukraine",Regular);
    Voter v79("sweden");
    Voter v80("malta",Regular);
    Voter v81("estonia");
    Voter v82("germany",Judge);
    Voter v83("belgium",Regular);
    Voter v84("austria",Regular);
    Voter v85("luxembourg");
    Voter v86("moldova",Judge);
    Voter v87("sweden",Judge);
    Voter v88("kazakhastan");
    Voter v89("bulgaria",Regular);
    Voter v90("bosnia",Regular);
    Voter v91("luxembourg");
    Voter v92("bosnia");
    Voter v93("norway",Regular);
    Voter v94("malta",Regular);
    Voter v95("croatia",Judge);
    Voter v96("france",Regular);
    Voter v97("ukraine",Judge);
    Voter v98("france",Regular);
    Voter v99("greece");
    to<<eurovision<<endl;
    eurovision+=Vote(v90,"hungary");
    eurovision+=Vote(v49,"turkey","serbia","kazakhastan","luxembourg");
    eurovision+=Vote(v97,"serbia","france","malta","lithiania","greece","georgia","italy","netherlands","belgium");
    eurovision+=Vote(v8,"luxembourg");
    eurovision+=Vote(v52,"kazakhastan");
    eurovision+=Vote(v63,"hungary");
    eurovision+=Vote(v10,"kazakhastan");
    eurovision+=Vote(v89,"ireland");
    eurovision+=Vote(v32,"kazakhastan");
    eurovision+=Vote(v74,"kazakhastan");
    eurovision+=Vote(v72,"ukraine");
    eurovision+=Vote(v42,"france","kazakhastan","belgium","serbia","germany");
    eurovision+=Vote(v22,"armenia","austria","bulgaria","russia","sweden");
    eurovision+=Vote(v88,"bulgaria");
    eurovision+=Vote(v27,"slovenia","israel","croatia","georgia","norway");
    eurovision+=Vote(v15,"armenia","ireland","moldova","bosnia","italy");
    eurovision+=Vote(v10,"andora");
    eurovision+=Vote(v20,"sweden","malta","latvia","turkey","armenia","slovenia","croatia");
    eurovision+=Vote(v53,"bosnia");
    eurovision+=Vote(v45,"croatia","latvia","israel","ireland","andora","hungary","luxembourg","bulgaria");
    eurovision+=Vote(v14,"italy");
    eurovision+=Vote(v66,"bulgaria");
    eurovision+=Vote(v52,"slovakia");
    eurovision+=Vote(v84,"belgium");
    eurovision+=Vote(v7,"andora");
    eurovision+=Vote(v75,"netherlands");
    eurovision+=Vote(v96,"israel");
    eurovision+=Vote(v23,"spain");
    eurovision+=Vote(v76,"belgium");
    eurovision+=Vote(v84,"andora");
    eurovision+=Vote(v51,"netherlands","slovenia","israel","moldova","ukraine");
    eurovision+=Vote(v55,"belgium");
    eurovision+=Vote(v37,"croatia");
    eurovision+=Vote(v84,"ireland");
    eurovision+=Vote(v16,"russia","germany");
    eurovision+=Vote(v39,"moldova");
    eurovision+=Vote(v88,"georgia");
    eurovision+=Vote(v92,"netherlands");
    eurovision+=Vote(v49,"slovenia","austria","slovakia","luxembourg","lithiania","hungary","netherlands");
    eurovision+=Vote(v56,"bosnia","hungary","france","armenia","slovakia","turkey","malta","latvia","serbia");
    eurovision+=Vote(v56,"austria","cyrpus","hungary","switzerland","norway","armenia","ukraine");
    eurovision+=Vote(v27,"luxembourg","slovakia","croatia","kazakhastan","bosnia","lithiania","france","norway");
    eurovision+=Vote(v48,"spain");
    eurovision+=Vote(v93,"kazakhastan");
    eurovision+=Vote(v19,"andora","ireland","moldova","switzerland","italy","germany","armenia");
    eurovision+=Vote(v45,"greece","georgia","italy","ireland","turkey","belarus","belgium");
    eurovision+=Vote(v36,"ireland");
    eurovision+=Vote(v21,"estonia");
    eurovision+=Vote(v42,"russia","kazakhastan","armenia","ukraine");
    eurovision+=Vote(v62,"germany");
    eurovision+=Vote(v36,"turkey");
    eurovision+=Vote(v5,"moldova");
    eurovision+=Vote(v12,"andora");
    eurovision+=Vote(v72,"hungary");
    eurovision+=Vote(v64,"germany");
    eurovision+=Vote(v16,"slovakia","turkey","georgia","cyrpus","ireland","kazakhastan","sweden","italy");
    eurovision+=Vote(v97,"latvia","hungary","malta","slovenia");
    eurovision+=Vote(v5,"spain");
    eurovision+=Vote(v19,"norway","serbia","sweden","russia","kazakhastan","germany","italy");
    eurovision+=Vote(v19,"norway","estonia","luxembourg");
    eurovision+=Vote(v79,"italy");
    eurovision+=Vote(v80,"austria");
    eurovision+=Vote(v97,"latvia","moldova","georgia","israel");
    eurovision+=Vote(v8,"switzerland","estonia","israel","ukraine","slovakia");
    eurovision+=Vote(v55,"germany");
    eurovision+=Vote(v37,"france");
    eurovision+=Vote(v24,"moldova");
    eurovision+=Vote(v37,"france");
    eurovision+=Vote(v22,"france","cyrpus","latvia","estonia");
    eurovision+=Vote(v3,"norway");
    eurovision+=Vote(v34,"latvia");
    eurovision+=Vote(v90,"ukraine");
    eurovision+=Vote(v85,"sweden");
    eurovision+=Vote(v45,"estonia","belarus","austria","france","serbia","italy","norway","ukraine");
    eurovision+=Vote(v16,"malta","france","russia");
    eurovision+=Vote(v69,"norway");
    eurovision+=Vote(v97,"austria","georgia","spain","bulgaria","norway","germany","netherlands");
    eurovision+=Vote(v63,"slovenia");
    eurovision+=Vote(v57,"israel","georgia","norway","france","kazakhastan");
    eurovision+=Vote(v41,"ireland");
    eurovision+=Vote(v47,"slovenia");
    eurovision+=Vote(v50,"andora","ukraine","spain","malta","italy","russia");
    eurovision+=Vote(v37,"netherlands");
    eurovision+=Vote(v83,"austria");
    eurovision+=Vote(v91,"slovakia");
    eurovision+=Vote(v53,"serbia");
    eurovision+=Vote(v43,"latvia");
    eurovision+=Vote(v68,"belarus");
    eurovision+=Vote(v66,"luxembourg");
    eurovision+=Vote(v66,"malta");
    eurovision+=Vote(v77,"georgia","kazakhastan");
    eurovision+=Vote(v70,"moldova");
    eurovision+=Vote(v94,"norway");
    eurovision+=Vote(v53,"israel");
    eurovision+=Vote(v36,"ukraine");
    eurovision+=Vote(v79,"norway");
    eurovision+=Vote(v31,"russia");
    eurovision+=Vote(v34,"bosnia");
    eurovision+=Vote(v22,"georgia","ireland","lithiania");
    eurovision+=Vote(v61,"cyrpus","ireland","france","georgia");
    eurovision+=Vote(v73,"austria");
    eurovision+=Vote(v7,"switzerland");
    eurovision+=Vote(v42,"croatia","hungary","spain");
    eurovision+=Vote(v62,"malta");
    eurovision+=Vote(v65,"netherlands","bulgaria");
    eurovision+=Vote(v15,"france","greece","netherlands","austria","norway");
    eurovision+=Vote(v46,"israel","andora","hungary");
    eurovision+=Vote(v28,"belgium","spain","malta");
    eurovision+=Vote(v13,"georgia","slovakia","lithiania","luxembourg");
    eurovision+=Vote(v97,"belgium","sweden","belarus","latvia","austria","georgia");
    eurovision+=Vote(v67,"hungary","cyrpus");
    eurovision+=Vote(v94,"kazakhastan");
    eurovision+=Vote(v83,"malta");
    eurovision+=Vote(v73,"greece");
    eurovision+=Vote(v24,"norway");
    eurovision+=Vote(v40,"bosnia");
    eurovision+=Vote(v85,"moldova");
    eurovision+=Vote(v34,"switzerland");
    eurovision+=Vote(v42,"netherlands","hungary");
    eurovision+=Vote(v78,"estonia");
    eurovision+=Vote(v34,"bulgaria");
    eurovision+=Vote(v9,"latvia","luxembourg","sweden","andora");
    eurovision+=Vote(v64,"netherlands");
    eurovision+=Vote(v64,"latvia");
    eurovision+=Vote(v14,"slovenia");
    eurovision+=Vote(v3,"croatia");
    eurovision+=Vote(v21,"greece");
    eurovision+=Vote(v85,"andora");
    eurovision+=Vote(v57,"germany","bulgaria");
    eurovision+=Vote(v4,"greece");
    eurovision+=Vote(v84,"austria");
    eurovision+=Vote(v73,"slovakia");
    eurovision+=Vote(v17,"croatia");
    eurovision+=Vote(v83,"lithiania");
    eurovision+=Vote(v24,"serbia");
    eurovision+=Vote(v94,"greece");
    eurovision+=Vote(v3,"luxembourg");
    eurovision+=Vote(v90,"sweden");
    eurovision+=Vote(v33,"israel");
    eurovision+=Vote(v82,"italy");
    eurovision+=Vote(v73,"russia");
    eurovision+=Vote(v53,"france");
    eurovision+=Vote(v43,"russia");
    eurovision+=Vote(v55,"georgia");
    eurovision+=Vote(v2,"russia");
    eurovision+=Vote(v83,"latvia");
    eurovision+=Vote(v83,"slovenia");
    eurovision+=Vote(v17,"estonia");
    eurovision+=Vote(v91,"netherlands");
    eurovision+=Vote(v68,"slovenia");
    eurovision+=Vote(v81,"latvia");
    eurovision+=Vote(v78,"estonia");
    eurovision+=Vote(v6,"switzerland","belarus","spain","slovenia","france","croatia","israel");
    eurovision+=Vote(v60,"belgium");
    eurovision+=Vote(v85,"malta");
    eurovision+=Vote(v22,"france","spain","andora","georgia","bulgaria","switzerland","hungary","slovenia");
    eurovision+=Vote(v18,"germany");
    eurovision+=Vote(v34,"lithiania");
    eurovision+=Vote(v48,"ukraine");
    eurovision+=Vote(v73,"ireland");
    eurovision+=Vote(v19,"ukraine","lithiania","greece","spain","slovakia","italy","bulgaria");
    eurovision+=Vote(v26,"greece");
    eurovision+=Vote(v31,"armenia");
    eurovision+=Vote(v16,"moldova","switzerland","andora","spain");
    eurovision+=Vote(v97,"italy","kazakhastan","latvia");
    eurovision+=Vote(v98,"andora");
    eurovision+=Vote(v51,"cyrpus","bulgaria","sweden","slovakia","netherlands");
    eurovision+=Vote(v40,"malta");
    eurovision+=Vote(v3,"cyrpus");
    eurovision+=Vote(v61,"lithiania","netherlands","russia","france","latvia","kazakhastan");
    eurovision+=Vote(v91,"luxembourg");
    eurovision+=Vote(v11,"austria");
    eurovision+=Vote(v96,"kazakhastan");
    eurovision+=Vote(v38,"malta");
    eurovision+=Vote(v32,"kazakhastan");
    eurovision+=Vote(v36,"ukraine");
    eurovision+=Vote(v40,"georgia");
    eurovision+=Vote(v24,"latvia");
    eurovision+=Vote(v72,"ukraine");
    eurovision+=Vote(v36,"estonia");
    eurovision+=Vote(v66,"moldova");
    eurovision+=Vote(v20,"belarus","italy","france","norway","malta","serbia");
    eurovision+=Vote(v36,"moldova");
    eurovision+=Vote(v44,"andora");
    eurovision+=Vote(v81,"luxembourg");
    eurovision+=Vote(v94,"lithiania");
    eurovision+=Vote(v14,"kazakhastan");
    eurovision+=Vote(v47,"estonia");
    eurovision+=Vote(v21,"norway");
    eurovision+=Vote(v73,"italy");
    eurovision+=Vote(v39,"germany","israel","france","croatia","greece");
    eurovision+=Vote(v73,"latvia");
    eurovision+=Vote(v58,"ukraine");
    eurovision+=Vote(v53,"armenia");
    eurovision+=Vote(v42,"germany");
    eurovision+=Vote(v35,"italy");
    eurovision+=Vote(v44,"lithiania");
    eurovision+=Vote(v93,"greece");
    eurovision+=Vote(v9,"malta","ukraine","ireland","greece","estonia","austria","netherlands");
    p32.update("shouldnot",143,"error");
    to<<p32<<endl;
    p21.update("shouldnot",143,"error");
    to<<p21<<endl;
    p1.update("shouldnot",143,"error");
    to<<p1<<endl;
    p25.update("shouldnot",143,"error");
    to<<p25<<endl;
    p6.update("shouldnot",143,"error");
    to<<p6<<endl;
    p22.update("shouldnot",143,"error");
    to<<p22<<endl;
    p3.update("shouldnot",143,"error");
    to<<p3<<endl;
    p12.update("shouldnot",143,"error");
    to<<p12<<endl;
    p17.update("shouldnot",143,"error");
    to<<p17<<endl;
    p5.update("shouldnot",143,"error");
    to<<p5<<endl;
    p23.update("shouldnot",143,"error");
    to<<p23<<endl;
    p4.update("shouldnot",143,"error");
    to<<p4<<endl;
    p16.update("shouldnot",143,"error");
    to<<p16<<endl;
    p28.update("shouldnot",143,"error");
    to<<p28<<endl;
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