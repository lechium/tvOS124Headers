/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:02 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/GameControllerDaemonListener.h>

@protocol GameControllerDaemon;
@class NSXPCConnection, MRGameControllerDelayedEvents, NSString;

@interface MRGameControllerDaemonProxy : NSObject <GameControllerDaemonListener> {

	NSXPCConnection* _connection;
	id<GameControllerDaemon> _remote;
	MRGameControllerDelayedEvents* _delayedEvents;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultGameControllerDaemonProxy;
-(void)addController:(id)arg1 ;
-(void)removeController:(id)arg1 ;
-(void)controllerWithUDID:(unsigned long long)arg1 setData:(id)arg2 ;
-(void)controllerWithUDID:(unsigned long long)arg1 setValue:(float)arg2 forElement:(int)arg3 ;
-(void)controllerWithUDID:(unsigned long long)arg1 setArrayValue:(SCD_Struct_MR26)arg2 forElement:(int)arg3 ;
-(void)microControllerWithDigitizerX:(float)arg1 withY:(float)arg2 withTimeStamp:(unsigned long long)arg3 touchDown:(BOOL)arg4 ;
-(void)microControllerWithUDID:(unsigned long long)arg1 setDigitizerX:(float)arg2 digitizerY:(float)arg3 withTimeStamp:(unsigned long long)arg4 touchDown:(BOOL)arg5 ;
-(void)replyConnectedHosts:(id)arg1 ;
-(BOOL)_delayEvent:(unsigned long long)arg1 setValue:(float)arg2 forElement:(int)arg3 withUpDelay:(double)arg4 ;
-(void)controllerID:(unsigned long long)arg1 setValue:(float)arg2 forElement:(int)arg3 ;
-(id)addEmulatedControllerWithProperties:(id)arg1 ;
-(void)removeEmulatedController:(id)arg1 ;
-(void)controllerID:(unsigned long long)arg1 setValue:(float)arg2 forElement:(int)arg3 withUpDelay:(double)arg4 ;
-(void)controllerID:(unsigned long long)arg1 setDigitizerX:(float)arg2 digitizerY:(float)arg3 withTimeStamp:(unsigned long long)arg4 touchDown:(BOOL)arg5 ;
-(void)controllerID:(unsigned long long)arg1 setArrayValueX:(float)arg2 y:(float)arg3 z:(float)arg4 w:(float)arg5 forElement:(int)arg6 ;
-(void)_openConnection;
@end

