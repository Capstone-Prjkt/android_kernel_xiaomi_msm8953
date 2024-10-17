// SPDX-License-Identifier: GPL-2.0

#ifndef _BATTERY_SAVER_H_
#define _BATTERY_SAVER_H_

#include <linux/types.h>

#ifdef CONFIG_BATTERY_SAVER
bool is_battery_saver_on(void);
void enable_battery_saver(bool status);
#else
static inline bool is_battery_saver_on()
{
	return false;
}
static inline void update_battery_saver(bool status)
{
}
#endif

#endif /* _BATTERY_SAVER_H_ */