#include <stddef.h>
#include "duration.hpp"
#include <assert.h>

Duration::Duration() {
	time = 0;
	alarm = -1;
	alarmHasBeenSet = false;
}

int Duration::getDuration() {
	return time;
}

Duration::Duration(int t){
	assert(t >= 0);
	time = t;
}

bool Duration::tick(){
	time++;
	return checkAndUpdate();
}

bool Duration::tick(int t){
	time += t;
	return checkAndUpdate();
}

void Duration::setAlarm(int s){
	assert (s > time);
	alarm = s;
	alarmHasBeenSet = true;
}
bool Duration::checkAndUpdate(){
	if (time >= alarm){
		alarm = -1;
		alarmHasBeenSet = false;
		return true;
	} else return false;
}

Duration::~Duration(){
}