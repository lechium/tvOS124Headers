/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
@interface TrackerPolicy : NSObject {

	unsigned _defaultDisposition;
	unsigned _numClassMaps;
	mach_timebase_info _classMap[12];
	unsigned _numMgmtFlagsMaps;
	mach_timebase_info _mgmtFlagsMap[4];
	unsigned long long _maximumConnectionsPerHour;

}

@property (assign) unsigned long long maximumConnectionsPerHour;              //@synthesize maximumConnectionsPerHour=_maximumConnectionsPerHour - In the implementation block
-(int)configureInstance:(id)arg1 ;
-(void)setMaximumConnectionsPerHour:(unsigned long long)arg1 ;
-(void)addDisposition:(unsigned)arg1 forTrafficClass:(unsigned)arg2 ;
-(void)addDisposition:(unsigned)arg1 forTrafficMgmtFlags:(unsigned)arg2 ;
-(unsigned)flowDispositionFor:(id)arg1 ;
-(unsigned long long)maximumConnectionsPerHour;
-(id)init;
-(id)description;
@end

