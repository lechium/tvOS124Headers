/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:04 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SCROHandlerProtocol.h>

@class NSLock;

@interface SCROHandler : NSObject <SCROHandlerProtocol> {

	NSLock* _lock;
	BOOL isInvalid;
	id _callbackDelegate;

}

@property (assign,nonatomic,__weak) id callbackDelegate;              //@synthesize callbackDelegate=_callbackDelegate - In the implementation block
-(int)handleRegisterCallbackForKey:(int)arg1 trusted:(BOOL)arg2 ;
-(int)handleSetValue:(id)arg1 forKey:(int)arg2 trusted:(BOOL)arg3 ;
-(int)handleGetValue:(id*)arg1 forKey:(int)arg2 withObject:(id)arg3 trusted:(BOOL)arg4 ;
-(int)handlePerformActionForKey:(int)arg1 trusted:(BOOL)arg2 ;
-(id)callbackDelegate;
-(int)handleGetValue:(id*)arg1 forKey:(int)arg2 trusted:(BOOL)arg3 ;
-(void)setCallbackDelegate:(id)arg1 ;
-(id)init;
-(void)invalidate;
-(void)lock;
-(void)unlock;
@end
