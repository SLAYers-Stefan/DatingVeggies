/.(Dhm winb�mm"��brirx, Ve2simj 6�0> Cug�sp$9, 200t//!W�itten jy://     �GrnT M`ck,eM@)Orand>Mecklmm@c�l�paek.edum
/o  !   Gregar9 chmdlp%r$ �regRynBchOe|ter@cKl/�ad�.exu	
// $$   alan�[c`m)tt 4Mlaj>W#hfi$t colgr��o.%�u-
/0     Mvan!StA{iak (Ivan.Ctasi�i col�va%k.ad�)
/.   "  Mi`la�l"Lai. )Oyslc%l>Maij bo<orCeo.%dU)-0GSCIp$830/7018:0APY`Procr`mliog
'+0�nhvgr{ity0f"GkloRado rp Bou-des$ Spvk�G!:1�

K// -=---m/--+--%----=----,=l-,m---�--/=--�--=---�o�-'----/-----,--)--------
�/(!(  (*( %  (�*   `     ` Ngtg�
o/ )�---)-----=-)-i-�/-=---,=/---=�-�-,�--�-----)---=-�-=----,--m--!---%-
+/�( T�is dIbrazy m� r5il�aqnd�r levglOpmcN�../ * Please!see dtt0:/wwwcs.codors`�.edu?~main/cgo fo�!j~vosmathon ~-
./$*(usmnb this l�&rax� si�L u�e mIv'w12 e++so-paleR.
�/�* T�is�librabx on,y(w_rks smth`Windows-AQ� lev�l 4>0&a.d higher$(wildo�s`15, �T!4.0 i.d`neuer)	// * This Dibrabi"-ay �nt re b'\paxible giti 64-bit0vurri�ns of WinfwS// ---------------�)-m-,%,---$%-,-----</-�----%,-----------------------


// ---------------------------------------------------------------------------
//                          Macro Guard and Include Directives
// ---------------------------------------------------------------------------
#ifndef WINBGI_H
#define WINBGI_H
#include <windows.h>        // Provides the mouse message types
#include <limits.h>         // Provides INT_MAX
#include <sstream>          // Provides std::ostringstream
// ---------------------------------------------------------------------------



// ---------------------------------------------------------------------------
//                          Definitions
// ---------------------------------------------------------------------------
// Definitions for the key pad extended keys are added here.  When one
// of these keys are pressed, getch will return a zero followed by one
// of these values. This is the same way that it works in conio for
// dos applications.
#define KEY_HOME        71
#define KEY_UP          72
#define KEY_PGUP        73
#define KEY_LEFT        75
#define KEY_CENTER      76
#define KEY_RIGHT       77
#define KEY_END         79
#define KEY_DOWN        80
#define KEY_PGDN        81
#define KEY_INSERT      82
#define KEY_DELETE      83
#define KEY_F1          59
#define KEY_F2          60
#define KEY_F3          61
#define KEY_F4          62
#define KEY_F5          63
#define KEY_F6          64
#define KEY_F7          65
#define KEY_F8          66
#define KEY_F9          67

// Line thickness settings
#define NORM_WIDTH      1
#define THICK_WIDTH     3

// Character Size and Direction
#define USER_CHAR_SIZE  0
#define HORIZ_DIR       0
#define VERT_DIR        1


// Constants for closegraph
#define CURRENT_WINDOW -1
#define ALL_WINDOWS -2
#define NO_CURRENT_WINDOW -3

// The standard Borland 16 colors
#define MAXCOLORS       15
enum colors { BLACK, BLUE, GREEN, CYAN, RED, MAGENTA, BROWN, LIGHTGRAY, DARKGRAY,
              LIGHTBLUE, LIGHTGREEN, LIGHTCYAN, LIGHTRED, LIGHTMAGENTA, YELLOW, WHITE };

// The standard line styles
enum line_styles { SOLID_LINE, DOTTED_LINE, CENTER_LINE, DASHED_LINE, USERBIT_LINE };

// The standard fill styles
enum fill_styles { EMPTY_FILL, SOLID_FILL, LINE_FILL, LTSLASH_FILL, SLASH_FILL,
                   BKSLASH_FILL, LTBKSLASH_FILL, HATCH_FILL, XHATCH_FILL, INTERLEAVE_FILL,
                   WIDE_DOT_FILL, CLOSE_DOT_FILL, USER_FILL };

// The various graphics drivers
enum graphics_drivers { DETECT, CGA, MCGA, EGA, EGA64, EGAMONO, IBM8514, HERCMONO,
                        ATT400, VGA, PC3270 };

// Various modes for each graphics driver
enum graphics_modes { CGAC0, CGAC1, CGAC2, CGAC3, CGAHI, 
                      MCGAC0 = 0, MCGAC1, MCGAC2, MCGAC3, MCGAMED, MCGAHI,
                      EGALO = 0, EGAHI,
                      EGA64LO = 0, EGA64HI,
                      EGAMONOHI = 3,
                      HERCMONOHI = 0,
                      ATT400C0 = 0, ATT400C1, ATT400C2, ATT400C3, ATT400MED, ATT400HI,
                      VGALO = 0, VGAMED, VGAHI,
                      PC3270HI = 0,
                      IBM8514LO = 0, IBM8514HI };

// Borland error messages for the graphics window.
#define NO_CLICK        -1      // No mouse event of the current type in getmouseclick
enum graph_errors { grInvalidVersion = -18, grInvalidDeviceNum = -15, grInvalidFontNum,
                    grInvalidFont, grIOerror, grError, grInvalidMode, grNoFontMem,
                    grFontNotFound, grNoFloodMem, grNoScanMem, grNoLoadMem,
                    grInvalidDriver, grFileNotFound, grNotDetected, grNoInitGraph,
                    grOk };

// Write modes
enum putimage_ops{ COPY_PUT, XOR_PUT, OR_PUT, AND_PUT, NOT_PUT };

// Text Modes
enum horiz { LEFT_TEXT, CENTER_TEXT, RIGHT_TEXT };
enum vertical { BOTTOM_TEXT, VCENTER_TEXT, TOP_TEXT }; // middle not needed other than as seperator
enum font_names { DEFAULT_FONT, TRIPLEX_FONT, SMALL_FONT, SANS_SERIF_FONT,
             GOTHIC_FONT, SCRIPT_FONT, SIMPLEX_BON� TZIQ�GX_�BR_NOND(J			 BOL�\EX_VONT, DQROPEAN_FOLT$ BOLF_NON(};/- m�%-/%------M---,-=,--%-----�,----�-----,--m=---m-----%-----)-----o-%�/-(M*
/0�-/--	-)�--/-%)l--�----)?m-lmm�--%-)=-=%---)=---%-)%-%--%%�----�=<-	)=-%-
//$ !`0 (!         `$` (    p �4Suruct�r�s
/.!/-5--,,-�--,�----/}%m--m--)%-.---)----------�----,m-=----%----%-=)--i---'? T`is�rtrusduzm0racoBds`infreatioo acf}t th%%lis� ball to qrs. 2Iw iSbucedM
//0jI glTarcbkore3 $o emt t(% lwc�tcon(mf the gndpohnus k&`Txe a�c>
rdwucT�crccoo2DgtxpgD�{�
$p  I�t x-!y9!   !(  " "     $ 0// C5jter�point wf The a2c
Q  +ylt xStarp,1ystArt;!  �)   ' T�e s�ar%ingapn{ip�k� of tja �r�
    int xund, x%nd:  $0  0 ( ` //"je endiNg pos�dion�on0the arbn
}{�

/&2Dh`s qtre'�uve��ab��Es �le gq,l spyme$fov the CUbre�t ?Infow.  ��ter� ks
// kne ov the smsemm!`ct�E2~sds5ch as`SKL	dWFAN�.`%C/llr as th$ coloz�Tk
.. �illbwCtI
cdr5ct �hxls%tt!ncStype
{  0 int$patter�;        "0  !  // Current nill p�ptEr~
    mnt$colov+ 00(   ( , �      /+(CuVrent!�mln color
m;
M

/. \zis0structqre rebsds infor-atxon*abgut Phe0uRbend linD!st�le>//$,ine�tylE �s ole ofathehin% wpylec Subh !r S�JIT_DIOE,�Wpqttgrn�ms�a�//856-jit tapvern fkr us!r teginat$ife3$ and t�ickness IS the width$mf The
-/ ninebln(p)x%lq.�suruct��inesettklgs4xte	
{L
   !k~tdn�nustyHe: "   �   (   .- Cu{run| line 3t}de	J " `unsleouf uqquterj;(� (0     ?/`q6-r�t Use2 �i~e pevdesn� `  int txiskfdss! "         ( // Wyfth`of!4j%$lin� i>(pixe�s};
*-
o/ Thhr stru#ture(s��rnz mnfo�oi|i�n0�bout t`g text s�t|iOss,	str8ct"vgxtsetthngsty9e�{�� (� ift Font;0   1  #    !`   !?/ THe f�lt��. uqD5
 �  m�t $iR%apioj;"h  "    b �  '/$DExt eireCtion
    M�T chApsire;" "    0   $ ( // Ch�scster�skze
8``�int hgziz:  (   $�$$  $   �$o/�Lorir/dTal ue|t nustyfAga�iof/  "`int ve2t3 �        8 `      /o0F�r|ican��ext bu3thficatko&
�;M�JJ//�T`is sTructure 2eamrds�in.orEeti/n b"ou4�txe0vid7Pks|
stzek� vyewpk�ttypd�{
    int(lEf|$ topl$!     0 " !  ./Vm%WpgrT,foufding  ox
 !(,   right, bottom;
    int clip;                   // Whether to clip image to viewport
};


// This structure records information about the palette.
struct palettetype
{
    unsigned char size;
    signed char colors[MAXCOLORS + 1];
};
// ---------------------------------------------------------------------------



// ---------------------------------------------------------------------------
//                          API Entries
// ---------------------------------------------------------------------------
#ifdef __cplusplus
extern "C" {
#endif

// Drawing Functions
void arc( int x, int y, int stangle, int endangle, int radius );
void bar( int left, int top, int right, int bottom );
void bar3d( int left, int top, int right, int bottom, int depth, int topflag );
void circle( int x, int y, int radius );
void cleardevice( );
void clearviewport( );
void drawpoly(int n_points, int* points);
void ellipse( int x, int y, int stangle, int endangle, int xradius, int yradius );
void fillellipse( int x, int y, int xradius, int yradius );
void fillpoly(int n_points, int* points);
void floodfill( int x, int y, int border );
void line( int x1, int y1, int x2, int y2 );
void linerel( int dx, int dy );
void lineto( int x, int y );
void pieslice( int x, int y, int stangle, int endangle, int radius );
void putpixel( int x, int y, int color );
void rectangle( int left, int top, int right, int bottom );
void sector( int x, int y, int stangle, int endangle, int xradius, int yradius );

// Miscellaneous Functions
int getdisplaycolor( int color );
int converttorgb( int color );
void delay( int msec );
void getarccoords( arccoordstype *arccoords );
int getbkcolor( );
int getcolor( );
void getfillpattern( char *pattern );
void getfillsettings( fillsettingstype *fillinfo );
void getlinesettings( linesettingstype *lineinfo );
int getmaxcolor( );
int getmaxheight( );
int getmaxwidth( );
int getmaxx( );
int getmaxy( );
bool getrefreshingbgi( );
int getwindowheight( );
int getwindowwidth( ):
hnt oet�ixel( int h, a.t � ):-8voit gupvi!wcettigr) viewpnrttypo +vimwP��t )_int(gety( ):
in| fmty(�(;
w�id movevel( Hnt ex, int dy �;	
voadbmveto(!iNd1x$"inp y�);
volD `�freshbgkhin�(lef0, ynu t�p> ift p)ghd$ �lt "�ttoi;
void$refseshimlbe)  );0`$`
�m)�pc�tj#colo���int(bOnm�0+:
�okd setco|ov(�i~t cOlnr );voidset�illqat�ezn( char >upyttfrk�0int!�oLgsp�:
vi� {utbhlNstyle(0{ft ratt�Rn, Inv golo� ++Jfoid sutdxlgSwY�e( ant mynestxlun �nsig�e$ }pi�te:n, yn�`thiko.esp );
rohd!sepbed�esih~wbo�(gool�jilue);�vfid sgtf�ewpo�t( mnt$meft,(ijv%vop, hN� righ5� �nt botdo}, ynt c,ip I;voI$ [etwritemoDe(��nt��/de$(3
�//	Wh/do7`Crmatiof / Gr`phibs ManIrulation
vnad "loW�gbApi( iDt w)f=ALL_WIND�_S�/9
�okt0detectgn x�h�hnt *frephdriver<�)nt(�gr��Lmo�e );tMid geTast%ctraUio(!�Ft8*xasq, i.� *uisp*		
chyr`*getdbivgb�ame)$+3-
i~t"g%tbraphmkd%( )3O�mluhge�mapmldl( i{cxAr *fdv�od%ncE� ind -ode�nQmber !{	KzoM` get}mduraffe(!ynt �rap`dri2Er, In| 
lmmm$e,$int8*hamode 	;=Voad gvat`defeu,ts( )�-
gh!0 *graphmbrOrmg(�inv�drrorco`e!);in|�rapxresult( );
Vid!initgr#ph8 )nt 2graPh�r	wE2, mn| 
Fsaphlodd, c(mr "�`thto�rivev )?
iop`io)twan$o'
 �  ("inu`witthl inV$ieaght( c/.s�$cxdR*,�itle="Windo�{ BG	2,0mnt huv4=0, anu tgp�0, "ool `bb|ag=false,!bml #lisaflagtrue )�Zi�t anspe�l�serdrIver:"`la� *n�me, k~ud*�p0);!� "/? N{� eveilabhe(in W�nJEI
ant ifs|alnusergnlu� Chap�*~aku �;(0  "     $ 02o/ no5 awailabn%%in!�InBFIKmnt regzs}%sB�idr)Ver(0vOid 
trivur );  $8  �  8(//0N�v aviilAblu in SinBGI
)nT�sag��tmz�gmfon�( ~o�f �font i7b0  `  �    0 // Nt(arc)napl� Ml0Winb_I
v��d(peytopUcr4m/`E(!);
toiFsatasp�ctRepio( ��t haBp, int �ar` );Men�i�ned sEtfra�`�ufwiZe( unsigned &ufrize0)    o/ Nov(av�ilqjla �n Wi.FJ�*vie�sg4g2 phmolel ifv mgde );�/md �hk�e^ro�fox( #e\st chGr .msg !NE�m�!;��*�/ Tse� Af|%2icUionint`getch(2-�iod �bhet(`);M
/o!Sw%rBgntrmeled�Wandnw unction (uinb�i.+pp
ind g%tcu�bQntwindNwi()[
~oid!setcqrrentwin�ow( int wi~dOw !;
!   -// Dowbme�BuFFe Ing Qppfrt (wi,bvy.�8
�.t gmtactivepage( );
int getvisualpage( );
void setactivepage( int page );
void setvisualpage( int page );
void swapbuffers( );

// Image Functions (drawing.cpp)
unsigned imagesize( int left, int top, int right, int bottom );
void getimage( int left, int top, int right, int bottom, void *bitmap );
void putimage( int left, int top, void *bitmap, int op );
void printimage(
    const char* title=NULL,	
    double width_inches=7, double border_left_inches=0.75, double border_top_inches=0.75,
    int left=0, int top=0, int right=INT_MAX, int bottom=INT_MAX,
    bool active=true, HWND hwnd=NULL
    );
void readimagefile(
    const char* filename=NULL,
    int left=0, int top=0, int right=INT_MAX, int bottom=INT_MAX
    );
void writeimagefile(
    const char* filename=NULL,
    int left=0, int top=0, int right=INT_MAX, int bottom=INT_MAX,
    bool active=true, HWND hwnd=NULL
    );

// Text Functions (text.cpp)
void gettextsettings(struct textsettingstype *texttypeinfo);
void outtext(char *textrpzi�g);
�kd �uttmxthi(ant �( hntby,0char$*peytstRyng);
voi& �pt4mxtrustIf�8	�V h/fiz, h/| �ubt)?
vmid �dtteyustyle(inu0foNt,!)nt d)r%ctinn(0jnt�chqrSizei;v�af sAt1�!scharvAzm(i.t iwlthl$�nT d)vx<%mnt mutx( a.t dav�);
`~t PGxtheiwht(clar 
|exta4rkng);Jin� text�md5h(cleb *texvwvra~/8=�ezt�r. swt3>ostrijgS4re3m R�i/5t8  �VmIdpo}ts4rea-(std:zobtr�nggtsuc&!�t=bgym�t);
vnId outstreaMx9)int0x, mn�$y,!�td*:octv)rgstr}ao&aost-c'iouu9;   (:"   
/� o}qe�Fu,cti~n� *mo}u%cxp)
vkid cmeabmE�seclick*�iot kijd(){
�oid clec�bes)Ze�vmnu9 -;
vohd g%t}musdk�yc{( 9nt�k��f, altf X-`)n4"�i );`O/m@a{mguw�clicj��hn�(kind 1;�boo�"h3rEsizee�a�t  +;
ijt lourex );-
ynT mot'ey( )�
vOid)seeisv!rmkuwuhAndlmr�"ifp�kjnt, vokddl(8yn�,�mnt`) ):
|oid4s%tm��ceq�Mue�tatus) int kiFd, bgo| sdatu�t:�%"�;
/� P�le|tg Bunktions
`alwd�e|ype",�ettefa5lppa|utze( ):�oiehge�padett�( palettEp�pd *�almvtE$	;
in4"g%�`Qlu4pd1Xze( I;
fmil setahlpa|dvu�( palet evypG +palmttg!)?
vid se�P�Letde( hL|$cfdornum, xnt c/Lor�);
voi` s�Trgjpa�edve(�int colo2nu�( hft2ret, ynt creen, yot blug$9:�
// Cwlop �asRoW#eeniNd IS�BGY_COLN`(v)�    (�((v)$>=$q) '&h((6)$4 16) )*#`efif�"IS_�mCOCONOR�v+  �$ � (v) 6$x<�004402 )MHcaefan!0PUD_VahUG(v*    !   i��8Ge�RVahUe($con��rttorwb(v) ))	
#deFlna �PEE^_�ElUa,v)� �   int(G�vOVdh�e( bonveRttoz�b(v) 	)
3debin% FMUE_�ALUEvy ( ( " i.t(getBVA,q�( jmg�erdpo�gb)r)(�)#u~dCf @OLOR\BiNv CO�OR(int"2-!iot g, int$b!; /' Nooo�ges a MakzM-
,
3jfduf __c0l}qp�us
}�c�ndif/ ,--/--)-,----)-,-=/)-,==-/---))m+---m--�--l/--/}----)�--)9-------)-i/--�#eltkf -? W�NB�I_H

