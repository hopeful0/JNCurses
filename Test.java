public class Test {

	public static void main(String[] args) {
		System.out.println("libpath:"+System.getProperty("java.library.path"));
		JNCurses jncurses = JNCurses.getInstance();
		jncurses.initscr();
		jncurses.curs_set(0);
		//jncurses.box((byte)('|'&0xFF),(byte)('-'&0xFF));
		jncurses.box((byte)0,(byte)0);
		jncurses.move(1,1);
		jncurses.addstr("Hello World!");
		jncurses.mvaddstr(2,1,"This is a java program which use jni to call the functions in \"ncurses.h\".And I call it \"JNCurses\".");
		jncurses.mvaddstr(3,1,"中文测试！");
		jncurses.mvaddstr(4,1,"Chinese test failed!");
		jncurses.mvaddstr(5,1,"Color test:");
		jncurses.mvaddstr(6,1,"has_colors():"+jncurses.has_colors());
		jncurses.start_color();
		jncurses.mvaddstr(7,1,"start_color()");
		jncurses.init_pair((short)1,(short)6,(short)0);
		jncurses.mvaddstr(8,1,"init_pair(1,COLOR_CYAN,COLOR_BLACK)");
		jncurses.mvaddstr(9,1,"attron(COLOR_PAIR(1))");
		jncurses.attron(jncurses.COLOR_PAIR(1));
		jncurses.mvaddstr(10,1,"print test!");
		jncurses.attroff(jncurses.COLOR_PAIR(1));
		jncurses.mvaddstr(11,1,"attroff(COLOR_PAIR(1))");
		jncurses.mvaddstr(12,1,"color test end!");
		jncurses.mvaddstr(13,1,"some other attr test:");
		jncurses.attron(1<<10+8);
		jncurses.mvaddstr(14,1,"print test!");
		jncurses.attrset(0);
		jncurses.attron(1<<9+8);
		jncurses.mvaddstr(15,1,"print test!");
		jncurses.attrset(0);
		jncurses.attron(1<<12+8);
		jncurses.mvaddstr(16,1,"print test!");
		jncurses.attrset(0);
		jncurses.attron(1<<13+8);
		jncurses.mvaddstr(17,1,"print test!");
		jncurses.attrset(0);
		jncurses.mvaddstr(18,1,"print line test:");
		jncurses.hline((byte)('*'&0xFF),20);
		jncurses.vline((byte)('#'&0xFF),5);
		jncurses.mvaddstr(19,1,"test end!");
		jncurses.mvaddstr(60,1,"write by hopeful in 2016.10.07");
		jncurses.refresh();
		jncurses.getch();
		jncurses.endwin();
	}
}
