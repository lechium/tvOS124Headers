/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IMDMessageServices.framework/IMDMessageServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface IMDMessageServicesCenter : NSObject {

	NSObject*<OS_xpc_object> _connection;

}
+(id)sharedInstance;
-(void)_disconnected;
-(BOOL)_connect;
-(void)_requestRoutingWithGUID:(id)arg1 chatGUID:(id)arg2 error:(unsigned)arg3 handler:(/*^block*/id)arg4 ;
-(void)_requestExpireStateWithGUID:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_requestWatchdogWithGUID:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)requestRoutingForMessageGuid:(id)arg1 inChat:(id)arg2 error:(unsigned)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)requestRoutingWithCompletion:(/*^block*/id)arg1 ;
-(void)requestExpireStateForMessageGuid:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)requestExpireStateWithCompletion:(/*^block*/id)arg1 ;
-(void)requestWatchdogForMessageGuid:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)requestWatchdogWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)_disconnect;
@end

