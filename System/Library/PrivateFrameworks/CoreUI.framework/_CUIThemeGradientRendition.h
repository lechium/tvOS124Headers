/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:21 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeRendition.h>

@class CUIThemeGradient;

@interface _CUIThemeGradientRendition : CUIThemeRendition {

	CUIThemeGradient* gradient;
	double gradientAngle;

}
+(id)_nodesFromNodeList:(csigradientdatanode*)arg1 count:(unsigned long long)arg2 header:(const csiheader*)arg3 ;
+(_CUIThemeGradientRenditionInitializerStruct)_parseGradientInfoFromCSIHeader:(const csiheader*)arg1 ;
-(unsigned)gradientStyle;
-(double)gradientDrawingAngle;
-(id)initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 artworkStatus:(long long)arg3 ;
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
-(void)dealloc;
-(id)gradient;
@end

