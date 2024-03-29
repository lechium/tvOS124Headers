/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitServices/UIKitServices-Structs.h>
#import <FrontBoardServices/FBSServiceFacility.h>

@protocol UISApplicationSupportServerDelegate;
@interface UISApplicationSupportServer : FBSServiceFacility {

	id<UISApplicationSupportServerDelegate> _delegate;
	struct {
		unsigned delegateRequestPasscodeUnlockUI : 1;
		unsigned delegateInitialDisplayContextForClient : 1;
		unsigned delegateScreenEdgeInfo : 1;
	}  _delegateFlags;

}

@property (assign,nonatomic,__weak) id<UISApplicationSupportServerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithCalloutQueue:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 queue:(id)arg2 ;
-(void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3 ;
-(void)setDelegate:(id<UISApplicationSupportServerDelegate>)arg1 ;
-(id<UISApplicationSupportServerDelegate>)delegate;
-(void)_handleMessage_requestPasscodeUnlockUIForClient:(id)arg1 withMessage:(id)arg2 ;
-(void)_handleMessage_initialDisplayContextForClient:(id)arg1 withMessage:(id)arg2 ;
-(void)_handleMessage_displayEdgeInfoForClient:(id)arg1 withMessage:(id)arg2 ;
-(BOOL)shouldAllowClientConnection:(id)arg1 ;
@end

