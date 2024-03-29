/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:24 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libMemoryResourceException.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libMemoryResourceException.dylib/libMemoryResourceException.dylib-Structs.h>
@class NSMutableArray, NSString, NSArray, NSDictionary;

@interface FPProcess : NSObject {

	int _pid;
	BOOL _is64bit;
	int _idleExitStatus;
	NSMutableArray* _errors;
	NSMutableArray* _warnings;
	NSString* _name;
	NSArray* _memoryRegions;
	NSString* _displayString;
	unsigned long long _pageSize;

}

@property (assign) BOOL is64bit;                                         //@synthesize is64bit=_is64bit - In the implementation block
@property (retain) NSString * displayString;                             //@synthesize displayString=_displayString - In the implementation block
@property (assign) unsigned long long pageSize;                          //@synthesize pageSize=_pageSize - In the implementation block
@property (retain) NSArray * memoryRegions;                              //@synthesize memoryRegions=_memoryRegions - In the implementation block
@property (assign) int pid;                                              //@synthesize pid=_pid - In the implementation block
@property (copy) NSString * name;                                        //@synthesize name=_name - In the implementation block
@property (readonly) int idleExitStatus;                                 //@synthesize idleExitStatus=_idleExitStatus - In the implementation block
@property (readonly) NSDictionary * auxData; 
@property (nonatomic,readonly) BOOL breakDownPhysFootprint; 
+(id)_nameForBsdInfo:(proc_bsdinfo*)arg1 ;
+(id)processWithBsdInfo:(proc_bsdinfo*)arg1 ;
+(id)_nameForBsdInfoCommName:(proc_bsdinfo*)arg1 ;
+(id)processWithPid:(int)arg1 ;
+(void)_addGlobalError:(id)arg1 ;
+(void)_clearGlobalErrors;
+(id)globalErrors;
+(id)allProcessesExcludingPids:(id)arg1 ;
+(id)pidsForStringDescriptions:(id)arg1 errors:(id*)arg2 ;
+(id)childPidsForPids:(id)arg1 ;
+(id)removeIdleExitCleanProcessesFrom:(id)arg1 ;
-(void)setPid:(int)arg1 ;
-(id)errors;
-(unsigned long long)pageSize;
-(void)setPageSize:(unsigned long long)arg1 ;
-(id)warnings;
-(BOOL)is64bit;
-(int)pid;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)hash;
-(NSString *)displayString;
-(void)setDisplayString:(NSString *)arg1 ;
-(void)gatherData;
-(id)initWithBsdInfo:(proc_bsdinfo*)arg1 ;
-(BOOL)_populateTask;
-(BOOL)_isAlive;
-(void)setMemoryRegions:(NSArray *)arg1 ;
-(unsigned long long)_gatherPageSize;
-(NSDictionary *)auxData;
-(int)idleExitStatus;
-(BOOL)breakDownPhysFootprint;
-(id)asNumber;
-(void)setIs64bit:(BOOL)arg1 ;
-(NSArray *)memoryRegions;
@end

