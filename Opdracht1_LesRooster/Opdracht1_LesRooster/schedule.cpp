#include "schedule.h"

Plan Schedule::getPlan(int index)
{
	return plans[index];
}

std::vector<Plan> Schedule::getPlans()
{
	return plans;
}

void Schedule::addPlan(Plan planToAdd)
{
	plans.push_back(planToAdd);
}

void Schedule::addPlan(std::vector<Plan> plansToAdd)
{
	plans.insert(plans.end(), plansToAdd.begin(), plansToAdd.end());
}

void Schedule::removePlan(int index)
{
	plans.erase(plans.begin() + index);
}
