/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMDCameraStreamControlManagerDelegate, OS_dispatch_queue;
@class NSObject, HMDAccessory, HMDService, NSNumber, HMDCameraSessionID, HMDCameraStreamSnapshotHandler, HMDCameraStreamMetrics, NSString;

@interface HMDCameraStreamControlManager : HMFObject <HMFLogging> {

	id<HMDCameraStreamControlManagerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	HMDAccessory* _accessory;
	HMDService* _streamManagementService;
	NSNumber* _slotIdentifier;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMDCameraSessionID* _sessionID;
	HMDCameraStreamSnapshotHandler* _streamSnapshotHandler;
	HMDCameraStreamMetrics* _streamMetrics;

}

@property (nonatomic,__weak,readonly) id<HMDCameraStreamControlManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;                             //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,__weak,readonly) HMDAccessory * accessory;                                        //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,readonly) HMDService * streamManagementService;                                   //@synthesize streamManagementService=_streamManagementService - In the implementation block
@property (nonatomic,retain) NSNumber * slotIdentifier;                                                //@synthesize slotIdentifier=_slotIdentifier - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                                 //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) HMDCameraSessionID * sessionID;                                         //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) HMDCameraStreamSnapshotHandler * streamSnapshotHandler;                 //@synthesize streamSnapshotHandler=_streamSnapshotHandler - In the implementation block
@property (nonatomic,readonly) HMDCameraStreamMetrics * streamMetrics;                                 //@synthesize streamMetrics=_streamMetrics - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(HMDCameraSessionID *)sessionID;
-(id)logIdentifier;
-(HMDAccessory *)accessory;
-(NSNumber *)slotIdentifier;
-(void)setSlotIdentifier:(NSNumber *)arg1 ;
-(HMDCameraStreamSnapshotHandler *)streamSnapshotHandler;
-(void)_callStreamStopped:(id)arg1 ;
-(id)initWithSessionID:(id)arg1 workQueue:(id)arg2 streamSnapshotHandler:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 accessory:(id)arg6 streamManagementService:(id)arg7 isLocal:(BOOL)arg8 ;
-(void)_reportInternalErrorCode:(long long)arg1 ;
-(void)_reportErrorCode:(long long)arg1 ;
-(void)_callStreamNegotiated:(id)arg1 ;
-(void)_cleanUpStreamSession:(id)arg1 ;
-(void)_callStreamStarted;
-(void)_callStreamRemoteConnectionSetup;
-(void)_callStreamFirstFrameReceived:(unsigned long long)arg1 aspectRatio:(id)arg2 slotIdentifier:(id)arg3 ;
-(void)_callStreamReconfigured;
-(HMDCameraStreamMetrics *)streamMetrics;
-(HMDService *)streamManagementService;
-(id)managerProtocol;
-(id<HMDCameraStreamControlManagerDelegate>)delegate;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)_reportError:(id)arg1 ;
@end

