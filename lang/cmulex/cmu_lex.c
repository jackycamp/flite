/*************************************************************************/
/*                                                                       */
/*                  Language Technologies Institute                      */
/*                     Carnegie Mellon University                        */
/*                        Copyright (c) 2001                             */
/*                        All Rights Reserved.                           */
/*                                                                       */
/*  Permission is hereby granted, free of charge, to use and distribute  */
/*  this software and its documentation without restriction, including   */
/*  without limitation the rights to use, copy, modify, merge, publish,  */
/*  distribute, sublicense, and/or sell copies of this work, and to      */
/*  permit persons to whom this work is furnished to do so, subject to   */
/*  the following conditions:                                            */
/*   1. The code must retain the above copyright notice, this list of    */
/*      conditions and the following disclaimer.                         */
/*   2. Any modifications must be clearly marked as such.                */
/*   3. Original authors' names are not deleted.                         */
/*   4. The authors' names are not used to endorse or promote products   */
/*      derived from this software without specific prior written        */
/*      permission.                                                      */
/*                                                                       */
/*  CARNEGIE MELLON UNIVERSITY AND THE CONTRIBUTORS TO THIS WORK         */
/*  DISCLAIM ALL WARRANTIES WITH REGARD TO THIS SOFTWARE, INCLUDING      */
/*  ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS, IN NO EVENT   */
/*  SHALL CARNEGIE MELLON UNIVERSITY NOR THE CONTRIBUTORS BE LIABLE      */
/*  FOR ANY SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES    */
/*  WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN   */
/*  AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION,          */
/*  ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF       */
/*  THIS SOFTWARE.                                                       */
/*                                                                       */
/*************************************************************************/
/*             Author:  Alan W Black (awb@cs.cmu.edu)                    */
/*               Date:  January 2001                                     */
/*************************************************************************/
/*                                                                       */
/*  CMU Lexicon definition                                               */
/*                                                                       */
/*************************************************************************/

#include "flite.h"

#include "cmu_lex.h"

