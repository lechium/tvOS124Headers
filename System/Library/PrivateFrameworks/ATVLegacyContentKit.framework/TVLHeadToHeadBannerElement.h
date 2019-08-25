/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLElement.h>

@class TVLImageElement, NSString;

@interface TVLHeadToHeadBannerElement : TVLElement {

	TVLImageElement* _backgroundImage;
	TVLImageElement* _leftImage;
	TVLImageElement* _rightImage;
	NSString* _imageSeparatorText;

}

@property (nonatomic,retain) TVLImageElement * backgroundImage;              //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (nonatomic,retain) TVLImageElement * leftImage;                    //@synthesize leftImage=_leftImage - In the implementation block
@property (nonatomic,retain) TVLImageElement * rightImage;                   //@synthesize rightImage=_rightImage - In the implementation block
@property (nonatomic,retain) NSString * imageSeparatorText;                  //@synthesize imageSeparatorText=_imageSeparatorText - In the implementation block
-(TVLImageElement *)leftImage;
-(void)setLeftImage:(TVLImageElement *)arg1 ;
-(id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2 ;
-(void)setImageSeparatorText:(NSString *)arg1 ;
-(void)setRightImage:(TVLImageElement *)arg1 ;
-(NSString *)imageSeparatorText;
-(TVLImageElement *)rightImage;
-(BOOL)isEqual:(id)arg1 ;
-(TVLImageElement *)backgroundImage;
-(void)setBackgroundImage:(TVLImageElement *)arg1 ;
@end
