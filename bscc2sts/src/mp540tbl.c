/*  Canon Inkjet Printer Driver for Linux
 *  Copyright CANON INC. 2001-2013
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307, USA.
 *
 * NOTE:
 *  - As a special exception, this program is permissible to link with the
 *    libraries released as the binary modules.
 *  - If you write modifications of your own for these programs, it is your
 *    choice whether to permit this exception to apply to your modifications.
 *    If you do not wish that, delete this exception.
 */


/*
 * mp540tbl.c 
 *
 * The conversion table for s300, and a model dependence function table.
 */


/*
 * include necessary headers ...
 */
#include "bscc2sts.h"
#include "commonfunc.h"

/* for mp540 conversion table*/

/*
 * The present busy detailed status.
 */
ST_BSCC2STS mp540_dbs2busy[]={
  {"WU","B"},
  {"SL","B"},
  {"SD","B"},
  {"CL","L"},
  {"CC","D"},
  {"TP","T"},
  {"DS","I"},
  {"RS",""},
  {"NO",""},
  {"UK",""},
  {ENDTAG,ENDTAG}
};

/*
 * The present detailed status of operation.
 */
ST_BSCC2STS mp540_djs2job[]={
  {"PR","P"},
  {"LD","L"},
  {"EJ","F"},
  {"ID","I"},
  {"CC","S"},
  {"EC","P"},  /* Ver.3.00 New */
  {"SC","S"},  /* Ver.3.30 */
  {"WP","W"},
  {"DM","D"},
  {"SD","D"},
  {"DC","W"},
  {"TW","P"},  /* MX860 */
  {"TC","W"},  /* MX860 */
  {"TO","D"},  /* MX860 */
  {"NO","I"},
  {"UK","I"},
  {ENDTAG,ENDTAG}
};

/*
 * The kind of cartridge with which the present printer is equipped.
 */
ST_BSCC2STS mp540_chd2type[]={
  {"CL","Z"},
  {"NO"," "},
  {"NS"," "},
  {ENDTAG,ENDTAG}
};

ST_BSCC2STS mp540_prname2exchange[]={
  {"MP540","F"},
  {"IP3600","F"},
  {"MX860","F"},
  {"MP550","F"},
  {"MP560","F"},
  {"MX870","F"},
  {"MG5100","F"},
  {ENDTAG,ENDTAG}
};

/*
 * Ink residual quantity information.
 * color
 */
ST_BSCC2STS mp540_cir2color[]={
  {"BK","l"},
  {"PBK","L"},
  {"C","C"},
  {"M","M"},
  {"Y","Y"},
  {ENDTAG,ENDTAG}
};

/*
 * Residual quantity detection of ink.
 */
ST_BSCC2STS mp540_cil2inkchk[]={
//  {"ON","Y"},
  {ENDTAG,ENDTAG}
};

/*
 * Position information between papers.
 */
ST_BSCC2STS mp540_lvr2posit[]={
  {"GAL,AT"," "},
  {"GAL,CW"," "},
  {ENDTAG,ENDTAG}
};

/*
 * Destination information.
 */
ST_BSCC2STS mp540_hri2destination[]={
  {"1","1"},
  {"2","2"},
  {"3","3"},
  {"4","4"},
  {"5","5"},
  {"7","7"},
  {"8","8"},
  {"JP","J"},
  {"ASI","A"},
  {"PAM","P"},
  {"EU","E"},
  {ENDTAG,ENDTAG}
};

/*
 * Details of the present warning state.
 */
ST_BSCC2STS mp540_dws2warn[]={
  {"NO"," "},
  {"UK","?"},
  {"1500","T"},
  {"1570","F"},
  {"1900","P"}, /* MX860 */
//  {"1900","1900"},
  {"1910","1910"},
  {ENDTAG,ENDTAG}
};

/*
 * Details of the present operator call state.
 */
ST_BSCC2STS mp540_doc2operate[]={
  {"NO"," "},
  {"UK","?"},
  {"1000","X"},
  {"1003","p"},
  {"1200","v"},
  {"1250","o"},
  {"1300","q"},
  {"1303","n"},
  {"1304","i"},
  {"1310","R"}, /* Ver.3.30 */
  {"1401","H"},
  {"1403","r"},
  {"1405","r"},
  {"1410","t"},
  {"1411","t"},
  {"1412","t"},
  {"1413","t"},
  {"1414","t"},
  {"1415","t"},
  {"1416","t"},
  {"1417","t"},
  {"1418","t"},
  {"1419","t"},
  {"1600","u"},
  {"1660","d"},
  {"1680","S"},
  {"1681","s"},
  {"1683","f"},
  {"1684","e"},
  {"1688","C"},
  {"1700","x"},
  {"1701","k"},
  {"1750","F"},
  {"2001","U"},
  {"2002","U"},
  {"2700","Z"},
  {"2800","Z"}, /* Ver.3.30 */
  {"2801","Z"}, /* Ver.3.30 */
  {"2802","Z"}, /* Ver.3.30 */
  {"2803","Z"}, /* Ver.3.30 */
  {"2804","Z"}, /* Ver.3.30 */
  {"4100","r"},
  {ENDTAG,ENDTAG}
};

