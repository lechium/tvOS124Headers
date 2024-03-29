/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:24 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libMemoryResourceException.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableSet, NSSet;

@interface FPMemoryCategory : NSObject {

	NSString* _name;
	NSMutableSet* _memoryObjects;
	NSMutableSet* _memoryRegions;
	unsigned long long _totalDirtySize;
	unsigned long long _totalSwappedSize;
	unsigned long long _totalCleanSize;
	unsigned long long _totalReclaimableSize;
	unsigned long long _totalWiredSize;
	unsigned char _segment;

}

@property (readonly) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (readonly) NSSet * memoryObjects;                                //@synthesize memoryObjects=_memoryObjects - In the implementation block
@property (readonly) unsigned long long totalDirtySize;                    //@synthesize totalDirtySize=_totalDirtySize - In the implementation block
@property (readonly) unsigned long long totalSwappedSize;                  //@synthesize totalSwappedSize=_totalSwappedSize - In the implementation block
@property (readonly) unsigned long long totalCleanSize;                    //@synthesize totalCleanSize=_totalCleanSize - In the implementation block
@property (readonly) unsigned long long totalReclaimableSize;              //@synthesize totalReclaimableSize=_totalReclaimableSize - In the implementation block
@property (readonly) unsigned long long totalWiredSize;                    //@synthesize totalWiredSize=_totalWiredSize - In the implementation block
@property (readonly) int totalRegions; 
@property (nonatomic,readonly) unsigned char segment;                      //@synthesize segment=_segment - In the implementation block
@property (nonatomic,readonly) BOOL purgeableNonVolatile; 
-(NSString *)name;
-(unsigned char)segment;
-(unsigned long long)totalDirtySize;
-(unsigned long long)totalSwappedSize;
-(unsigned long long)totalCleanSize;
-(unsigned long long)totalReclaimableSize;
-(unsigned long long)totalWiredSize;
-(BOOL)purgeableNonVolatile;
-(id)initWithName:(id)arg1 segment:(unsigned char)arg2 ;
-(void)addMemoryObject:(id)arg1 ;
-(int)totalRegions;
-(NSSet *)memoryObjects;
@end

