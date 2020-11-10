#include "plan.h"

std::string Plan::getPlanName()
{
	return plan_name;
}
void Plan::setPlanName(std::string value)
{
	plan_name = value;
}

std::string Plan::getPlanDescription()
{
	return plan_description;
}
void Plan::setPlanDescription(std::string value)
{
	plan_description = value;
}

tm Plan::getPlanTimeStart()
{
	return plan_time_start;
}
void Plan::setPlanTimeStart(int year, int month, int day, int hour, int minute)
{
	plan_time_start.tm_year = year;
	plan_time_start.tm_mon = month;
	plan_time_start.tm_mday = day;
	plan_time_start.tm_hour = hour;
	plan_time_start.tm_min = minute;
}

tm Plan::getPlanTimeEnd()
{
	return plan_time_end;
}
void Plan::setPlanTimeEnd(int year, int month, int day, int hour, int minute)
{
	plan_time_end.tm_year = year;
	plan_time_end.tm_mon = month;
	plan_time_end.tm_mday = day;
	plan_time_end.tm_hour = hour;
	plan_time_end.tm_min = minute;
}

void Plan::addPlanOwner(std::string value)
{
	plan_owners.push_back(value);
}
std::string Plan::getPlanOwnerAtIndex(int index)
{
	return plan_owners[index];
}
std::vector<std::string> Plan::getPlanOwners()
{
	return plan_owners;
}

void Plan::addPlanLocation(std::string value)
{
	plan_locations.push_back(value);
}
std::vector<std::string> Plan::getPlanLocations()
{
	return plan_locations;
}
std::string Plan::getPlanLocationAtIndex(int index)
{
	return plan_locations[index];
}

void Plan::addPlanGroup(Group groupToAdd)
{
	plan_groups.push_back(groupToAdd);
}
Group Plan::getPlanGroupAtIndex(int index)
{
	return plan_groups[index];
}
std::vector<Group> Plan::getPlanGroups()
{
	return plan_groups;
}
