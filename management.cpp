/********************************************************************
** program name: shows mgmt system / management.cpp
** author: kelly thomson
** date: 12-22-2019
** description: management class source
********************************************************************/
#include "management.hpp"

/*********************************************************************
** function: parameterized constructor
*********************************************************************/
Management::Management()
{
  for (int i = 0; i < 10; i++)
  {
    shows[i] = NULL;
  }
}

/*********************************************************************
** function: destructor
*********************************************************************/
Management::~Management()
{
  delete [] shows;
}