extern const int cmu_lex_entry[];
extern const unsigned char cmu_lex_data[];
extern const int cmu_lex_num_entries;
extern const int cmu_lex_num_bytes;
extern const char * const cmu_lex_phone_table[57];
extern const char * const cmu_lex_phones_huff_table[] = {
   "\067" , /* 0.000024 */ 
   "\065" , /* 0.000380 */ 
   "\021\013\006" , /* 0.000771 */ 
   "\002\007\001\024" , /* 0.000777 */ 
   "\013\007" , /* 0.000783 */ 
   "\021\026\014" , /* 0.000783 */ 
   "\001\004" , /* 0.000789 */ 
   "\046\031" , /* 0.000789 */ 
   "\003\036" , /* 0.000801 */ 
   "\010\011" , /* 0.000801 */ 
   "\013\006\024" , /* 0.000801 */ 
   "\015\001\003" , /* 0.000801 */ 
   "\026\024" , /* 0.000813 */ 
   "\036\014\001" , /* 0.000813 */ 
   "\004\001\003" , /* 0.000819 */ 
   "\001\012\001\003" , /* 0.000825 */ 
   "\005\021" , /* 0.000825 */ 
   "\022\006\001" , /* 0.000831 */ 
   "\050\006" , /* 0.000831 */ 
   "\012\026" , /* 0.000837 */ 
   "\030\007\031" , /* 0.000837 */ 
   "\044\003" , /* 0.000843 */ 
   "\017\020" , /* 0.000849 */ 
   "\032\014" , /* 0.000849 */ 
   "\013\020" , /* 0.000855 */ 
   "\004\026" , /* 0.000874 */ 
   "\036\037" , /* 0.000874 */ 
   "\050\024" , /* 0.000874 */ 
   "\001\014\024" , /* 0.000916 */ 
   "\005\010" , /* 0.000916 */ 
   "\012\003" , /* 0.000928 */ 
   "\046\003" , /* 0.000928 */ 
   "\001\003\031" , /* 0.000934 */ 
   "\001\014\037" , /* 0.000934 */ 
   "\013\014\032" , /* 0.000934 */ 
   "\020\011" , /* 0.000934 */ 
   "\066" , /* 0.000934 */ 
   "\005\003\001" , /* 0.000940 */ 
   "\012\062" , /* 0.000940 */ 
   "\030\051" , /* 0.000940 */ 
   "\013\010" , /* 0.000946 */ 
   "\050\007" , /* 0.000952 */ 
   "\012\031" , /* 0.000958 */ 
   "\005\037" , /* 0.000964 */ 
   "\022\014" , /* 0.000964 */ 
   "\023\014\007" , /* 0.000964 */ 
   "\015\001\021" , /* 0.000970 */ 
   "\032\003" , /* 0.000976 */ 
   "\036\003" , /* 0.000982 */ 
   "\036\014\032" , /* 0.000982 */ 
   "\005\020\007" , /* 0.000994 */ 
   "\020\001\003" , /* 0.000994 */ 
   "\023\024" , /* 0.000994 */ 
   "\043\015" , /* 0.000994 */ 
   "\060" , /* 0.000994 */ 
   "\025\021" , /* 0.001000 */ 
   "\051\031" , /* 0.001012 */ 
   "\054\031" , /* 0.001018 */ 
   "\015\011" , /* 0.001024 */ 
   "\007\001\024" , /* 0.001030 */ 
   "\023\003\001" , /* 0.001036 */ 
   "\023\021" , /* 0.001036 */ 
   "\053" , /* 0.001042 */ 
   "\013\003\001" , /* 0.001054 */ 
   "\037\031" , /* 0.001078 */ 
   "\022\006\031" , /* 0.001084 */ 
   "\023\020\007" , /* 0.001084 */ 
   "\001\020\007" , /* 0.001090 */ 
   "\015\027" , /* 0.001109 */ 
   "\026\014\024" , /* 0.001109 */ 
   "\023\020" , /* 0.001115 */ 
   "\003\026" , /* 0.001127 */ 
   "\001\014\020" , /* 0.001133 */ 
   "\024\036" , /* 0.001133 */ 
   "\006\027" , /* 0.001151 */ 
   "\057\006" , /* 0.001157 */ 
   "\036\014\031" , /* 0.001163 */ 
   "\022\046" , /* 0.001193 */ 
   "\021\011" , /* 0.001199 */ 
   "\005\007" , /* 0.001223 */ 
   "\027\014\031" , /* 0.001223 */ 
   "\005\020" , /* 0.001247 */ 
   "\006\023" , /* 0.001259 */ 
   "\035\031" , /* 0.001277 */ 
   "\002\003" , /* 0.001289 */ 
   "\046\011" , /* 0.001289 */ 
   "\050\037" , /* 0.001289 */ 
   "\024\032" , /* 0.001295 */ 
   "\017\015" , /* 0.001313 */ 
   "\007\001\014" , /* 0.001319 */ 
   "\041\015" , /* 0.001319 */ 
   "\020\036" , /* 0.001325 */ 
   "\063" , /* 0.001325 */ 
   "\030\010" , /* 0.001331 */ 
   "\012\001\003" , /* 0.001362 */ 
   "\021\026" , /* 0.001374 */ 
   "\024\006" , /* 0.001380 */ 
   "\055" , /* 0.001392 */ 
   "\004\011" , /* 0.001398 */ 
   "\030\020\007" , /* 0.001416 */ 
   "\030\021" , /* 0.001422 */ 
   "\013\021" , /* 0.001458 */ 
   "\017\003" , /* 0.001464 */ 
   "\046\006" , /* 0.001488 */ 
   "\004\003" , /* 0.001494 */ 
   "\056\040" , /* 0.001494 */ 
   "\015\001" , /* 0.001506 */ 
   "\023\006\031" , /* 0.001512 */ 
   "\015\061" , /* 0.001536 */ 
   "\015\026" , /* 0.001542 */ 
   "\020\001" , /* 0.001548 */ 
   "\024\023" , /* 0.001572 */ 
   "\007\032" , /* 0.001590 */ 
   "\015\003" , /* 0.001603 */ 
   "\015\013\014" , /* 0.001603 */ 
   "\043\014" , /* 0.001603 */ 
   "\011\037" , /* 0.001627 */ 
   "\041\010" , /* 0.001663 */ 
   "\001\014\007" , /* 0.001681 */ 
   "\025\003" , /* 0.001681 */ 
   "\020\007\006" , /* 0.001711 */ 
   "\005\015" , /* 0.001741 */ 
   "\023\006\001" , /* 0.001765 */ 
   "\045" , /* 0.001771 */ 
   "\030\035" , /* 0.001783 */ 
   "\017\014" , /* 0.001789 */ 
   "\021\004" , /* 0.001789 */ 
   "\022\003" , /* 0.001795 */ 
   "\002\014" , /* 0.001801 */ 
   "\021\001\015" , /* 0.001819 */ 
   "\027\014" , /* 0.001819 */ 
   "\021\001" , /* 0.001874 */ 
   "\035\011" , /* 0.001886 */ 
   "\015\032" , /* 0.001898 */ 
   "\042\001\014" , /* 0.001952 */ 
   "\024\001" , /* 0.001970 */ 
   "\006\036" , /* 0.002018 */ 
   "\001\012" , /* 0.002060 */ 
   "\005\006" , /* 0.002060 */ 
   "\044\014" , /* 0.002072 */ 
   "\013\015" , /* 0.002121 */ 
   "\020\001\014" , /* 0.002139 */ 
   "\024\011" , /* 0.002175 */ 
   "\057" , /* 0.002181 */ 
   "\015\001\014" , /* 0.002193 */ 
   "\013\003" , /* 0.002229 */ 
   "\026\021" , /* 0.002241 */ 
   "\050\014" , /* 0.002253 */ 
   "\030\007" , /* 0.002283 */ 
   "\002\007" , /* 0.002289 */ 
   "\030\037" , /* 0.002295 */ 
   "\027\003" , /* 0.002313 */ 
   "\023\007" , /* 0.002325 */ 
   "\024\031" , /* 0.002332 */ 
   "\012\011" , /* 0.002416 */ 
   "\015\006" , /* 0.002434 */ 
   "\020\031" , /* 0.002458 */ 
   "\024\030" , /* 0.002470 */ 
   "\041" , /* 0.002470 */ 
   "\020\004" , /* 0.002494 */ 
   "\043" , /* 0.002506 */ 
   "\036\014" , /* 0.002603 */ 
   "\001\024" , /* 0.002609 */ 
   "\005\003" , /* 0.002663 */ 
   "\012\006" , /* 0.002669 */ 
   "\045\006" , /* 0.002693 */ 
   "\010\006" , /* 0.002729 */ 
   "\015\013" , /* 0.002735 */ 
   "\007\001" , /* 0.002741 */ 
   "\002\042\001\014" , /* 0.002850 */ 
   "\025\014" , /* 0.002862 */ 
   "\026\003" , /* 0.002886 */ 
   "\001\037" , /* 0.002910 */ 
   "\030\024" , /* 0.003054 */ 
   "\026\015" , /* 0.003109 */ 
   "\030\003" , /* 0.003175 */ 
   "\064" , /* 0.003175 */ 
   "\007\031" , /* 0.003217 */ 
   "\007\011" , /* 0.003271 */ 
   "\001\015" , /* 0.003368 */ 
   "\021\001\014" , /* 0.003434 */ 
   "\020\015\031" , /* 0.003458 */ 
   "\033" , /* 0.003579 */ 
   "\004\006" , /* 0.003705 */ 
   "\056\034" , /* 0.003723 */ 
   "\023\015" , /* 0.003946 */ 
   "\007\006" , /* 0.004018 */ 
   "\022" , /* 0.004157 */ 
   "\052" , /* 0.004163 */ 
   "\017" , /* 0.004193 */ 
   "\030\020" , /* 0.004290 */ 
   "\020\015" , /* 0.004368 */ 
   "\023\003" , /* 0.004368 */ 
   "\040" , /* 0.004434 */ 
   "\023\006" , /* 0.004446 */ 
   "\025\006" , /* 0.004488 */ 
   "\007\020" , /* 0.004573 */ 
   "\001\021" , /* 0.004735 */ 
   "\003\001" , /* 0.004814 */ 
   "\016" , /* 0.005109 */ 
   "\013\014" , /* 0.005332 */ 
   "\001\007" , /* 0.005621 */ 
   "\006\031" , /* 0.005675 */ 
   "\013\006" , /* 0.005711 */ 
   "\023\014" , /* 0.005729 */ 
   "\044" , /* 0.005850 */ 
   "\026\014" , /* 0.005970 */ 
   "\005\014" , /* 0.006055 */ 
   "\056" , /* 0.006151 */ 
   "\001\020" , /* 0.006169 */ 
   "\022\006" , /* 0.006266 */ 
   "\062" , /* 0.006404 */ 
   "\003\031" , /* 0.006513 */ 
   "\006\001" , /* 0.006567 */ 
   "\030\041" , /* 0.006711 */ 
   "\030" , /* 0.006910 */ 
   "\025" , /* 0.006958 */ 
   "\050" , /* 0.008127 */ 
   "\030\015" , /* 0.008145 */ 
   "\054" , /* 0.008212 */ 
   "\020\007" , /* 0.008778 */ 
   "\023" , /* 0.008832 */ 
   "\030\014" , /* 0.008922 */ 
   "\042" , /* 0.009826 */ 
   "\051" , /* 0.009941 */ 
   "\034" , /* 0.010182 */ 
   "\026" , /* 0.010242 */ 
   "\005" , /* 0.010645 */ 
   "\061" , /* 0.011073 */ 
   "\031" , /* 0.011314 */ 
   "\013" , /* 0.011567 */ 
   "\036" , /* 0.011652 */ 
   "\027" , /* 0.011941 */ 
   "\002" , /* 0.011947 */ 
   "\001\003" , /* 0.013007 */ 
   "\006" , /* 0.013110 */ 
   "\001\014" , /* 0.013429 */ 
   "\032" , /* 0.013664 */ 
   "\047" , /* 0.013796 */ 
   "\001" , /* 0.013839 */ 
   "\011" , /* 0.014351 */ 
   "\010" , /* 0.015345 */ 
   "\046" , /* 0.015857 */ 
   "\035" , /* 0.016556 */ 
   "\014" , /* 0.016718 */ 
   "\004" , /* 0.018056 */ 
   "\003" , /* 0.018104 */ 
   "\015" , /* 0.019514 */ 
   "\012" , /* 0.021170 */ 
   "\037" , /* 0.022357 */ 
   "\021" , /* 0.025177 */ 
   "\007" , /* 0.026273 */ 
   "\024" , /* 0.026581 */ 
   "\020" , /* 0.029376 */ 
};
extern const char * const cmu_lex_entries_huff_table[];

