/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:37 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CATTransportDelegate;
@class CATStateMachine, CATOperationQueue, NSString;

@interface CATTransport : NSObject {

	CATStateMachine* mFSM;
	CATOperationQueue* mControlQueue;
	CATOperationQueue* mMessageQueue;
	CATTransport* mStrongSelf;
	NSString* _name;
	id<CATTransportDelegate> _delegate;

}

@property (nonatomic,copy) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (assign,nonatomic,__weak) id<CATTransportDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)suspendConnection;
-(void)resumeConnection;
-(void)sendMessage:(id)arg1 ;
-(void)didInterruptWithError:(id)arg1 ;
-(void)didReceiveMessage:(id)arg1 ;
-(void)didInvalidate;
-(void)invalidateConnection;
-(id)operationToSendMessage:(id)arg1 ;
-(void)delegateDidInvalidate;
-(void)enqueueDelegateDidInterruptWithError:(id)arg1 ;
-(void)sendHelloMessageAndResumeQueue;
-(void)enqueueSendForMessage:(id)arg1 ;
-(void)resumeQueueAndConnection;
-(void)cancelHelloMessageAndResumeQueueOperations;
-(void)suspendQueueAndConnection;
-(void)enqueueDelegateDidConnect;
-(void)enqueueDelegateCouldNotConnectWithError:(id)arg1 ;
-(void)enqueueDelegateDidReceiveMessage:(id)arg1 ;
-(void)cancelAndResumeQueuesAndEnqueueInvalidateConnection;
-(void)invalidSendForMessage:(id)arg1 ;
-(void)enqueueDelegateDidInvalidateAndFinalize;
-(void)delegateDidResume;
-(void)resumeQueue;
-(void)suspendQueue;
-(id)init;
-(void)dealloc;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)description;
-(id)debugDescription;
-(void)setDelegate:(id<CATTransportDelegate>)arg1 ;
-(id<CATTransportDelegate>)delegate;
-(void)invalidate;
-(void)resume;
-(void)suspend;
@end

