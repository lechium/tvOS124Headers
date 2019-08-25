/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:54 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libIOAccessoryManager.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, ResourceArbiterClientDelegate, OS_dispatch_semaphore;
#import <libIOAccessoryManager.dylib/libIOAccessoryManager.dylib-Structs.h>
@class NSObject;

@interface ResourceArbiterClient : NSObject {

	unsigned _ioConnect;
	IONotificationPortRef _ioNotificationPort;
	unsigned _ioNotificationObject;
	NSObject*<OS_dispatch_queue> _notificationPortQueue;
	BOOL _resourceAccessStatus;
	unsigned _ioService;
	int _clientPriority;
	int _pendingResourceRequest;
	id<ResourceArbiterClientDelegate> _delegate;
	NSObject*<OS_dispatch_semaphore> _sema;

}

@property (nonatomic,readonly) unsigned ioService;                                           //@synthesize ioService=_ioService - In the implementation block
@property (assign,nonatomic,__weak) id<ResourceArbiterClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) int clientPriority;                                           //@synthesize clientPriority=_clientPriority - In the implementation block
@property (nonatomic,readonly) int pendingResourceRequest;                                   //@synthesize pendingResourceRequest=_pendingResourceRequest - In the implementation block
@property (nonatomic,readonly) BOOL resourceAccessStatus;                                    //@synthesize resourceAccessStatus=_resourceAccessStatus - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_semaphore> sema;                        //@synthesize sema=_sema - In the implementation block
-(NSObject*<OS_dispatch_semaphore>)sema;
-(id)initWithID:(int)arg1 ;
-(void)_processResourceAccessStatus:(BOOL)arg1 ;
-(void)resourceAccessRevoked;
-(BOOL)asynchRequestResourceAccess:(BOOL)arg1 ;
-(void)resourceAccessGranted;
-(unsigned)ioService;
-(int)clientPriority;
-(int)pendingResourceRequest;
-(BOOL)resourceAccessStatus;
-(void)releaseResourceAccess;
-(BOOL)synchRequestResourceAccess;
-(void)dealloc;
-(void)setDelegate:(id<ResourceArbiterClientDelegate>)arg1 ;
-(id<ResourceArbiterClientDelegate>)delegate;
@end
