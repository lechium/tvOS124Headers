/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:33 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/_CFXNotificationRegistrationBase.h>

@interface _CFXNotificationTokenRegistration : _CFXNotificationRegistrationBase {

	unsigned long long _token;
	unsigned long long _options;
	/*^block*/id _handler;
	AB _registered;

}

@property (retain) id queue; 
@property (readonly) unsigned long long token;                         //@synthesize token=_token - In the implementation block
@property (readonly) unsigned long long options;                       //@synthesize options=_options - In the implementation block
@property (copy,readonly) id handler; 
@property (getter=isRegistered,readonly) BOOL registered; 
@property (readonly) CFStringRef name; 
@property (readonly) void* object; 
@property (readonly) void* observer; 
+(const SCD_Struct_CF2*)keyCallbacks;
+(id)createTokenRegistration:(int)arg1 token:(unsigned long long)arg2 connection:(id)arg3 notifyToken:(int)arg4 options:(unsigned long long)arg5 queue:(id)arg6 handler:(/*^block*/id)arg7 ;
-(id)initWithToken:(unsigned long long)arg1 options:(unsigned long long)arg2 queue:(id)arg3 handler:(/*^block*/id)arg4 ;
-(/*^block*/id)copyHandler;
-(void)addToObserver:(id)arg1 ;
-(void)_removeFromParent;
-(void)setQueue:(id)arg1 ;
-(BOOL)isRegistered;
-(void)removeFromParent;
-(void)dealloc;
-(CFStringRef)name;
-(id)handler;
-(void*)object;
-(void)invalidate;
-(void*)observer;
-(unsigned long long)options;
-(void*)key;
-(void)_invalidate;
-(id)queue;
-(unsigned long long)token;
@end

