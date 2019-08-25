/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:07 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ROCKit.framework/ROCKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ROCKit/ROCKImpersonatableProxy.h>

@protocol NSObject;
@class NSSet;

@interface ROCKForwardingProxy : ROCKImpersonatableProxy {

	id<NSObject> _instance;
	NSSet* _protocols;

}

@property (nonatomic,retain) id<NSObject> instance;              //@synthesize instance=_instance - In the implementation block
@property (nonatomic,readonly) NSSet * protocols;                //@synthesize protocols=_protocols - In the implementation block
+(void)forwardingProxyWithInstance:(id)arg1 options:(id)arg2 eventQueue:(id)arg3 eventHandler:(/*^block*/id)arg4 ;
+(id)forwardingProxyWithSessionManager:(id)arg1 instance:(id)arg2 error:(id*)arg3 ;
-(void)_forwardStackInvocation:(id)arg1 ;
-(id<NSObject>)instance;
-(NSSet *)protocols;
-(id)initWithSessionManager:(id)arg1 impersonatableProxyUUID:(id)arg2 instance:(id)arg3 error:(id*)arg4 ;
-(id)initWithSessionManager:(id)arg1 impersonatableProxyUUID:(id)arg2 instance:(id)arg3 protocols:(id)arg4 error:(id*)arg5 ;
-(void)setInstance:(id<NSObject>)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)description;
-(id)debugDescription;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end
