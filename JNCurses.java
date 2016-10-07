/**
 * description:
 * <p>To write a terminal program by Java, I need a class to call the methods in "curses.h". Then I create this class to translate those methods to Java methods.<br>
 * Most native functions use the native name and have same param and return.But some types that can not be translate by JNI will be different.<br>
 * This class will use "stdscr" only. So some functions with param "win" will be not translate, and some will ignore the param "win".
 * @author hopeful
 * @version 0.1.0
 * @date 2016.10.07
 */
public class JNCurses {

	public native void initscr();

	public native int endwin();

	public native int raw();

	public native int cbreak();

	public native int echo();

	public native int noecho();

	public native int keypad(boolean active);

	public native void timeout(int t);

	public native int addch(byte ch);

	public native int mvaddch(int y,int x,byte ch);

	public native int echochar(byte ch);

	public native int addstr(String str);

	public native int addnstr(String str,int n);

	public native int mvaddstr(int y,int x,String str);

	public native int mvaddnstr(int y,int x,String str,int n);

	public native byte getch();

	public native String getstr();
	
	public native int refresh();

	public native int erase();

	public native int clear();

	public native int clrtobot();

	public native int clrtoeol();

	public native int move(int new_y,int new_x);

	public native int curs_set(int visibility);

	public native int border(byte ls,byte rs,byte ts,byte bs,byte tl,byte tr,byte bl,byte br);

	public native int box(byte verch,byte horch);

	public native int vline(byte ch,int n);

	public native int hline(byte ch,int n);

	public native boolean has_colors();

	public native int start_color();

	public native int init_pair(short pair_number,short foreground,short background);

	public native int COLOR_PAIR(int pair_number);

	public native int init_color(short color_number,short red,short green,short blue);

	public native boolean can_change_color();

	public native int attron(int NCURSES_ATTR_T);

	public native int attroff(int NCURSES_ATTR_T);

	public native int attrset(int NCURSES_ATTR_T);

	public native int beep();

	static{
		System.loadLibrary("jncurses");
	}

	private static JNCurses instance;

	public static JNCurses getInstance() {
		if(instance == null)
			instance = new JNCurses();
		return instance;
	}

	public int addch(char ch) {
		return addch((byte)(ch&0xFF));
	}
}
