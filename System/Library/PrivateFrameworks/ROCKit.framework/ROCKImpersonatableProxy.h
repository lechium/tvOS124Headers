/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:07 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ROCKit.framework/ROCKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ROCKit/ROCKImpersonator.h>

@protocol OS_xpc_object;
@class NSObject, ROCKSessionManager;

@interface ROCKImpersonatableProxy : ROCKImpersonator {

	NSObject*<OS_xpc_object> _impersonatableProxyUUID;
	ROCKSessionManager* _sessionManager;
	NSObject*<OS_xpc_object> _xpcDictionary;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> impersonatableProxyUUID;              //@synthesize impersonatableProxyUUID=_impersonatableProxyUUID - In the implementation block
@property (nonatomic,retain) ROCKSessionManager * sessionManager;                           //@synthesize sessionManager=_sessionManager - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> xpcDictionary;                        //@synthesize xpcDictionary=_xpcDictionary - In the implementation block
-(void)setSessionManager:(ROCKSessionManager *)arg1 ;
-(ROCKSessionManager *)sessionManager;
-(NSObject*<OS_xpc_object>)xpcDictionary;
-(void)setXpcDictionary:(NSObject*<OS_xpc_object>)arg1 ;
-(id)initWithSessionManager:(id)arg1 impersonatableProxyUUID:(id)arg2 ;
-(NSObject*<OS_xpc_object>)impersonatableProxyUUID;
-(void)setImpersonatableProxyUUID:(NSObject*<OS_xpc_object>)arg1 ;
-(id)description;
-(id)debugDescription;
@end

