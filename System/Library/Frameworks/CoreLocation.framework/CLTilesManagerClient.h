/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CLTilesManagerClientInternal;

@interface CLTilesManagerClient : NSObject {

	CLTilesManagerClientInternal* _internal;

}
+(id)sharedClient;
+(void)initialize;
-(void)reconnect;
-(void)onNotificationReceived:(id)arg1 ;
-(void)sendNotificationRegistrationMessage:(id)arg1 isRegister:(BOOL)arg2 ;
-(BOOL)executeAsynchronousQuery:(id)arg1 onQueue:(id)arg2 responseBlock:(/*^block*/id)arg3 ;
-(BOOL)precacheHint:(id)arg1 onQueue:(id)arg2 responseBlock:(/*^block*/id)arg3 ;
-(BOOL)registerTo:(id)arg1 onQueue:(id)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)unregisterFrom:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

