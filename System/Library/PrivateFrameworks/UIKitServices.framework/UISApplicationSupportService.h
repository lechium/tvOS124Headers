/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitServices/UIKitServices-Structs.h>
#import <UIKit/UISApplicationSupportServerDelegate.h>

@protocol UISApplicationSupportServiceDelegate;
@class UISApplicationSupportServer, FBSSerialQueue, NSString;

@interface UISApplicationSupportService : NSObject <UISApplicationSupportServerDelegate> {

	UISApplicationSupportServer* _server;
	id<UISApplicationSupportServiceDelegate> _delegate;
	FBSSerialQueue* _calloutQueue;
	struct {
		unsigned delegateRequestPasscodeUnlockUI : 1;
		unsigned delegateInitialDisplayConfigurationForClient : 1;
		unsigned delegateInitialDisplayContextForClient : 1;
		unsigned delegateScreenEdgeInfo : 1;
	}  _delegateFlags;

}

@property (assign,nonatomic,__weak) id<UISApplicationSupportServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCalloutQueue:(id)arg1 ;
-(void)setDelegate:(id<UISApplicationSupportServiceDelegate>)arg1 ;
-(id<UISApplicationSupportServiceDelegate>)delegate;
-(void)requestPasscodeUnlockUIForClient:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)initialDisplayContextForClient:(id)arg1 ;
-(id)edgeInfoForClient:(id)arg1 displayConfiguration:(id)arg2 ;
@end

