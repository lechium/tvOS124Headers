/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLElement.h>

@class NSString, TVLImageElement;

@interface TVLActionButtonElement : TVLElement {

	NSString* _title;
	NSString* _subtitle;
	TVLImageElement* _image;
	TVLImageElement* _focusedImage;
	NSString* _badge;

}

@property (nonatomic,copy) NSString * title;                              //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                           //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) TVLImageElement * image;                     //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) TVLImageElement * focusedImage;              //@synthesize focusedImage=_focusedImage - In the implementation block
@property (nonatomic,copy) NSString * badge;                              //@synthesize badge=_badge - In the implementation block
-(id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2 ;
-(void)setFocusedImage:(TVLImageElement *)arg1 ;
-(TVLImageElement *)focusedImage;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setTitle:(NSString *)arg1 ;
-(void)setImage:(TVLImageElement *)arg1 ;
-(TVLImageElement *)image;
-(NSString *)title;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)setBadge:(NSString *)arg1 ;
-(NSString *)badge;
@end

