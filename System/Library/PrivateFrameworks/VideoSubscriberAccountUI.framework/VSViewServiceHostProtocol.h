/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VSViewServiceHostProtocol <NSObject>
@required
-(void)_didCancelRequest:(id)arg1;
-(void)_request:(id)arg1 didFinishWithResponse:(id)arg2;
-(void)_request:(id)arg1 didFailWithError:(id)arg2;
-(void)_didChooseAdditionalProvidersForRequest:(id)arg1;
-(void)_presentViewController;
-(void)_didChooseProviderWithIdentifier:(id)arg1 vetoHandler:(/*^block*/id)arg2;
-(void)_dismissViewController;

@end

