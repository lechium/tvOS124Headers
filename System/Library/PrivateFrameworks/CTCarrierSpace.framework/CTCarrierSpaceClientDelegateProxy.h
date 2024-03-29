/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:10 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CTCarrierSpace/CTCarrierSpaceClientDelegateProxyInterface.h>

@protocol CTCarrierSpaceClientDelegate;
@class NSString;

@interface CTCarrierSpaceClientDelegateProxy : NSObject <CTCarrierSpaceClientDelegateProxyInterface> {

	id<CTCarrierSpaceClientDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CTCarrierSpaceClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)capabilitiesDidChange:(id)arg1 ;
-(void)userConsentFlowInfoDidChange;
-(void)usageDidChange;
-(void)plansDidChange;
-(void)appsDidChange;
-(void)dataPlanMetricsDidChange;
-(void)purchasedPlan:(id)arg1 didChangeStatus:(long long)arg2 context:(id)arg3 ;
-(void)remoteObjectRespondsToSelector:(SEL)arg1 handler:(/*^block*/id)arg2 ;
-(void)setDelegate:(id<CTCarrierSpaceClientDelegate>)arg1 ;
-(id<CTCarrierSpaceClientDelegate>)delegate;
@end

