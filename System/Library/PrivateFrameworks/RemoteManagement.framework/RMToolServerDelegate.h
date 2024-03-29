/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:12 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol RMToolXPCInterface;
@class NSString;

@interface RMToolServerDelegate : NSObject <NSXPCListenerDelegate> {

	id<RMToolXPCInterface> _target;

}

@property (nonatomic,retain) id<RMToolXPCInterface> target;              //@synthesize target=_target - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTarget:(id<RMToolXPCInterface>)arg1 ;
-(id<RMToolXPCInterface>)target;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end

