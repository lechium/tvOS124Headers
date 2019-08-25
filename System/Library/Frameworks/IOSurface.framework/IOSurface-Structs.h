/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
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

