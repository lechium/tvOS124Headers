/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KnowledgeMonitor/_DKMonitor.h>

@interface _DKThermalPressureMonitor : _DKMonitor {

	BOOL _initialized;
	int _thermalPressureToken;
	int _lastThermalPressureLevel;

}

@property (assign,nonatomic) BOOL initialized;                          //@synthesize initialized=_initialized - In the implementation block
@property (assign,nonatomic) int thermalPressureToken;                  //@synthesize thermalPressureToken=_thermalPressureToken - In the implementation block
@property (assign,nonatomic) int lastThermalPressureLevel;              //@synthesize lastThermalPressureLevel=_lastThermalPressureLevel - In the implementation block
+(id)eventStream;
+(id)entitlements;
-(void)synchronouslyReflectCurrentValue;
-(void)setInitialized:(BOOL)arg1 ;
-(BOOL)initialized;
-(id)loadState;
-(void)saveState;
-(void)setCurrentThermalLevel:(int)arg1 ;
-(void)getThermalPressureLevelWithToken:(int)arg1 ;
-(int)thermalPressureToken;
-(void)setThermalPressureToken:(int)arg1 ;
-(int)lastThermalPressureLevel;
-(void)setLastThermalPressureLevel:(int)arg1 ;
-(void)stop;
-(void)start;
@end

