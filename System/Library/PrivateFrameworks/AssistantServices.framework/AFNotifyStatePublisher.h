/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFInvalidating.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface AFNotifyStatePublisher : NSObject <AFInvalidating> {

	NSObject*<OS_dispatch_queue> _queue;
	char* _name;
	int _registrationToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_unregister;
-(BOOL)_setState:(unsigned long long)arg1 withToken:(int)arg2 ;
-(BOOL)_getState:(unsigned long long*)arg1 withToken:(int)arg2 ;
-(id)initWithName:(id)arg1 queue:(id)arg2 ;
-(void)publishState:(unsigned long long)arg1 ;
-(void)publishStateWithBlock:(/*^block*/id)arg1 ;
-(void)_register;
-(void)dealloc;
-(void)invalidate;
@end