/*
 * Information on a service call.
 */
ST_BSCC2STS mp540_dsc2service[]={
  {"NO"," "},
  {"UK","?"},
  {"5011","5011"},
  {"5012","5012"},
  {"5100","5100"},
  {"5110","5110"},
  {"5200","5200"},
  {"5400","5400"},
  {"5700","5700"},
  {"5B00","5B00"},
  {"5B01","5B01"},
  {"5C00","5C00"},
  {"5C20","5C20"},
  {"6000","6000"},
  {"6500","6500"},
  {"6502","6502"},
  {"6800","6800"},
  {"6801","6801"},
  {"6A80","6A80"},
  {"6A81","6A81"}, /* add Ver.3.40 */
  {"6A90","6A90"},
  {"6B10","6B10"}, /* MX860 only */
  {"6C10","6C10"},
  {"9000","9000"},
  {"B200","B200"},
  {"C000","C000"},
  {ENDTAG,ENDTAG}
};

/*
 * Information on a service call.
 */
ST_BSCC2STS mp540_dsc2service2[]={
  {"NO"," "},
  {"UK","?"},
  {"5011","M"},
  {"5012","M"},
  {"5100","M"},
  {"5110","M"},
  {"5200","M"},
  {"5400","M"},
  {"5700","M"},
  {"5B00","I"},
  {"5B01","J"},
  {"5C00","M"},
  {"5C20","M"},
  {"6000","M"},
  {"6500","M"},
  {"6502","M"},
  {"6800","M"},
  {"6801","M"},
  {"6A80","M"},
  {"6A81","M"},
  {"6A90","M"},
  {"6B10","M"},
  {"6C10","M"},
  {"9000","M"},
  {"B200","V"},
  {"C000","M"},
  {ENDTAG,ENDTAG}
};


/*
 * The present detailed status of ink tank.
 */
ST_BSCC2STS mp540_ctk2alert[]={
//{"SET", ""},
  {"SETZ","Z"},
  {"NO",  "E"},
  {"UK",  "?"},
//{"POS0",""},
  {"POS1","P"},
  {"POS2","P"},
  {"POS3","P"},
  {"POS4","P"},
  {"POS5","P"},
  {"MUL", "M"},
  {"RUK", "R"},
  {"REG", "E"},
  {"IO",  "I"},
  {"EMP", "Y"},
  {"LOW", "L"},
  {"FRM", "F"},
  {ENDTAG,ENDTAG}
};

//Ver.3.00
/*
 * Printer Destination information.
*/
ST_BSCC2STS mp540_pdr2prnregion[]={
  {"1", "1"}, /*Japan*/
  {"2", "2"}, /*Korea*/
  {"3", "3"}, /*America*/
  {"4", "4"}, /*Europe*/
  {"5", "5"}, /*Australia*/
  {"6", "6"}, /*Asia*/
  {"7", "7"}, /*S.Chinese*/
  {"8", "8"}, /*T.Chinese*/
  {"9", "9"}, /*Laten America*/
  {"A", "A"}, /*Brazil*/
  {"B", "B"}, /*Canada*/
  {"C", "C"}, /*EMB*/
  {ENDTAG,ENDTAG}
};


/*
 * The function table for mp540.
 */
static const FUNCOFMODELSETPROCESS
 mp540setstsfunctable[] = {
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  mp540_setink,
  mp540_setinkalert,
  NULL,
  NULL,
  //Ver.300
  NULL,
  //Ver.3.10
  NULL,
};


/*
 * Arrangement of the conversion table corresponding to the function.
 */
ST_BSCC2STS *p_mp540chgtbl[] = {
  NULL,
  mp540_dbs2busy,
  mp540_djs2job,
  mp540_cil2inkchk,
  mp540_chd2type,
  mp540_prname2exchange,
  //Ver.2.70
  mp540_hri2destination,
  mp540_dws2warn,
  mp540_doc2operate,
  mp540_dsc2service,
  mp540_cir2color,
  mp540_ctk2alert,
  NULL,
  mp540_lvr2posit,
  //Ver.300
  mp540_pdr2prnregion,
  //Ver.3.10
  mp540_dsc2service2,
};


/*
 * The corresponding function is called one by one.
 */
int processformp540(ST_STORESET *p_s, bscc2sts_tbl *p_tbl, ST_BSCCBUF *p_bsccbuf)
{
  int i;
  int ret=0;
  int maxfuncnum_mp540 = 16;

  for(i=0; i<maxfuncnum_mp540; i++ ){
    if( mp540setstsfunctable[i] == NULL){
      ret = selectcommonfunc(p_s+i, p_mp540chgtbl[i], p_tbl, i);
      if(ret != OK){
		break;
      }
    } else {
      ret = (*mp540setstsfunctable[i])(p_s+i, p_mp540chgtbl[i], p_tbl, p_bsccbuf);
      if(ret != OK){
		break;
      }
    }
  }
  return(ret);
}
