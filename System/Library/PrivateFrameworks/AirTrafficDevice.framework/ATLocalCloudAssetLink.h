/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ATMessageLinkObserver.h>
#import <libobjc.A.dylib/ATAssetLink.h>

@protocol OS_dispatch_queue, ATAssetLinkDelegate;
@class NSObject, ATLegacyMessageLink, NSMutableOrderedSet, NSMutableDictionary, NSString;

@interface ATLocalCloudAssetLink : NSObject <ATMessageLinkObserver, ATAssetLink> {

	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_queue> _queue;
	id<ATAssetLinkDelegate> _delegate;
	ATLegacyMessageLink* _messageLink;
	NSMutableOrderedSet* _queuedAssets;
	NSMutableDictionary* _activeRequests;
	BOOL _open;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isOpen,nonatomic,readonly) BOOL open;                            //@synthesize open=_open - In the implementation block
@property (assign,nonatomic,__weak) id<ATAssetLinkDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithMessageLink:(id)arg1 ;
-(unsigned long long)maximumBatchSize;
-(void)messageLinkWasInitialized:(id)arg1 ;
-(void)messageLinkWasClosed:(id)arg1 ;
-(void)prioritizeAsset:(id)arg1 ;
-(id)enqueueAssets:(id)arg1 force:(BOOL)arg2 ;
-(BOOL)canEnqueueAsset:(id)arg1 ;
-(void)cancelAssets:(id)arg1 ;
-(BOOL)linkIsReady;
-(void)_finishAsset:(id)arg1 withError:(id)arg2 ;
-(void)_handleLocalCloudDownloadResponse:(id)arg1 ;
-(void)_requestNextDownload;
-(BOOL)isOpen;
-(void)dealloc;
-(void)setDelegate:(id<ATAssetLinkDelegate>)arg1 ;
-(id<ATAssetLinkDelegate>)delegate;
-(unsigned long long)priority;
-(BOOL)open;
-(void)close;
@end

