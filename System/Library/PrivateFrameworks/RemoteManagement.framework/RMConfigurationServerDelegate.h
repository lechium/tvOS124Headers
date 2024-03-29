/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol RMConfigurationXPCInterface;
@class NSString;

@interface RMConfigurationServerDelegate : NSObject <NSXPCListenerDelegate> {

	id<RMConfigurationXPCInterface> _target;

}

@property (nonatomic,retain) id<RMConfigurationXPCInterface> target;              //@synthesize target=_target - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTarget:(id<RMConfigurationXPCInterface>)arg1 ;
-(id<RMConfigurationXPCInterface>)target;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end

