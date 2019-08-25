/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:07 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, PBSDisplayMode, NSSet, NSString;


@protocol PBSDisplayState <NSObject>
@property (nonatomic,readonly) double localeRefreshRate; 
@property (nonatomic,readonly) NSArray * sortedDisplayModes; 
@property (nonatomic,readonly) PBSDisplayMode * currentDisplayMode; 
@property (nonatomic,readonly) PBSDisplayMode * fallbackDisplayMode; 
@property (nonatomic,readonly) PBSDisplayMode * userSelectedDisplayMode; 
@property (nonatomic,readonly) NSSet * seenDisplayIDs; 
@property (nonatomic,readonly) NSString * currentDisplayID; 
@property (nonatomic,readonly) BOOL canHandleHighBandwidthModes; 
@property (nonatomic,readonly) BOOL shouldModeSwitchForDynamicRange; 
@property (nonatomic,readonly) BOOL shouldModeSwitchForFrameRate; 
@property (nonatomic,readonly) long long displayConnection; 
@property (nonatomic,readonly) BOOL detectedPoorCableConnection; 
@property (nonatomic,readonly) BOOL deemed4KCapable; 
@required
-(BOOL)shouldModeSwitchForFrameRate;
-(BOOL)shouldModeSwitchForDynamicRange;
-(void)removeStateObserver:(id)arg1;
-(void)addStateObserver:(id)arg1;
-(NSArray *)sortedDisplayModes;
-(id)promotedVirtualDisplayModes;
-(id)findFirstMode:(/*^block*/id)arg1;
-(double)localeRefreshRate;
-(BOOL)isAdvertisingHDMI2;
-(id)filterModes:(/*^block*/id)arg1;
-(id)findMatchingLocaleMode:(id)arg1 enforceVirtualCheck:(BOOL)arg2;
-(PBSDisplayMode *)fallbackDisplayMode;
-(PBSDisplayMode *)userSelectedDisplayMode;
-(NSSet *)seenDisplayIDs;
-(NSString *)currentDisplayID;
-(BOOL)canHandleHighBandwidthModes;
-(long long)displayConnection;
-(BOOL)detectedPoorCableConnection;
-(BOOL)deemed4KCapable;
-(PBSDisplayMode *)currentDisplayMode;

@end
