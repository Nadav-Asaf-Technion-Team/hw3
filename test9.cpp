
#include <iostream>

#include "eurovision.h"

using std::cout;
using std::endl;
#include <fstream>
using std::ifstream;
using std::ofstream;
using std::cerr;
using std::endl;


void TEST9(){
    ofstream to("../test9myresult.txt");
    MainControl eurovision;
    Participant p1("uk","song_uk",158,"singer_uk");
    to<<p1<<endl;
    Participant p2("malta","song_malta",138,"singer_malta");
    to<<p2<<endl;
    Participant p3("netherlands","song_netherlands",207,"singer_netherlands");
    to<<p3<<endl;
    Participant p4("uk","song_uk",171,"singer_uk");
    to<<p4<<endl;
    Participant p5("norway","song_norway",172,"singer_norway");
    to<<p5<<endl;
    Participant p6("spain","song_spain",116,"singer_spain");
    to<<p6<<endl;
    Participant p7("latvia","song_latvia",192,"singer_latvia");
    to<<p7<<endl;
    Participant p8("france","song_france",100,"singer_france");
    to<<p8<<endl;
    Participant p9("switzerland","song_switzerland",139,"singer_switzerland");
    to<<p9<<endl;
    Participant p10("andora","song_andora",129,"singer_andora");
    to<<p10<<endl;
    Participant p11("moldova","song_moldova",158,"singer_moldova");
    to<<p11<<endl;
    Participant p12("latvia","song_latvia",211,"singer_latvia");
    to<<p12<<endl;
    Participant p13("bosnia","song_bosnia",129,"singer_bosnia");
    to<<p13<<endl;
    Participant p14("kazakhastan","song_kazakhastan",154,"singer_kazakhastan");
    to<<p14<<endl;
    Participant p15("slovakia","song_slovakia",120,"singer_slovakia");
    to<<p15<<endl;
    Participant p16("belarus","song_belarus",207,"singer_belarus");
    to<<p16<<endl;
    Participant p17("turkey","song_turkey",132,"singer_turkey");
    to<<p17<<endl;
    Participant p18("luxembourg","song_luxembourg",144,"singer_luxembourg");
    to<<p18<<endl;
    Participant p19("sweden","song_sweden",228,"singer_sweden");
    to<<p19<<endl;
    Participant p20("turkey","song_turkey",219,"singer_turkey");
    to<<p20<<endl;
    Participant p21("slovakia","song_slovakia",168,"singer_slovakia");
    to<<p21<<endl;
    Participant p22("georgia","song_georgia",147,"singer_georgia");
    to<<p22<<endl;
    Participant p23("armenia","song_armenia",181,"singer_armenia");
    to<<p23<<endl;
    Participant p24("andora","song_andora",156,"singer_andora");
    to<<p24<<endl;
    Participant p25("cyrpus","song_cyrpus",144,"singer_cyrpus");
    to<<p25<<endl;
    Participant p26("ukraine","song_ukraine",130,"singer_ukraine");
    to<<p26<<endl;
    Participant p27("bosnia","song_bosnia",187,"singer_bosnia");
    to<<p27<<endl;
    Participant p28("italy","song_italy",177,"singer_italy");
    to<<p28<<endl;
    Participant p29("cyrpus","song_cyrpus",106,"singer_cyrpus");
    to<<p29<<endl;
    Participant p30("serbia","song_serbia",184,"singer_serbia");
    to<<p30<<endl;
    Participant p31("lithiania","song_lithiania",174,"singer_lithiania");
    to<<p31<<endl;
    Participant p32("kazakhastan","song_kazakhastan",174,"singer_kazakhastan");
    to<<p32<<endl;
    Participant p33("israel","song_israel",189,"singer_israel");
    to<<p33<<endl;
    Participant p34("austria","song_austria",119,"singer_austria");
    to<<p34<<endl;
    Participant p35("belgium","song_belgium",127,"singer_belgium");
    to<<p35<<endl;
    Participant p36("belgium","song_belgium",125,"singer_belgium");
    to<<p36<<endl;
    p28.update("new_song",0,"");
    p26.update("new_song",0,"");
    p26.update("new_song",0,"");
    p36.update("new_song",0,"");
    p35.update("new_song",0,"newsinger");
    p8.update("new_song",0,"newsinger");
    p17.update("new_song",0,"newsinger");
    p33.update("new_song",0,"newsinger");
    p29.update("new_song",122,"newsinger");
    p23.update("new_song",186,"newsinger");
    p7.update("new_song",154,"newsinger");
    p35.update("new_song",127,"newsinger");
    to<<eurovision<<endl;
    eurovision+=p1;
    eurovision+=p35;
    eurovision+=p25;
    eurovision+=p1;
    eurovision+=p10;
    eurovision+=p25;
    eurovision+=p7;
    eurovision+=p1;
    eurovision+=p24;
    eurovision+=p6;
    eurovision+=p21;
    eurovision+=p20;
    eurovision+=p1;
    eurovision+=p12;
    to<<eurovision<<endl;
    eurovision-=p29;
    eurovision+=p6;
    eurovision-=p27;
    eurovision-=p8;
    eurovision+=p4;
    eurovision+=p12;
    eurovision-=p13;
    eurovision+=p32;
    eurovision-=p20;
    eurovision+=p5;
    eurovision-=p7;
    eurovision-=p18;
    eurovision-=p4;
    eurovision+=p3;
    eurovision-=p10;
    eurovision+=p21;
    eurovision+=p27;
    eurovision-=p21;
    eurovision+=p8;
    eurovision+=p2;
    eurovision-=p18;
    eurovision-=p2;
    eurovision-=p15;
    eurovision+=p34;
    to<<eurovision<<endl;
    (((((((((((((eurovision-=p11)+=p23)+=p6)-=p34)+=p23)+=p3)+=p3)+=p12)+=p32)
    +=p31)+=p15)-=p25)-=p26)+=p1;
    MainControl::Iterator i;
    for (i = eurovision.begin(); i<eurovision.end(); ++i)
        to << *i << endl;
    for (i = eurovision.begin(); !(i==eurovision.end()); ++i)
        to << *i << endl;
    eurovision.setPhase(Contest);
    eurovision.setPhase(Voting);
    eurovision.participate("france");
    eurovision.participate("bosnia");
    eurovision.participate("russia");
    eurovision.participate("croatia");
    eurovision.participate("kazakhastan");
    eurovision.participate("malta");
    eurovision.participate("kazakhastan");
    eurovision.participate("spain");
    eurovision.participate("germany");
    eurovision.participate("greece");
    eurovision.participate("norway");
    eurovision.participate("belarus");
    eurovision.participate("norway");
    eurovision.participate("slovenia");
    p29.update("",120,"");
    to<<p29<<endl;
    p3.update("",120,"");
    to<<p3<<endl;
    p6.update("",120,"");
    to<<p6<<endl;
    p32.update("",120,"");
    to<<p32<<endl;
    p5.update("",120,"");
    to<<p5<<endl;
    p26.update("",120,"");
    to<<p26<<endl;
    p30.update("",120,"");
    to<<p30<<endl;
    p35.update("",120,"");
    to<<p35<<endl;
    p21.update("",120,"");
    to<<p21<<endl;
    p19.update("",120,"");
    to<<p19<<endl;
    p7.update("",120,"");
    to<<p7<<endl;
    p33.update("",120,"");
    to<<p33<<endl;
    p33.update("",120,"");
    to<<p33<<endl;
    p12.update("",120,"");
    to<<p12<<endl;
    Voter v1("armenia",Judge);
    Voter v2("israel",Judge);
    Voter v3("norway",Regular);
    Voter v4("uk");
    Voter v5("belgium");
    Voter v6("ireland",Judge);
    Voter v7("estonia",Judge);
    Voter v8("spain");
    Voter v9("armenia");
    Voter v10("cyrpus");
    Voter v11("andora",Regular);
    Voter v12("moldova");
    Voter v13("cyrpus",Regular);
    Voter v14("norway",Regular);
    Voter v15("ukraine");
    Voter v16("luxembourg");
    Voter v17("belarus",Regular);
    Voter v18("israel");
    Voter v19("spain",Judge);
    Voter v20("switzerland",Regular);
    Voter v21("slovenia",Regular);
    Voter v22("switzerland",Regular);
    Voter v23("slovenia",Regular);
    Voter v24("germany",Regular);
    Voter v25("slovakia",Regular);
    Voter v26("luxembourg",Regular);
    Voter v27("sweden",Regular);
    Voter v28("france");
    Voter v29("bosnia",Judge);
    Voter v30("italy");
    Voter v31("slovakia",Judge);
    Voter v32("belgium",Judge);
    Voter v33("belarus");
    Voter v34("slovakia");
    Voter v35("malta",Judge);
    Voter v36("greece",Regular);
    Voter v37("france",Judge);
    Voter v38("latvia",Judge);
    Voter v39("serbia",Judge);
    Voter v40("moldova",Regular);
    Voter v41("moldova",Regular);
    Voter v42("latvia");
    Voter v43("ukraine",Regular);
    Voter v44("italy");
    Voter v45("slovenia",Regular);
    Voter v46("bosnia");
    Voter v47("russia");
    Voter v48("turkey",Regular);
    Voter v49("slovakia",Regular);
    Voter v50("sweden",Regular);
    Voter v51("croatia",Judge);
    Voter v52("kazakhastan",Judge);
    Voter v53("sweden");
    Voter v54("slovenia");
    Voter v55("greece",Judge);
    Voter v56("france",Regular);
    Voter v57("malta",Judge);
    Voter v58("switzerland",Judge);
    Voter v59("slovakia");
    Voter v60("latvia");
    Voter v61("georgia");
    Voter v62("moldova");
    Voter v63("russia",Regular);
    Voter v64("belarus",Judge);
    Voter v65("israel",Regular);
    Voter v66("france");
    Voter v67("bulgaria",Regular);
    Voter v68("switzerland");
    Voter v69("bulgaria");
    Voter v70("russia",Regular);
    Voter v71("cyrpus",Judge);
    Voter v72("spain",Regular);
    Voter v73("slovenia",Regular);
    Voter v74("bulgaria",Regular);
    Voter v75("estonia",Judge);
    Voter v76("estonia");
    Voter v77("norway",Regular);
    Voter v78("turkey",Regular);
    Voter v79("kazakhastan",Judge);
    Voter v80("bulgaria",Regular);
    Voter v81("switzerland");
    Voter v82("germany");
    Voter v83("croatia",Judge);
    Voter v84("georgia",Judge);
    Voter v85("norway",Judge);
    Voter v86("spain",Judge);
    Voter v87("bulgaria");
    Voter v88("turkey",Regular);
    Voter v89("armenia");
    Voter v90("bosnia",Judge);
    Voter v91("estonia");
    Voter v92("uk",Regular);
    Voter v93("germany");
    Voter v94("luxembourg");
    Voter v95("spain",Regular);
    Voter v96("latvia",Judge);
    Voter v97("slovenia",Regular);
    Voter v98("kazakhastan");
    Voter v99("italy",Judge);
    to<<eurovision<<endl;
    eurovision+=Vote(v47,"ireland");
    eurovision+=Vote(v37,"bosnia","netherlands","andora","greece","slovakia");
    eurovision+=Vote(v48,"austria");
    eurovision+=Vote(v23,"norway");
    eurovision+=Vote(v15,"sweden");
    eurovision+=Vote(v51,"ukraine","germany","sweden","austria","georgia","slovenia","armenia");
    eurovision+=Vote(v34,"slovakia");
    eurovision+=Vote(v23,"netherlands");
    eurovision+=Vote(v95,"kazakhastan");
    eurovision+=Vote(v31,"russia","malta","kazakhastan","lithiania","latvia","austria","moldova","italy");
    eurovision+=Vote(v49,"russia");
    eurovision+=Vote(v82,"estonia");
    eurovision+=Vote(v91,"luxembourg");
    eurovision+=Vote(v62,"spain");
    eurovision+=Vote(v95,"slovakia");
    eurovision+=Vote(v6,"slovakia","latvia","russia","lithiania","georgia","andora");
    eurovision+=Vote(v6,"ireland","bosnia","latvia","croatia","armenia","ukraine","slovenia","bulgaria");
    eurovision+=Vote(v95,"serbia");
    eurovision+=Vote(v38,"slovenia","armenia","turkey","italy","andora","cyrpus");
    eurovision+=Vote(v18,"germany");
    eurovision+=Vote(v78,"luxembourg");
    eurovision+=Vote(v25,"lithiania");
    eurovision+=Vote(v7,"russia","ukraine","kazakhastan","norway","latvia","lithiania");
    eurovision+=Vote(v14,"slovenia");
    eurovision+=Vote(v22,"ireland");
    eurovision+=Vote(v61,"bosnia");
    eurovision+=Vote(v86,"croatia","france","lithiania","hungary","sweden","malta","latvia","norway","belgium");
    eurovision+=Vote(v88,"norway");
    eurovision+=Vote(v22,"bosnia");
    eurovision+=Vote(v92,"lithiania");
    eurovision+=Vote(v37,"armenia","bosnia","ireland","france","ukraine","kazakhastan","slovenia","turkey");
    eurovision+=Vote(v85,"norway","moldova","spain","cyrpus");
    eurovision+=Vote(v11,"georgia");
    eurovision+=Vote(v26,"lithiania");
    eurovision+=Vote(v46,"estonia");
    eurovision+=Vote(v84,"kazakhastan","spain","cyrpus","ireland","slovenia","serbia","moldova","greece");
    eurovision+=Vote(v7,"belarus","georgia","belgium","turkey");
    eurovision+=Vote(v52,"belgium","moldova","ukraine","norway","sweden");
    eurovision+=Vote(v77,"croatia");
    eurovision+=Vote(v24,"ireland");
    eurovision+=Vote(v38,"estonia","luxembourg","turkey","spain","russia","israel","greece","sweden");
    eurovision+=Vote(v40,"france");
    eurovision+=Vote(v9,"israel");
    eurovision+=Vote(v21,"france");
    eurovision+=Vote(v78,"hungary");
    eurovision+=Vote(v15,"sweden");
    eurovision+=Vote(v30,"italy");
    eurovision+=Vote(v44,"cyrpus");
    eurovision+=Vote(v45,"belgium");
    eurovision+=Vote(v26,"malta");
    eurovision+=Vote(v54,"ukraine");
    eurovision+=Vote(v56,"israel");
    eurovision+=Vote(v99,"russia","bosnia","slovenia","norway","latvia","estonia","moldova","lithiania","spain");
    eurovision+=Vote(v26,"italy");
    eurovision+=Vote(v15,"serbia");
    eurovision+=Vote(v71,"norway");
    eurovision+=Vote(v56,"belgium");
    eurovision+=Vote(v33,"ukraine");
    eurovision+=Vote(v76,"turkey");
    eurovision+=Vote(v58,"turkey","israel","austria","armenia","georgia");
    eurovision+=Vote(v69,"germany");
    eurovision+=Vote(v55,"germany","israel","spain");
    eurovision+=Vote(v3,"greece");
    eurovision+=Vote(v48,"belgium");
    eurovision+=Vote(v34,"malta");
    eurovision+=Vote(v48,"hungary");
    eurovision+=Vote(v13,"armenia");
    eurovision+=Vote(v42,"cyrpus");
    eurovision+=Vote(v9,"slovenia");
    eurovision+=Vote(v32,"cyrpus","bosnia","lithiania","kazakhastan","armenia","croatia","ireland","russia","latvia");
    eurovision+=Vote(v12,"croatia");
    eurovision+=Vote(v47,"armenia");
    eurovision+=Vote(v60,"andora");
    eurovision+=Vote(v53,"spain");
    eurovision+=Vote(v76,"turkey");
    eurovision+=Vote(v89,"hungary");
    eurovision+=Vote(v74,"spain");
    eurovision+=Vote(v69,"kazakhastan");
    eurovision+=Vote(v15,"latvia");
    eurovision+=Vote(v50,"belgium");
    eurovision+=Vote(v36,"lithiania");
    eurovision+=Vote(v44,"armenia");
    eurovision+=Vote(v74,"germany");
    eurovision+=Vote(v41,"bulgaria");
    eurovision+=Vote(v49,"greece");
    eurovision+=Vote(v9,"andora");
    eurovision+=Vote(v90,"malta","estonia","norway","bulgaria","greece","bosnia","hungary","andora");
    eurovision+=Vote(v8,"slovenia");
    eurovision+=Vote(v60,"bulgaria");
    eurovision+=Vote(v8,"belarus");
    eurovision+=Vote(v62,"luxembourg");
    eurovision+=Vote(v20,"norway");
    eurovision+=Vote(v61,"malta");
    eurovision+=Vote(v3,"belgium");
    eurovision+=Vote(v22,"switzerland");
    eurovision+=Vote(v21,"greece");
    eurovision+=Vote(v17,"kazakhastan");
    eurovision+=Vote(v97,"russia");
    eurovision+=Vote(v77,"cyrpus");
    eurovision+=Vote(v1,"slovakia","bosnia","france","estonia");
    eurovision+=Vote(v45,"slovenia");
    eurovision+=Vote(v72,"slovakia");
    eurovision+=Vote(v66,"malta");
    eurovision+=Vote(v95,"austria");
    eurovision+=Vote(v77,"hungary");
    eurovision+=Vote(v7,"kazakhastan");
    eurovision+=Vote(v67,"belgium");
    eurovision+=Vote(v50,"norway");
    eurovision+=Vote(v83,"andora","belarus","france");
    eurovision+=Vote(v61,"georgia");
    eurovision+=Vote(v75,"sweden","malta","netherlands","germany");
    eurovision+=Vote(v47,"croatia");
    eurovision+=Vote(v65,"kazakhastan");
    eurovision+=Vote(v19,"belgium","armenia","austria");
    eurovision+=Vote(v47,"slovakia");
    eurovision+=Vote(v29,"switzerland");
    eurovision+=Vote(v9,"france");
    eurovision+=Vote(v46,"luxembourg");
    eurovision+=Vote(v61,"croatia");
    eurovision+=Vote(v96,"sweden","bulgaria","belgium","croatia","latvia");
    eurovision+=Vote(v98,"georgia");
    eurovision+=Vote(v89,"belgium");
    eurovision+=Vote(v51,"armenia","netherlands","serbia","slovakia","greece");
    eurovision+=Vote(v54,"lithiania");
    eurovision+=Vote(v24,"ireland");
    eurovision+=Vote(v14,"latvia");
    eurovision+=Vote(v24,"serbia");
    eurovision+=Vote(v62,"lithiania");
    eurovision+=Vote(v69,"israel");
    eurovision+=Vote(v44,"lithiania");
    eurovision+=Vote(v64,"israel","turkey");
    eurovision+=Vote(v77,"france");
    eurovision+=Vote(v39,"luxembourg","serbia","latvia","hungary","slovenia");
    eurovision+=Vote(v17,"switzerland");
    eurovision+=Vote(v17,"germany");
    eurovision+=Vote(v56,"netherlands");
    eurovision+=Vote(v64,"estonia","austria","germany","greece","ukraine","slovenia","belgium","latvia","luxembourg");
    eurovision+=Vote(v98,"bosnia");
    eurovision+=Vote(v68,"italy");
    eurovision+=Vote(v67,"spain");
    eurovision+=Vote(v30,"belgium");
    eurovision+=Vote(v24,"latvia");
    eurovision+=Vote(v93,"slovenia");
    eurovision+=Vote(v25,"norway");
    eurovision+=Vote(v29,"turkey","armenia","ukraine","belgium","luxembourg","slovakia","croatia","sweden");
    eurovision+=Vote(v31,"georgia","greece");
    eurovision+=Vote(v21,"russia");
    eurovision+=Vote(v94,"switzerland");
    eurovision+=Vote(v6,"bulgaria","sweden","switzerland","israel","andora","france","slovenia","belarus");
    eurovision+=Vote(v66,"netherlands");
    eurovision+=Vote(v18,"switzerland");
    eurovision+=Vote(v76,"moldova");
    eurovision+=Vote(v79,"greece","kazakhastan","moldova");
    eurovision+=Vote(v11,"hungary");
    eurovision+=Vote(v43,"moldova");
    eurovision+=Vote(v34,"lithiania");
    eurovision+=Vote(v79,"spain","israel","andora");
    eurovision+=Vote(v15,"belarus");
    eurovision+=Vote(v68,"croatia");
    eurovision+=Vote(v37,"norway","israel","croatia","turkey","belgium","latvia","kazakhastan","france","georgia");
    eurovision+=Vote(v30,"bulgaria");
    eurovision+=Vote(v62,"cyrpus");
    eurovision+=Vote(v71,"croatia","israel","kazakhastan","belarus","ireland","italy","hungary","russia");
    eurovision+=Vote(v67,"kazakhastan");
    eurovision+=Vote(v92,"italy");
    eurovision+=Vote(v27,"russia");
    eurovision+=Vote(v33,"bulgaria");
    eurovision+=Vote(v12,"luxembourg");
    eurovision+=Vote(v79,"armenia","germany");
    eurovision+=Vote(v51,"italy","greece","slovakia","andora","lithiania","hungary","belgium","spain");
    eurovision+=Vote(v75,"austria");
    eurovision+=Vote(v20,"sweden");
    eurovision+=Vote(v26,"slovenia");
    eurovision+=Vote(v79,"israel","germany","croatia","slovakia","norway","netherlands");
    eurovision+=Vote(v52,"hungary","norway","switzerland","netherlands","spain");
    eurovision+=Vote(v47,"slovenia");
    eurovision+=Vote(v9,"russia");
    eurovision+=Vote(v83,"norway","turkey","austria","sweden","cyrpus","latvia","lithiania","spain");
    eurovision+=Vote(v71,"estonia","kazakhastan","italy");
    eurovision+=Vote(v6,"turkey","slovakia","hungary","andora");
    eurovision+=Vote(v4,"belgium");
    eurovision+=Vote(v99,"ukraine","switzerland");
    eurovision+=Vote(v45,"lithiania");
    eurovision+=Vote(v8,"kazakhastan");
    eurovision+=Vote(v81,"kazakhastan");
    eurovision+=Vote(v92,"bulgaria");
    eurovision+=Vote(v38,"norway","georgia","andora","russia","spain","ireland","malta");
    eurovision+=Vote(v81,"armenia");
    eurovision+=Vote(v31,"belarus","norway");
    eurovision+=Vote(v75,"croatia","germany","latvia","ireland");
    eurovision+=Vote(v2,"lithiania","serbia","latvia","bulgaria","slovakia","croatia","belgium");
    eurovision+=Vote(v98,"ireland");
    eurovision+=Vote(v93,"kazakhastan");
    eurovision+=Vote(v97,"estonia");
    eurovision+=Vote(v26,"andora");
    eurovision+=Vote(v75,"ireland","belarus","croatia","ukraine","cyrpus","norway","belgium","slovenia");
    eurovision+=Vote(v8,"luxembourg");
    eurovision+=Vote(v72,"bulgaria");
    eurovision+=Vote(v33,"italy");
    p8.update("shouldnot",143,"error");
    to<<p8<<endl;
    p35.update("shouldnot",143,"error");
    to<<p35<<endl;
    p24.update("shouldnot",143,"error");
    to<<p24<<endl;
    p19.update("shouldnot",143,"error");
    to<<p19<<endl;
    p3.update("shouldnot",143,"error");
    to<<p3<<endl;
    p4.update("shouldnot",143,"error");
    to<<p4<<endl;
    p23.update("shouldnot",143,"error");
    to<<p23<<endl;
    p8.update("shouldnot",143,"error");
    to<<p8<<endl;
    p20.update("shouldnot",143,"error");
    to<<p20<<endl;
    p13.update("shouldnot",143,"error");
    to<<p13<<endl;
    p30.update("shouldnot",143,"error");
    to<<p30<<endl;
    p9.update("shouldnot",143,"error");
    to<<p9<<endl;
    p35.update("shouldnot",143,"error");
    to<<p35<<endl;
    p15.update("shouldnot",143,"error");
    to<<p15<<endl;
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