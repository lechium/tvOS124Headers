/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKWidgetView.h>
#import <libobjc.A.dylib/OKWidgetTextViewProxyExports.h>

@interface OKWidgetTextViewProxy : OKWidgetView <OKWidgetTextViewProxyExports> {

	UIEdgeInsets _textEdgeInsets;

}
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(id)initWithWidget:(id)arg1 ;
-(id)settingObjectForKey:(id)arg1 ;
-(BOOL)prepareForWarmup:(BOOL)arg1 ;
-(BOOL)prepareForUnload:(BOOL)arg1 ;
-(id)layoutSettingsKeys;
-(CGRect)textViewFrame;
-(UIEdgeInsets)textEdgeInsets;
-(UIEdgeInsets)settingTextEdgeInsets;
-(void)setSettingTextEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)dealloc;
-(id)valueForUndefinedKey:(id)arg1 ;
-(BOOL)prepareForDisplay:(BOOL)arg1 ;
@end

