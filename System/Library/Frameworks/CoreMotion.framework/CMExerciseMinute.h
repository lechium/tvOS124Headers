/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:28 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CMExerciseMinuteInternal;

@interface CMExerciseMinute : NSObject {

	CMExerciseMinuteInternal* _internal;

}

@property (nonatomic,readonly) CMExerciseMinuteInternal * _internal;              //@synthesize internal=_internal - In the implementation block
+(id)maxExerciseMinuteDataEntries;
+(BOOL)isExerciseMinuteAvailable;
-(void)startUpdatesFromRecord:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)stopUpdates;
-(void)startUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)queryExerciseMinutesFromRecord:(id)arg1 handler:(/*^block*/id)arg2 ;
-(CMExerciseMinuteInternal *)_internal;
-(id)init;
-(void)dealloc;
@end

