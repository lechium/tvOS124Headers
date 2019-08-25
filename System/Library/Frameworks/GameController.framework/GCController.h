/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:08 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GameController/GameController-Structs.h>
@class NSArray, NSString, GCGamepad, GCMicroGamepad, GCExtendedGamepad, GCMotion;

@interface GCController : NSObject {

	BOOL _forwarded;

}

@property (nonatomic,retain) id<GCNamedProfile> profile; 
@property (nonatomic,retain,readonly) NSArray * hidServices; 
@property (nonatomic,readonly) unsigned service; 
@property (nonatomic,retain) NSString * physicalDeviceUniqueID; 
@property (assign,nonatomic) BOOL physicalDeviceUsesCompass; 
@property (assign,getter=isForwarded,nonatomic) BOOL forwarded;                              //@synthesize forwarded=_forwarded - In the implementation block
@property (nonatomic,copy) id controllerPausedHandler; 
@property (retain) NSObject*<OS_dispatch_queue> handlerQueue; 
@property (nonatomic,copy,readonly) NSString * vendorName; 
@property (getter=isAttachedToDevice,nonatomic,readonly) BOOL attachedToDevice; 
@property (assign,nonatomic) long long playerIndex; 
@property (nonatomic,retain,readonly) GCGamepad * gamepad; 
@property (nonatomic,retain,readonly) GCMicroGamepad * microGamepad; 
@property (nonatomic,retain,readonly) GCExtendedGamepad * extendedGamepad; 
@property (nonatomic,retain,readonly) GCMotion * motion; 
+(id)controllers;
+(void)__daemon__appDidEnterBackground;
+(void)__daemon__appWillEnterForeground;
+(void)_startWirelessControllerDiscoveryWithCompanions:(BOOL)arg1 btClassic:(BOOL)arg2 btle:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)__open__;
+(void)__openXPC__;
+(void)__openXPC_and_CBApplicationDidBecomeActive__;
+(void)__setLogger__:(/*^block*/id)arg1 ;
+(void)__daemon__startBonjourService;
+(void)__daemon__setUserActivityUserInfo:(id)arg1 ;
+(void)__daemon__requestConnectedHostUpdatesWithHandler:(/*^block*/id)arg1 ;
+(void)__daemon__addController:(id)arg1 ;
+(void)__daemon__removeController:(id)arg1 ;
+(void)__daemon__controllerWithUDID:(unsigned long long)arg1 setValue:(float)arg2 forElement:(int)arg3 ;
+(void)startWirelessControllerDiscoveryWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)stopWirelessControllerDiscovery;
+(void)handleUIEvent:(id)arg1 ;
-(NSString *)physicalDeviceUniqueID;
-(unsigned)service;
-(GCExtendedGamepad *)extendedGamepad;
-(GCGamepad *)gamepad;
-(void)setProfile:(id<GCNamedProfile>)arg1 ;
-(void)setPlayerIndex:(long long)arg1 ;
-(long long)playerIndex;
-(GCMotion *)motion;
-(unsigned long long)deviceHash;
-(NSString *)vendorName;
-(void)removeServiceRef:(IOHIDServiceClientRef)arg1 ;
-(BOOL)supportsMotionLite;
-(NSArray *)hidServices;
-(BOOL)isForwarded;
-(BOOL)physicalDeviceUsesCompass;
-(void)setPhysicalDeviceUsesCompass:(BOOL)arg1 ;
-(void)addServiceRefs:(id)arg1 ;
-(void)setPhysicalDeviceUniqueID:(NSString *)arg1 ;
-(GCMicroGamepad *)microGamepad;
-(void)setForwarded:(BOOL)arg1 ;
-(id)controllerPausedHandler;
-(void)setControllerPausedHandler:(id)arg1 ;
-(BOOL)isAttachedToDevice;
-(BOOL)isEqualToController:(id)arg1 ;
-(BOOL)hasServiceRef:(IOHIDServiceClientRef)arg1 ;
-(void*)createInputBufferForDevice:(IOHIDDeviceRef)arg1 withSize:(unsigned long long)arg2 ;
-(void)setHandlerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id<GCNamedProfile>)profile;
-(NSObject*<OS_dispatch_queue>)handlerQueue;
-(unsigned)sampleRate;
@end

