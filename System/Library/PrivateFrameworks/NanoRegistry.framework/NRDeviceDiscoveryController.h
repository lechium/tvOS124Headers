/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface NRDeviceDiscoveryController : NSObject

@property (nonatomic,readonly) NSArray * devices; 
+(id)sharedInstance;
-(NSArray *)devices;
-(void)overrideSignalStrengthLimit:(long long)arg1 ;
-(id)init;
-(void)begin;
-(void)end;
@end