static int cmu_is_vowel(const char *p);
static int cmu_is_silence(const char *p);
static int cmu_has_vowel_in_list(const cst_val *v);
static int cmu_has_vowel_in_syl(const cst_item *i);
static int cmu_sonority(const char *p);

static const char * const addenda0[] = { "p,", NULL };
static const char * const addenda1[] = { "p.", NULL };
static const char * const addenda2[] = { "p(", NULL };
static const char * const addenda3[] = { "p)", NULL };
static const char * const addenda4[] = { "p[", NULL };
static const char * const addenda5[] = { "p]", NULL };
static const char * const addenda6[] = { "p{", NULL };
static const char * const addenda7[] = { "p}", NULL };
static const char * const addenda8[] = { "p:", NULL };
static const char * const addenda9[] = { "p;", NULL };
static const char * const addenda10[] = { "p?", NULL};
static const char * const addenda11[] = { "p!", NULL };
static const char * const addenda12[] = { "n@", "ae1", "t", NULL };
static const char * const addenda13[] = { "n#", "hh", "ae1","sh", NULL };
static const char * const addenda14[] = { "n$", "d", "aa1", "l", "er", NULL };
static const char * const addenda15[] = { "n%", "p", "er", "s", "eh1", "n", "t", NULL };
static const char * const addenda16[] = { "n^", "k", "eh1", "r", "eh1", "t",  NULL };
static const char * const addenda17[] = { "n&","ae1","m","p","er","s","ae1","n","d", NULL };
static const char * const addenda18[] = { "n*","ae1","s","t","er","ih1","s","k",NULL };
static const char * const addenda19[] = { "n|","b","aa1","r",NULL };
static const char * const addenda20[] = { "n\\","b","ae1","k","s","l","ae1","sh",NULL };
static const char * const addenda21[] = { "n=","iy1","k","w","ax","l","z",NULL};
static const char * const addenda22[] = { "n+","p","l","ah1","s",NULL};
static const char * const addenda23[] = { "n~","t","ih1","l","d","ax",NULL};
static const char * const addenda24[] = { "p'",NULL};
static const char * const addenda25[] = { "p`",NULL};
static const char * const addenda26[] = { "p\"",NULL};
static const char * const addenda27[] = { "p-",NULL};
static const char * const addenda28[] = { "p<",NULL};
static const char * const addenda29[] = { "p>",NULL};
static const char * const addenda30[] = { "n_","ah1","n","d","er","s","k","ao1","r",NULL};
static const char * const addenda31[] = { "s's","z",NULL};
static const char * const addenda32[] = { "nim","ay1","m",NULL};
static const char * const addenda33[] = { "vdoesnt","d","ah1","z","n","t",NULL};
static const char * const addenda34[] = { "vyoull","y","uw1","l",NULL};
static const char * const addenda35[] = { "n/","s","l","ae1","sh",NULL};

