/*
 * https://www.hackerrank.com/challenges/30-operators/problem
 */

void solve(double meal_cost, int tip_percent, int tax_percent)
{
double tip,tax,total_cost=0;
tip=meal_cost*tip_percent/100;
tax=meal_cost*tax_percent/100;
total_cost=meal_cost+tip+tax;
cout<<(int)round(total_cost) ;
}
