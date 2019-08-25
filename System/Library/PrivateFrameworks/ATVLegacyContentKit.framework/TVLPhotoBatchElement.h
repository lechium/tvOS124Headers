/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLElement.h>

@class NSString, NSArray;

@interface TVLPhotoBatchElement : TVLElement {

	NSString* _title;
	NSString* _boldTitle;
	NSString* _dimmedTitle;
	NSArray* _items;

}

@property (nonatomic,retain) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * boldTitle;                //@synthesize boldTitle=_boldTitle - In the implementation block
@property (nonatomic,retain) NSString * dimmedTitle;              //@synthesize dimmedTitle=_dimmedTitle - In the implementation block
@property (nonatomic,retain) NSArray * items;                     //@synthesize items=_items - In the implementation block
-(id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2 ;
-(void)setBoldTitle:(NSString *)arg1 ;
-(void)setDimmedTitle:(NSString *)arg1 ;
-(NSString *)boldTitle;
-(NSString *)dimmedTitle;
-(BOOL)isEqual:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
@end