static const char * const addenda36[] = { "nin","ih","n",NULL};
static const char * const addenda37[] = { "nto","t","ax",NULL};
static const char * const addenda38[] = { "0_a","ey",NULL};
static const char * const addenda39[] = { "vhavent","hh","ae1","v","ax","n","t",NULL};
static const char * const addenda40[] = { "nemail","iy1","m","ey1","l",NULL};
static const char * const addenda41[] = { "nshit","sh","ih1","t",NULL};

static const char * const * const addenda[] = {
    addenda0,
    addenda1,
    addenda2,
    addenda3,
    addenda4,
    addenda5,
    addenda6,
    addenda7,
    addenda8,
    addenda9,
    addenda10,
    addenda11,
    addenda12,
    addenda13,
    addenda14,
    addenda15,
    addenda16,
    addenda17,
    addenda18,
    addenda19,
    addenda20,
    addenda21,
    addenda22,
    addenda23,
    addenda24,
    addenda25,
    addenda26,
    addenda27,
    addenda28,
    addenda29,
    addenda30,
    addenda31,
    addenda32,
    addenda33,
    addenda34,
    addenda35,

    addenda36,
    addenda37,
    addenda38,
    addenda39,
    addenda40,
    addenda41,
    NULL };

static int cmu_is_silence(const char *p)
{
    if (cst_streq(p,"pau"))
	return TRUE;
    else
	return FALSE;
}

