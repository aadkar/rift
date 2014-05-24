/*
 *  Rift.cp
 *  Rift
 *
 *  Created by Ashutosh Adkar on 24/05/14.
 *  Copyright (c) 2014 Ashutosh Adkar. All rights reserved.
 *
 */

#include <iostream>
#include "Rift.h"
#include "RiftPriv.h"

void Rift::HelloWorld(const char * s)
{
	 RiftPriv *theObj = new RiftPriv;
	 theObj->HelloWorldPriv(s);
	 delete theObj;
};

void RiftPriv::HelloWorldPriv(const char * s) 
{
	std::cout << s << std::endl;
};

