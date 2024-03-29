/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:45 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMCloudKitEventNotificationManagerRuntimeTest.h>

@interface IMCloudKitSyncProgressRuntimeTest : IMCloudKitEventNotificationManagerRuntimeTest {

	unsigned long long _progressCount;
	unsigned long long _maxProgressCount;
	double _progressRescheduleDelay;

}

@property (assign) unsigned long long progressCount;                 //@synthesize progressCount=_progressCount - In the implementation block
@property (assign) unsigned long long maxProgressCount;              //@synthesize maxProgressCount=_maxProgressCount - In the implementation block
@property (assign) double progressRescheduleDelay;                   //@synthesize progressRescheduleDelay=_progressRescheduleDelay - In the implementation block
-(void)cloudKitEventNotificationManager:(id)arg1 syncProgressDidUpdate:(id)arg2 ;
-(double)progressRescheduleDelay;
-(unsigned long long)progressCount;
-(unsigned long long)maxProgressCount;
-(void)setProgressCount:(unsigned long long)arg1 ;
-(void)setUp;
-(void)setProgressRescheduleDelay:(double)arg1 ;
-(void)startTest;
-(id)createSyncStatisticsForMockSyncState:(id)arg1 ;
-(void)setMaxProgressCount:(unsigned long long)arg1 ;
@end

