/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:10 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GEOPlatform : NSObject
+(id)sharedPlatform;
+(void)setIsRunningInGeod:(BOOL)arg1 ;
+(BOOL)isRunningInGeod;
-(BOOL)isInternalInstall;
-(id)osVersion;
-(id)clientCapabilities;
-(BOOL)supportsNavigation;
-(BOOL)supportsRealisticTiles;
-(BOOL)deviceSupports4K;
-(id)productName;
-(double)deviceScreenScale;
-(id)hardwareModel;
-(BOOL)_deviceSupportsNavigation;
-(BOOL)mapsFeatureFreedomEnabled;
-(BOOL)supportsNewiOS9Features;
-(BOOL)supportsForceTouch;
-(BOOL)isCellDataPossible;
-(long long)deviceScreenWidthInPixels;
-(long long)deviceScreenHeightInPixels;
-(id)buildVersion;
-(id)hardwareIdentifier;
@end

