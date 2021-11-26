#ifndef DURATION_HPP
#define DURATION_HPP

class Duration {
private:
	int time;
	int alarm;
	bool alarmHasBeenSet;

public:

	Duration();
	~Duration();

	Duration(int t);

	int getDuration();

	bool tick();
	
	bool tick(int t);

	void setAlarm(int s);

	bool checkAndUpdate();

};


#endif
