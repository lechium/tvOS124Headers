/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VSViewServiceHostViewControllerDelegate <NSObject>
@required
-(void)viewServiceHostViewController:(id)arg1 request:(id)arg2 didFinishWithResponse:(id)arg3;
-(void)viewServiceHostViewController:(id)arg1 request:(id)arg2 didFailWithError:(id)arg3;
-(void)viewServiceHostViewController:(id)arg1 didCancelRequest:(id)arg2;
-(void)viewServiceHostViewController:(id)arg1 didChooseAdditionalProvidersForRequest:(id)arg2;
-(void)presentViewServiceHostViewController:(id)arg1;
-(void)dismissViewServiceHostViewController:(id)arg1;
-(BOOL)viewServiceHostViewController:(id)arg1 shouldAuthenticateAccountProviderWithIdentifier:(id)arg2;

@end

