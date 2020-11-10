#pragma once
#include "group.h"
#include <string>
#include <vector>

/// <summary>
/// A plan is a base class that hold all the core variables and methods that would be used within a schedule plan.
/// You can assign owners, locations, groups, etc. to this plan for future management.
/// </summary>
class Plan
{
private:
	// Name of the plan. (module, lesson, workshop, etc.)
	std::string plan_name;
	// Description of the plan.
	std::string plan_description;
	// the start time when the plan should take place. 
	tm plan_time_start;
	// the end time when the plan should be over. 
	tm plan_time_end;
	// the owners of the plan. There is a possibility the plan has multiple owners. (also known as a teachers)
	std::vector<std::string> plan_owners;
	// the locations of the plan. There is a possibility that the plan has multiple locations. (also known as classrooms)
	std::vector<std::string> plan_locations;
	// the groups that are assigned to this plan. There is a possibility that the plan has multiple groups assigned.
	std::vector<Group> plan_groups;

public:
	// Plan Getters & Setters

	// Get Plan Name.
	std::string getPlanName();
	// Set Plan Name.
	void setPlanName(std::string value);

	// Get Plan Description.
	std::string getPlanDescription();
	// Set Plan Description.
	void setPlanDescription(std::string value);

	// Set Plan Start Time.
	void setPlanTimeStart(int year, int month, int day, int hour, int minute);
	// Get Plan Start Time.
	tm getPlanTimeStart();

	// Set Plan End Time.
	void setPlanTimeEnd(int year, int month, int day, int hour, int minute);
	// Get Plan End Time.
	tm getPlanTimeEnd();

	// Add Plan Owner (Add owner to the vector of owners.)
	void addPlanOwner(std::string value);
	// Get Plan Owner at index.
	std::string getPlanOwnerAtIndex(int index);
	// Get plan owners.
	std::vector<std::string> getPlanOwners();

	// Add Plan Location (Add location to vector of locations.)
	void addPlanLocation(std::string value);
	// Get Plan Location at index.
	std::string getPlanLocationAtIndex(int index);
	// Get Plan Locations.
	std::vector<std::string> getPlanLocations();

	// Add Plan Group (Add group to vector of groups.)
	void addPlanGroup(Group groupToAdd);
	// Get Plan Group at index.
	Group getPlanGroupAtIndex(int index);
	// Get Plan Groups.
	std::vector<Group> getPlanGroups();
};
