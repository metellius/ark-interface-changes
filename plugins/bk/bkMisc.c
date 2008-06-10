/******************************* LICENSE **************************************
* Any code in this file may be redistributed or modified under the terms of
* the GNU General Public License as published by the Free Software 
* Foundation; version 2 of the license.
****************************** END LICENSE ***********************************/

/******************************************************************************
* Author:
* Andrew Smith, http://littlesvr.ca/misc/contactandrew.php
*
* Copyright 2005-2007 Andrew Smith <andrew-smith@mail.ru>
*
* Contributors:
* 
******************************************************************************/

#include <time.h>

#include "bkInternal.h"
#include "bkMisc.h"

void maybeUpdateProgress(VolInfo* volInfo)
{
    time_t timeNow;
    
    if(volInfo->progressFunction == NULL)
        return;
    
    time(&timeNow);
    
    if(timeNow - volInfo->lastTimeCalledProgress >= 1)
    {
        volInfo->progressFunction(volInfo);
        
        volInfo->lastTimeCalledProgress = timeNow;
    }
}
