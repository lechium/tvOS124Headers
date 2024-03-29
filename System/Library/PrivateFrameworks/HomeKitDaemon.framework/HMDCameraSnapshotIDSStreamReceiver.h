/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDCameraSnapshotIDSStream.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>
#import <libobjc.A.dylib/IDSSessionDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue, HMDCameraSnapshotIDSStreamReceiverDelegate;
@class HMDSnapshotFile, IDSSession, NSObject, NSString;

@interface HMDCameraSnapshotIDSStreamReceiver : HMDCameraSnapshotIDSStream <IDSServiceDelegate, IDSSessionDelegate, HMFLogging> {

	HMDSnapshotFile* _snapshotFile;
	IDSSession* _idsSession;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	id<HMDCameraSnapshotIDSStreamReceiverDelegate> _delegate;

}

@property (nonatomic,retain) IDSSession * idsSession;                                                     //@synthesize idsSession=_idsSession - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                                  //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (assign,nonatomic,__weak) id<HMDCameraSnapshotIDSStreamReceiverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) HMDSnapshotFile * snapshotFile;                                            //@synthesize snapshotFile=_snapshotFile - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)logIdentifier;
-(IDSSession *)idsSession;
-(void)setIdsSession:(IDSSession *)arg1 ;
-(void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6 ;
-(HMDSnapshotFile *)snapshotFile;
-(void)_callFileReceived:(id)arg1 ;
-(id)initWithSessionID:(id)arg1 workQueue:(id)arg2 snapshotFile:(id)arg3 delegate:(id)arg4 queue:(id)arg5 ;
-(void)dealloc;
-(void)setDelegate:(id<HMDCameraSnapshotIDSStreamReceiverDelegate>)arg1 ;
-(id<HMDCameraSnapshotIDSStreamReceiverDelegate>)delegate;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

