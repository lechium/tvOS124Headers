/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:13 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class AVConferenceXPCClient, NSString, NSMutableDictionary, NSObject;

@interface AVCMoments : NSObject {

	AVConferenceXPCClient* _connection;
	long long _streamToken;
	id _delegate;
	unsigned _capabilities;
	NSString* _deviceID;
	NSMutableDictionary* _requests;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	int _currentActiveRequestsCount;
	int _currentPendingRequestsCount;

}

@property (nonatomic,readonly) id<AVCMomentsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long streamToken;                        //@synthesize streamToken=_streamToken - In the implementation block
@property (nonatomic,readonly) unsigned capabilities;                        //@synthesize capabilities=_capabilities - In the implementation block
@property (nonatomic,readonly) NSString * deviceID;                          //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,readonly) int activeRequestCount;                       //@synthesize currentActiveRequestsCount=_currentActiveRequestsCount - In the implementation block
@property (nonatomic,readonly) int pendingRequestCount;                      //@synthesize currentPendingRequestsCount=_currentPendingRequestsCount - In the implementation block
-(int)activeRequestCount;
-(void)registerBlocksForNotifications;
-(void)deregisterBlocksForNotifications;
-(void)didStartProcessingRequestHelperWithResult:(id)arg1 ;
-(void)didEndProcessingRequestHelperWithResult:(id)arg1 ;
-(void)didFinishRequestHelperWithResult:(id)arg1 ;
-(id)initWithStreamToken:(long long)arg1 deviceID:(id)arg2 delegate:(id)arg3 dispatchQueue:(id)arg4 ;
-(id)newRequestWithMediaType:(unsigned char)arg1 ;
-(BOOL)avcMomentsRequestDidStartRequest:(id)arg1 withError:(id*)arg2 ;
-(BOOL)avcMomentsRequestDidEndRequest:(id)arg1 withError:(id*)arg2 ;
-(BOOL)avcMomentsRequestDidRejectRequest:(id)arg1 withError:(id*)arg2 ;
-(int)pendingRequestCount;
-(unsigned)capabilities;
-(long long)streamToken;
-(NSString *)deviceID;
-(void)dealloc;
-(id)description;
-(id<AVCMomentsDelegate>)delegate;
-(void)disconnect;
-(BOOL)connect;
@end

