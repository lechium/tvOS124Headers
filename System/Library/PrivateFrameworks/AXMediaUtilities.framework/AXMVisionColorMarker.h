/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMVisionColor.h>

@class NSString;

@interface AXMVisionColorMarker : AXMVisionColor {

	NSString* _localizedName;

}

@property (nonatomic,retain) NSString * localizedName;              //@synthesize localizedName=_localizedName - In the implementation block
+(id)colorWithHueDegrees:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 localizedName:(id)arg4 ;
+(id)allColorMarkers;
+(id)closestMarkerToColor:(id)arg1 withMaximumThreshold:(double)arg2 ;
-(void)setLocalizedName:(NSString *)arg1 ;
-(id)description;
-(NSString *)localizedName;
@end