static int cmu_has_vowel_in_list(const cst_val *v)
{
    const cst_val *t;

    for (t=v; t; t=val_cdr(t))
	if (cmu_is_vowel(val_string(val_car(t))))
	    return TRUE;
    return FALSE;
}

static int cmu_has_vowel_in_syl(const cst_item *i)
{
    const cst_item *n;

    for (n=i; n; n=item_prev(n))
	if (cmu_is_vowel(item_feat_string(n,"name")))
	    return TRUE;
    return FALSE;
}

static int cmu_is_vowel(const char *p)
{
    /* this happens to work for US English phoneset */
    if (strchr("aeiou",p[0]) == NULL)
	return FALSE;
    else
	return TRUE;
}

static int cmu_sonority(const char *p)
{
    /* A bunch of hacks for US English phoneset */
    if (cmu_is_vowel(p) || (cmu_is_silence(p)))
	return 5;
    else if (strchr("wylr",p[0]) != NULL)
	return 4;  /* glides/liquids */
    else if (strchr("nm",p[0]) != NULL)
	return 3;  /* nasals */
    else if (strchr("bdgjlmnnnrvwyz",p[0]) != NULL)
	return 2;  /* voiced obstruents */
    else
	return 1;
}

int cmu_syl_boundary(const cst_item *i,const cst_val *rest)
{
    /* Returns TRUE if this should be a syllable boundary */
    /* This is of course phone set dependent              */
    int p, n, nn;

    if (rest == NULL)
	return TRUE;
    else if (cmu_is_silence(val_string(val_car(rest))))
	return TRUE;
    else if (!cmu_has_vowel_in_list(rest)) /* no more vowels so rest *all* coda */
	return FALSE;
    else if (!cmu_has_vowel_in_syl(i))  /* need a vowel */
	return FALSE;
    else if (cmu_is_vowel(val_string(val_car(rest))))
	return TRUE;
    else if (val_cdr(rest) == NULL)
	return FALSE;
    else 
    {   /* so there is following vowel, and multiple phones left */
	p = cmu_sonority(item_feat_string(i,"name"));
	n = cmu_sonority(val_string(val_car(rest)));
	nn = cmu_sonority(val_string(val_car(val_cdr(rest))));

	if ((p <= n) && (n <= nn))
	    return TRUE;
	else
	    return FALSE;
    }
}

