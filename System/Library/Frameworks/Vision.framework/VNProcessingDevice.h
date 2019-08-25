/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:22 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VNProcessingDevice : NSObject <NSCopying>
+(id)allDevices;
+(void)forcedCleanup;
+(id)defaultDevice;
+(id)deviceForMetalDevice:(id)arg1 ;
+(id)defaultCPUDevice;
+(id)defaultANEDevice;
+(void)_lockOnceTokensLock;
+(void)_unlockOnceTokensLock;
+(id)defaultMetalDevice;
+(id)directANEDevice;
-(BOOL)targetsGPU;
-(BOOL)targetsCPU;
-(BOOL)targetsANE;
-(int)espressoDeviceID;
-(int)espressoEngine;
-(int)espressoStorageType;
-(id)metalDevice;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

