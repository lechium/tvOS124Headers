/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:22 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKWidgetBasicFilter.h>
#import <libobjc.A.dylib/JSOKWidgetContentImageFilter.h>

@class NSURL, CIImage;

@interface OKWidgetContentImageFilter : OKWidgetBasicFilter <JSOKWidgetContentImageFilter> {

	NSURL* _inputImageURL;
	CIImage* _imageOutput;

}

@property (nonatomic,retain) NSURL * inputImageURL;              //@synthesize inputImageURL=_inputImageURL - In the implementation block
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)filterWithImageURL:(id)arg1 ;
-(id)inputKeys;
-(NSURL *)inputImageURL;
-(void)setInputImageURL:(NSURL *)arg1 ;
-(void)setSettingInputImageURL:(id)arg1 ;
-(void)dealloc;
-(id)outputImage;
@end

