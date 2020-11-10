#pragma once
#include "plan.h"
#include <string>
#include <vector>

/// <summary>
/// The schedule class is a collection like type. It holds the plans and (in theory) shows them to the user.
/// Future methods would include stuff like: Editing plans from within the schedule, changing plans enterily from the GUI.
/// </summary>
class Schedule
{
private:
	// List with all the plans within the schedule
	std::vector<Plan> plans;
public:
	// Returns a plan at the given index.
	Plan getPlan(int index);
	// Return the vector with all the plans.
	std::vector<Plan> getPlans();
	// Add a plan to the plans vector.
	void addPlan(Plan planToAdd);
	// Add another vector with plans to the plans vector.
	void addPlan(std::vector<Plan> plansToAdd);

	// Remove a plan at the given index.
	void removePlan(int index);
};
