// Mda\Client\Port.h 
//
// Copyright (c) 1997-1999 Symbian Ltd.  All rights reserved.
//

#ifndef __MDA_CLIENT_PORT_H__
#define __MDA_CLIENT_PORT_H__

// Standard EPOC32 includes
#include <e32base.h>

// Public Media Server includes
#include <mda/client/base.h>
#include <mda/common/port.h> // for uids

class RMdaPort : public RMdaObject
	{
public:
	MDA_OBJECT_FUNCTIONPACK(PortConfig,EMLbPortConfig,TMdaPackage)
	};

class RMdaSrcPort : public RMdaPort
	{ // For type safety
	};

class RMdaDstPort : public RMdaPort
	{ // For type safety
	};

#endif
