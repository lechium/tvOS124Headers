/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VSIdentityProviderViewControllerDelegate <NSObject>
@optional
-(void)identityProviderViewControllerDidFinishLoading:(id)arg1;
-(void)identityProviderViewController:(id)arg1 didAuthenticateAccount:(id)arg2 forRequest:(id)arg3;

@required
-(void)dismissIdentityProviderViewController:(id)arg1;
-(void)identityProviderViewControllerDidCancel:(id)arg1;
-(void)identityProviderViewController:(id)arg1 didFinishRequest:(id)arg2 withResult:(id)arg3;

@end

