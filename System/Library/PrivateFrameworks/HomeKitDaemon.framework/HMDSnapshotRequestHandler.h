/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:03 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMDCameraStreamSnapshotHandlerDelegate.h>
#import <libobjc.A.dylib/HMDSnapshotRequestHandlerProtocol.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, HMDAccessory, NSMutableArray, HMFTimer, HMDSnapshotFile, HMDCameraStreamSnapshotHandler, NSArray;

@interface HMDSnapshotRequestHandler : HMFObject <HMFLogging, HMFTimerDelegate, HMDCameraStreamSnapshotHandlerDelegate, HMDSnapshotRequestHandlerProtocol> {

	NSString* _imageCacheDirectory;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSString* _logString;
	HMDAccessory* _accessory;
	NSMutableArray* _pendingRequests;
	HMFTimer* _mostRecentSnapshotInvalidationTimer;
	HMDSnapshotFile* _mostRecentSnapshot;
	HMDCameraStreamSnapshotHandler* _streamSnapshotHandler;
	NSArray* _supportedVideoResolutions;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) NSString * logString;                                                //@synthesize logString=_logString - In the implementation block
@property (nonatomic,__weak,readonly) HMDAccessory * accessory;                                     //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pendingRequests;                                    //@synthesize pendingRequests=_pendingRequests - In the implementation block
@property (nonatomic,retain) HMFTimer * mostRecentSnapshotInvalidationTimer;                        //@synthesize mostRecentSnapshotInvalidationTimer=_mostRecentSnapshotInvalidationTimer - In the implementation block
@property (nonatomic,retain) HMDSnapshotFile * mostRecentSnapshot;                                  //@synthesize mostRecentSnapshot=_mostRecentSnapshot - In the implementation block
@property (nonatomic,readonly) HMDCameraStreamSnapshotHandler * streamSnapshotHandler;              //@synthesize streamSnapshotHandler=_streamSnapshotHandler - In the implementation block
@property (nonatomic,retain) NSArray * supportedVideoResolutions;                                   //@synthesize supportedVideoResolutions=_supportedVideoResolutions - In the implementation block
@property (nonatomic,readonly) NSString * imageCacheDirectory;                                      //@synthesize imageCacheDirectory=_imageCacheDirectory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)logIdentifier;
-(HMDAccessory *)accessory;
-(void)timerDidFire:(id)arg1 ;
-(HMDCameraStreamSnapshotHandler *)streamSnapshotHandler;
-(void)requestSnapshot:(id)arg1 streamingTierType:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSMutableArray *)pendingRequests;
-(void)streamSnapshotHandler:(id)arg1 didGetNewSnapshot:(id)arg2 ;
-(void)streamSnapshotHandler:(id)arg1 didGetLastSnapshot:(id)arg2 ;
-(NSArray *)supportedVideoResolutions;
-(NSString *)logString;
-(id)initWithAccessory:(id)arg1 workQueue:(id)arg2 streamSnapshotHandler:(id)arg3 imageCacheDirectory:(id)arg4 logID:(id)arg5 ;
-(NSString *)imageCacheDirectory;
-(HMDSnapshotFile *)mostRecentSnapshot;
-(void)setMostRecentSnapshot:(HMDSnapshotFile *)arg1 ;
-(HMFTimer *)mostRecentSnapshotInvalidationTimer;
-(void)setMostRecentSnapshotInvalidationTimer:(HMFTimer *)arg1 ;
-(void)_getSupportedVideoResolutions:(id)arg1 streamingTierType:(unsigned long long)arg2 ;
-(void)_sendSnapshotRequest:(id)arg1 streamingTierType:(unsigned long long)arg2 ;
-(void)_handleImageResourceData:(id)arg1 error:(id)arg2 requestedResolution:(id)arg3 snapshotDataTrasaction:(id)arg4 ;
-(id)_resolutionToRequest:(unsigned long long)arg1 ;
-(id)_getOptionsForRequestToAccessory:(id)arg1 forResolution:(id)arg2 ;
-(void)_handleSupportedParameters:(id)arg1 sessionID:(id)arg2 streamingTierType:(unsigned long long)arg3 ;
-(void)_addSupportedResolutionsFrom:(id)arg1 to:(id)arg2 ;
-(id)_prepareResolutionPreference:(id)arg1 ;
-(void)setSupportedVideoResolutions:(NSArray *)arg1 ;
-(id)_saveSnapshotFile:(id)arg1 ;
@end

