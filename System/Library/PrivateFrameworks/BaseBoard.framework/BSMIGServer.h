/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BaseBoard/BaseBoard-Structs.h>
@class NSString;

@interface BSMIGServer : NSObject {

	NSString* _portName;
	unsigned _port;
	opaque_pthread_t* _thread;
	mig_subsystem* _subsystem;
	CFRunLoopObserverRef _entryObserver;
	CFRunLoopObserverRef _exitObserver;

}

@property (assign,nonatomic) int threadPriority; 
@property (nonatomic,copy,readonly) NSString * threadName; 
-(void)setThreadName:(NSString *)arg1 ;
-(unsigned)_createPortNamed:(id)arg1 ;
-(id)initWithPortName:(id)arg1 subsystem:(mig_subsystem*)arg2 separateThread:(BOOL)arg3 ;
-(NSString *)threadName;
-(id)init;
-(void*)_start;
-(void)_installAutoreleasePoolsIfNecessaryForMode:(CFStringRef)arg1 ;
-(unsigned)port;
-(int)threadPriority;
-(void)setThreadPriority:(int)arg1 ;
@end
