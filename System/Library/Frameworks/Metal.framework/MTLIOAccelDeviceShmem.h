/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Metal/Metal-Structs.h>
@class MTLIOAccelDevice;

@interface MTLIOAccelDeviceShmem : NSObject {

	MTLIOAccelDeviceShmemPrivate* _priv;
	MTLIOAccelDevice* _device;
	unsigned _shmemID;
	unsigned _shmemSize;
	void* _virtualAddress;
	BOOL purgeable;

}

@property (readonly) void* virtualAddress;              //@synthesize virtualAddress=_virtualAddress - In the implementation block
@property (readonly) unsigned shmemID;                  //@synthesize shmemID=_shmemID - In the implementation block
@property (readonly) unsigned shmemSize;                //@synthesize shmemSize=_shmemSize - In the implementation block
-(id)initWithDevice:(id)arg1 shmemSize:(unsigned)arg2 ;
-(void*)virtualAddress;
-(unsigned)shmemID;
-(unsigned)shmemSize;
-(void)dealloc;
@end

