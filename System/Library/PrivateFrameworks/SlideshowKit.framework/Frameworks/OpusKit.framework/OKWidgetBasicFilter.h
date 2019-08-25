/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:24 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>
#import <libobjc.A.dylib/OKSettingsSupport.h>

@class CIImage, OKPresentation, NSString;

@interface OKWidgetBasicFilter : CIFilter <OKSettingsSupport> {

	CIImage* _inputImage;
	OKPresentation* _inputPresentation;

}

@property (assign,nonatomic) OKPresentation * inputPresentation;              //@synthesize inputPresentation=_inputPresentation - In the implementation block
@property (nonatomic,retain) CIImage * inputImage;                            //@synthesize inputImage=_inputImage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(id)inputKeys;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)settingObjectForKey:(id)arg1 ;
-(void)setUserSettingObject:(id)arg1 forKey:(id)arg2 ;
-(OKPresentation *)inputPresentation;
-(void)setInputPresentation:(OKPresentation *)arg1 ;
-(void)dealloc;
-(id)initWithSettings:(id)arg1 ;
-(id)outputImage;
@end