static int cmulex_dist_to_vowel(const cst_val *rest)
{
    if (rest == 0)
        return 0;  /* shouldn't get here */
    else if (cmu_is_vowel(val_string(val_car(rest))))
        return 0;
    else
        return 1+cmulex_dist_to_vowel(val_cdr(rest));
}

static const char * const cmulex_onset_trigrams[] = {
    "str", "spy", "spr", "spl", "sky", "skw", "skr", "skl", NULL
};
static const char * const cmulex_onset_bigrams[] = {
    "zw", "zl",
    "vy", "vr", "vl",
    "thw", "thr",
    "ty", "tw",
    "tr", /* "ts", */
    "shw", "shr", "shn", "shm", "shl",
    "sw", "sv", "st", "sr", "sp", "sn", "sm", "sl", "sk", "sf",
    "py", "pw", "pr", "pl",
    "ny",
    "my", "mr",
    "ly",
    "ky", "kw", "kr", "kl",
    "hhy", "hhw", "hhr", "hhl",
    "gy", "gw", "gr", "gl", 
    "fy", "fr", "fl", 
    "dy", "dw", "dr",
    "by", "bw", "br", "bl",
    NULL
};

static int cmulex_onset_bigram(const cst_val *rest)
{
    char x[10];
    int i;

    cst_sprintf(x,"%s%s",val_string(val_car(rest)),
           val_string(val_car(val_cdr(rest))));
    for (i=0; cmulex_onset_bigrams[i]; i++)
        if (cst_streq(x,cmulex_onset_bigrams[i]))
            return TRUE;
    return FALSE;
}

