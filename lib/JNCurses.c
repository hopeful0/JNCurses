#include "JNCurses.h"
#include <ncurses.h>

/*
 * Class:     JNCurses
 * Method:    initscr
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JNCurses_initscr (JNIEnv *env, jobject obj) {
	initscr();
}

/*
 * Class:     JNCurses
 * Method:    endwin
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_JNCurses_endwin (JNIEnv *env, jobject obj) {
	return (jint) endwin();
}

/*
 * Class:     JNCurses
 * Method:    raw
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_JNCurses_raw (JNIEnv *env, jobject obj) {
	return (jint) raw();
}

/*
 * Class:     JNCurses
 * Method:    cbreak
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_JNCurses_cbreak (JNIEnv *env, jobject obj) {
	return (jint) cbreak();
}

/*
 * Class:     JNCurses
 * Method:    echo
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_JNCurses_echo (JNIEnv *env, jobject obj) {
	return (jint) echo();
}

/*
 * Class:     JNCurses
 * Method:    noecho
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_JNCurses_noecho (JNIEnv *env, jobject obj) {
	return (jint) noecho();
}

/*
 * Class:     JNCurses
 * Method:    keypad
 * Signature: (Z)I
 */
JNIEXPORT jint JNICALL Java_JNCurses_keypad (JNIEnv *env, jobject obj, jboolean active) {
	return (jint) keypad(stdscr,(bool) active);
}

/*
 * Class:     JNCurses
 * Method:    timeout
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_JNCurses_timeout (JNIEnv *env, jobject obj, jint t) {
	timeout((int) t);
}

/*
 * Class:     JNCurses
 * Method:    addch
 * Signature: (B)I
 */
JNIEXPORT jint JNICALL Java_JNCurses_addch (JNIEnv *env, jobject obj, jbyte ch) {
	return (jint) addch((chtype) ch);
}

/*
 * Class:     JNCurses
 * Method:    mvaddch
 * Signature: (IIB)I
 */
JNIEXPORT jint JNICALL Java_JNCurses_mvaddch (JNIEnv *env, jobject obj, jint y, jint x, jbyte ch) {
	return (jint) mvaddch((int) y,(int) x,(chtype) ch);
}

/*
 * Class:     JNCurses
 * Method:    echochar
 * Signature: (B)I
 */
JNIEXPORT jint JNICALL Java_JNCurses_echochar (JNIEnv *env, jobject obj, jbyte ch) {
	return (jint) echochar((chtype) ch);
}

/*
 * Class:     JNCurses
 * Method:    addstr
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_JNCurses_addstr (JNIEnv *env, jobject obj, jstring str) {
	const char *c_str=(*env)->GetStringUTFChars(env,str,0);
	int res = addstr(c_str);
	(*env)->ReleaseStringUTFChars(env,str,c_str);
	return (jint) res;
}

/*
 * Class:     JNCurses
 * Method:    addnstr
 * Signature: (Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_JNCurses_addnstr (JNIEnv *env, jobject obj, jstring str, jint n) {
	const char *c_str=(*env)->GetStringUTFChars(env,str,0);
	int res = addnstr(c_str,n);
	(*env)->ReleaseStringUTFChars(env,str,c_str);
	return (jint) res;
}

/*
 * Class:     JNCurses
 * Method:    mvaddstr
 * Signature: (IILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_JNCurses_mvaddstr (JNIEnv *env, jobject obj, jint y, jint x, jstring str) {
	const char *c_str=(*env)->GetStringUTFChars(env,str,0);
	int res = mvaddstr(y,x,c_str);
	(*env)->ReleaseStringUTFChars(env,str,c_str);
	return (jint) res;
}

/*
 * Class:     JNCurses
 * Method:    mvaddnstr
 * Signature: (IILjava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_JNCurses_mvaddnstr (JNIEnv *env, jobject obj, jint y, jint x, jstring str, jint n) {
	const char *c_str=(*env)->GetStringUTFChars(env,str,0);
	int res = mvaddnstr(y,x,c_str,n);
	(*env)->ReleaseStringUTFChars(env,str,c_str);
	return (jint) res;
}

/*
 * Class:     JNCurses
 * Method:    getch
 * Signature: ()B
 */
JNIEXPORT jbyte JNICALL Java_JNCurses_getch (JNIEnv *env, jobject obj) {
	return (jbyte) getch();
}

