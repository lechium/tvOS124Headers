/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:55 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SiriUIDeviceInfo : NSObject {

	BOOL _deviceZoomed;
	BOOL _largeFormatPhone;
	BOOL _deviceShouldUseFrozenBackdropSnapshot;
	BOOL _deviceShouldFreezeAura;
	BOOL _deviceShouldDeferFlamesView;
	BOOL _deviceSupportsProximitySensor;
	BOOL _deviceShouldSkipGuidePreloading;

}

@property (getter=isDeviceZoomed,nonatomic,readonly) BOOL deviceZoomed;                      //@synthesize deviceZoomed=_deviceZoomed - In the implementation block
@property (getter=isLargeFormatPhone,nonatomic,readonly) BOOL largeFormatPhone;              //@synthesize largeFormatPhone=_largeFormatPhone - In the implementation block
@property (nonatomic,readonly) BOOL deviceShouldUseFrozenBackdropSnapshot;                   //@synthesize deviceShouldUseFrozenBackdropSnapshot=_deviceShouldUseFrozenBackdropSnapshot - In the implementation block
@property (nonatomic,readonly) BOOL deviceShouldFreezeAura;                                  //@synthesize deviceShouldFreezeAura=_deviceShouldFreezeAura - In the implementation block
@property (nonatomic,readonly) BOOL deviceShouldDeferFlamesView;                             //@synthesize deviceShouldDeferFlamesView=_deviceShouldDeferFlamesView - In the implementation block
@property (nonatomic,readonly) BOOL deviceShouldSkipGuidePreloading;                         //@synthesize deviceShouldSkipGuidePreloading=_deviceShouldSkipGuidePreloading - In the implementation block
@property (nonatomic,readonly) BOOL deviceSupportsProximitySensor;                           //@synthesize deviceSupportsProximitySensor=_deviceSupportsProximitySensor - In the implementation block
+(id)sharedInstance;
-(void)_updateLargeFormatPhone;
-(void)_updateProductTypeDerivedProperties;
-(void)_updateDeviceZoomed;
-(BOOL)isDeviceZoomed;
-(BOOL)isLargeFormatPhone;
-(BOOL)deviceShouldUseFrozenBackdropSnapshot;
-(BOOL)deviceShouldFreezeAura;
-(BOOL)deviceShouldDeferFlamesView;
-(BOOL)deviceSupportsProximitySensor;
-(BOOL)deviceShouldSkipGuidePreloading;
-(id)init;
@end

