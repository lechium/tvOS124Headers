/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLElement.h>

@class NSString, NSArray;

@interface TVLVideoElement : TVLElement {

	NSString* _caption;
	NSArray* _badges;
	NSArray* _previewImages;

}

@property (nonatomic,retain) NSString * caption;                   //@synthesize caption=_caption - In the implementation block
@property (nonatomic,retain) NSArray * badges;                     //@synthesize badges=_badges - In the implementation block
@property (nonatomic,retain) NSArray * previewImages;              //@synthesize previewImages=_previewImages - In the implementation block
-(NSString *)caption;
-(void)setCaption:(NSString *)arg1 ;
-(NSArray *)badges;
-(id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2 ;
-(void)setBadges:(NSArray *)arg1 ;
-(void)setPreviewImages:(NSArray *)arg1 ;
-(NSArray *)previewImages;
-(BOOL)isEqual:(id)arg1 ;
@end

