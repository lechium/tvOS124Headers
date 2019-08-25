/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PBSystemServiceClientInterface <NSObject>
@required
-(void)prepareDefaultKioskAppTransitionForType:(long long)arg1 animationDuration:(double)arg2 delay:(double)arg3 completion:(/*^block*/id)arg4;
-(void)startDefaultKioskAppTransitionWithAnimationFence:(id)arg1 completion:(/*^block*/id)arg2;
-(void)startDefaultKioskAppTransitionForType:(long long)arg1 animationDuration:(double)arg2 animationFence:(id)arg3 delay:(double)arg4;
-(void)prepareForDefaultKioskAppTransitionWithCompletion:(/*^block*/id)arg1;
-(void)defaultKioskAppHandleHomeButtonWithCompletion:(/*^block*/id)arg1;
-(void)defaultKioskAppPurgeTopShelfContentForApplicationIdentifiers:(id)arg1;

@end