/*
 * Class:     JNCurses
 * Method:    getstr
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_JNCurses_getstr (JNIEnv *env, jobject obj);

/*
 * Class:     JNCurses
 * Method:    refresh
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_JNCurses_refresh (JNIEnv *env, jobject obj) {
	return (jint) refresh();
}

/*
 * Class:     JNCurses
 * Method:    erase
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_JNCurses_erase (JNIEnv *env, jobject obj) {
	return (jint) erase();
}

/*
 * Class:     JNCurses
 * Method:    clear
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_JNCurses_clear (JNIEnv *env, jobject obj) {
	return (jint) clear();
}

/*
 * Class:     JNCurses
 * Method:    clrtobot
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_JNCurses_clrtobot (JNIEnv *env, jobject obj) {
	return (jint) clrtobot();
}

/*
 * Class:     JNCurses
 * Method:    clrtoeol
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_JNCurses_clrtoeol (JNIEnv *env, jobject obj) {
	return (jint) clrtoeol();
}

/*
 * Class:     JNCurses
 * Method:    move
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_JNCurses_move (JNIEnv *env, jobject obj, jint new_y, jint new_x) {
	return (jint) move(new_y,new_x);
}

/*
 * Class:     JNCurses
 * Method:    curs_set
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_JNCurses_curs_1set (JNIEnv *env, jobject obj, jint visibility) {
	return (jint) curs_set(visibility);
}

/*
 * Class:     JNCurses
 * Method:    border
 * Signature: (BBBBBBBB)I
 */
JNIEXPORT jint JNICALL Java_JNCurses_border (JNIEnv *env, jobject obj, jbyte ls, jbyte rs, jbyte ts, jbyte bs, jbyte tl, jbyte tr, jbyte bl, jbyte br) {
	return (jint) border((chtype) ls,(chtype) rs,(chtype) ts,(chtype) bs,(chtype) tl,(chtype) tr,(chtype) bl,(chtype) br);
}

/*
 * Class:     JNCurses
 * Method:    box
 * Signature: (BB)I
 */
JNIEXPORT jint JNICALL Java_JNCurses_box (JNIEnv *env, jobject obj, jbyte vert, jbyte hor) {
	return (jint) box(stdscr,(chtype) vert,(chtype) hor);
}

/*
 * Class:     JNCurses
 * Method:    vline
 * Signature: (BI)I
 */
JNIEXPORT jint JNICALL Java_JNCurses_vline (JNIEnv *env, jobject obj, jbyte ch, jint n) {
	return (jint) vline((chtype) ch,n);
}

/*
 * Class:     JNCurses
 * Method:    hline
 * Signature: (BI)I
 */
JNIEXPORT jint JNICALL Java_JNCurses_hline (JNIEnv *env, jobject obj, jbyte ch, jint n) {
	return (jint) hline((chtype) ch,n);
}

/*
 * Class:     JNCurses
 * Method:    has_colors
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_JNCurses_has_1colors (JNIEnv *env, jobject obj) {
	return (jboolean) has_colors();
}

/*
 * Class:     JNCurses
 * Method:    start_color
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_JNCurses_start_1color (JNIEnv *env, jobject obj) {
	return (jint) start_color();
}

/*
 * Class:     JNCurses
 * Method:    init_pair
 * Signature: (SSS)I
 */
JNIEXPORT jint JNICALL Java_JNCurses_init_1pair (JNIEnv *env, jobject obj, jshort pair_number, jshort foreground, jshort background) {
	return (jint) init_pair((short) pair_number,(short) foreground,(short) background);
}

/*
 * Class:     JNCurses
 * Method:    COLOR_PAIR
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_JNCurses_COLOR_1PAIR (JNIEnv *env, jobject obj, jint pair_number) {
	return (jint) COLOR_PAIR(pair_number);
}

/*
 * Class:     JNCurses
 * Method:    init_color
 * Signature: (SSSS)I
 */
JNIEXPORT jint JNICALL Java_JNCurses_init_1color (JNIEnv *env, jobject obj, jshort color_number, jshort red, jshort green, jshort blue) {
	return (jint) init_color((short) color_number,(short) red,(short) green,(short) blue);
}

/*
 * Class:     JNCurses
 * Method:    can_change_color
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_JNCurses_can_1change_1color (JNIEnv *env, jobject obj) {
	return (jboolean) can_change_color();
}

/*
 * Class:     JNCurses
 * Method:    attron
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_JNCurses_attron (JNIEnv *env, jobject obj, jint attr) {
	return (jint) attron((NCURSES_ATTR_T) attr);
}

/*
 * Class:     JNCurses
 * Method:    attroff
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_JNCurses_attroff (JNIEnv *env, jobject obj, jint attr) {
	return (jint) attroff((NCURSES_ATTR_T) attr);
}

/*
 * Class:     JNCurses
 * Method:    attrset
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_JNCurses_attrset (JNIEnv *env, jobject obj, jint attr) {
	return (jint) attrset((NCURSES_ATTR_T) attr);
}

/*
 * Class:     JNCurses
 * Method:    beep
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_JNCurses_beep (JNIEnv *env, jobject obj) {
	return (jint) beep();
}
