/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:36 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/__NSCFTCPIOStreamTask.h>
#import <libobjc.A.dylib/SessionConnectionDelegate.h>

@class NSString;

@interface __NSCFURLLocalTCPIOStreamTaskFromDataTask : __NSCFTCPIOStreamTask <SessionConnectionDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTask:(id)arg1 Connection:(shared_ptr<TCPIOConnection>*)arg2 disavow:(/*^block*/id)arg3 ;
@end

