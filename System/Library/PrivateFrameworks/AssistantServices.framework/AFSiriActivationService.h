/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:24 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AFSiriActivationService <NSObject>
@required
-(oneway void)prewarmWithRequestInfo:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)activateWithRequestInfo:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)deactivateForReason:(long long)arg1 options:(unsigned long long)arg2 analyticsContext:(id)arg3 completion:(/*^block*/id)arg4;
-(oneway void)handleContext:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)handleIntent:(id)arg1 inBackgroundAppWithBundleId:(id)arg2 reply:(/*^block*/id)arg3;

@end
