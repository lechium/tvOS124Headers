/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLElement.h>

@class NSString, NSArray;

@interface TVLShelfSectionElement : TVLElement {

	NSString* _title;
	NSArray* _shelfItems;

}

@property (nonatomic,copy) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSArray * shelfItems;              //@synthesize shelfItems=_shelfItems - In the implementation block
-(id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2 ;
-(NSArray *)shelfItems;
-(void)setShelfItems:(NSArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
@end

