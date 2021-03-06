/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/IOSurface.framework/IOSurface
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct __IOSurfaceClient* IOSurfaceClientRef;

typedef struct IONotificationPort* IONotificationPortRef;

typedef struct {
	unsigned long long clientAddress;
	unsigned surfaceID;
	unsigned pixelFormat;
	unsigned retainCount;
	unsigned yCbCrMatrix;
	unsigned cacheMode;
	unsigned mapCacheAttribute;
	unsigned purgeableState;
	unsigned purgeableStateAPI;
	unsigned allocOffset;
	unsigned allocSize;
	unsigned char isGlobal;
	unsigned char isAllocated;
	unsigned char isWired;
	unsigned char pad;
	unsigned morePad;
	unsigned long long detachModeCode;
	unsigned long long initDetachModeCodeTime;
	unsigned long long protectionOptions;
} SCD_Struct_IO2;

typedef struct {
	unsigned offset;
	unsigned width;
	unsigned height;
	unsigned bytesPerRow;
	unsigned bytesPerElement;
	unsigned elementWidth;
	unsigned elementHeight;
} SCD_Struct_IO3;