static int cmulex_onset_trigram(const cst_val *rest)
{
    char x[15];
    int i;

    cst_sprintf(x,"%s%s%s",val_string(val_car(rest)),
           val_string(val_car(val_cdr(rest))),
           val_string(val_car(val_cdr(val_cdr(rest)))));
    for (i=0; cmulex_onset_trigrams[i]; i++)
        if (cst_streq(x,cmulex_onset_trigrams[i]))
            return TRUE;
    return FALSE;
}

int cmu_syl_boundary_mo(const cst_item *i,const cst_val *rest)
{
    /* syl boundary maximal onset */
    int d2v;

    if (rest == NULL)
	return TRUE;
    else if (cmu_is_silence(val_string(val_car(rest))))
	return TRUE;
    else if (!cmu_has_vowel_in_list(rest)) 
        /* no more vowels so rest *all* coda */
	return FALSE;
    else if (!cmu_has_vowel_in_syl(i))  /* need a vowel */
        /* no vowel yet in syl so keep copying */
	return FALSE;
    else if (cmu_is_vowel(val_string(val_car(rest))))
        /* next is a vowel, syl has vowel, so this is a break */
	return TRUE;
    else if (cst_streq("ng",val_string(val_car(rest))))
        /* next is "ng" which can't start a word internal syl */
	return FALSE;
    else 
    {
        /* want to know if from rest to the next vowel is a valid onset */
        d2v = cmulex_dist_to_vowel(rest);
        if (d2v < 2)
            return TRUE;
        else if (d2v > 3)
            return FALSE;
        else if (d2v == 2) 
            return cmulex_onset_bigram(rest);
        else /* if (d2v == 3) */
            return cmulex_onset_trigram(rest);
        return TRUE;
    }

}

cst_lexicon cmu_lex;
cst_lts_rules cmu_lts_rules;
extern const char * const cmu_lts_phone_table[];
extern const char * const cmu_lts_letter_table[];
extern const cst_lts_addr cmu_lts_letter_index[];
extern const cst_lts_model cmu_lts_model[];

cst_lexicon *cmulex_init()
{
    /* We actually need the init function match the directory name */
    return cmu_lex_init();
}

cst_lexicon *cmu_lex_init()
{
    /* I'd like to do this as a const but it needs everything in this */
    /* file and already the bits are too big for some compilers */
    
    if (cmu_lts_rules.name)
        return &cmu_lex;  /* Already initialized */

    cmu_lts_rules.name = "cmu";
    cmu_lts_rules.letter_index = cmu_lts_letter_index;
#ifdef CST_NO_STATIC_LTS_MODEL
    /* cmu_lts_rules.models will be set elsewhere */
#else
    cmu_lts_rules.models = cmu_lts_model;
#endif
    cmu_lts_rules.phone_table = cmu_lts_phone_table;
    cmu_lts_rules.context_window_size = 4;
    cmu_lts_rules.context_extra_feats = 1;
    cmu_lts_rules.letter_table = 0 /* cmu_lts_letter_table */;

    cmu_lex.name = "cmu";
    cmu_lex.num_entries = cmu_lex_num_entries;
#ifdef CST_NO_STATIC_LEX
    /* cmu_lex.data will be set elsewhere */
#else
    /* as the data is const, we cast it through void * */
    cmu_lex.data = (unsigned char *)(void *)cmu_lex_data;
#endif
    cmu_lex.num_bytes = cmu_lex_num_bytes;
    cmu_lex.phone_table = (char **) cmu_lex_phone_table;
    cmu_lex.syl_boundary = cmu_syl_boundary_mo;
    cmu_lex.addenda = (char ***) addenda;
    cmu_lex.lts_rule_set = (cst_lts_rules *) &cmu_lts_rules;

    cmu_lex.phone_hufftable = cmu_lex_phones_huff_table;
    cmu_lex.entry_hufftable = cmu_lex_entries_huff_table;

    cmu_lex.postlex = cmu_postlex;

    return &cmu_lex;

}
