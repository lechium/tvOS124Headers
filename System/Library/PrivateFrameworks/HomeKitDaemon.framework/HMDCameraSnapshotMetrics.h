/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HMDCameraMetricsSnapshotLogEvent, NSError;

@interface HMDCameraSnapshotMetrics : HMFObject {

	HMDCameraMetricsSnapshotLogEvent* _cameraSnapshotMetricsLogEvent;
	NSError* _error;

}

@property (nonatomic,readonly) HMDCameraMetricsSnapshotLogEvent * cameraSnapshotMetricsLogEvent;              //@synthesize cameraSnapshotMetricsLogEvent=_cameraSnapshotMetricsLogEvent - In the implementation block
@property (nonatomic,retain) NSError * error;                                                                 //@synthesize error=_error - In the implementation block
-(id)initWithSessionID:(id)arg1 cameraAccessory:(id)arg2 isLocal:(BOOL)arg3 snapshotForNotification:(BOOL)arg4 ;
-(HMDCameraMetricsSnapshotLogEvent *)cameraSnapshotMetricsLogEvent;
-(void)dealloc;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end

