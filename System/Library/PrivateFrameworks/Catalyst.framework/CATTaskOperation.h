/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:37 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATOperation.h>

@protocol CATTaskOperationNotificationDelegate;
@class CATTaskRequest, NSUUID;

@interface CATTaskOperation : CATOperation {

	CATTaskRequest* _request;
	id<CATTaskOperationNotificationDelegate> _notificationDelegate;
	NSUUID* _remoteUUID;

}

@property (nonatomic,copy) NSUUID * remoteUUID;                                                                 //@synthesize remoteUUID=_remoteUUID - In the implementation block
@property (nonatomic,readonly) CATTaskRequest * request;                                                        //@synthesize request=_request - In the implementation block
@property (assign,nonatomic,__weak) id<CATTaskOperationNotificationDelegate> notificationDelegate;              //@synthesize notificationDelegate=_notificationDelegate - In the implementation block
+(BOOL)isCancelable;
+(BOOL)validateRequest:(id)arg1 error:(id*)arg2 ;
+(id)new;
-(void)setNotificationDelegate:(id<CATTaskOperationNotificationDelegate>)arg1 ;
-(void)processMessage:(id)arg1 ;
-(id<CATTaskOperationNotificationDelegate>)notificationDelegate;
-(BOOL)canSendNotificationWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)processNotificationWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)postNotificationWithName:(id)arg1 userInfo:(id)arg2 ;
-(NSUUID *)remoteUUID;
-(void)setRemoteUUID:(NSUUID *)arg1 ;
-(void)cat_addAssertion:(id)arg1 ;
-(id)cat_assertions;
-(id)init;
-(void)main;
-(CATTaskRequest *)request;
-(id)initWithRequest:(id)arg1 ;
@end

