/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVServices/TVContentItem.h>

@class NSDictionary, NSDate;

@interface TVCKStoreFavoriteItem : TVContentItem {

	NSDictionary* _dictionary;
	NSDate* _dateForSorting;

}

@property (nonatomic,copy) NSDictionary * dictionary;                   //@synthesize dictionary=_dictionary - In the implementation block
@property (assign,nonatomic) unsigned long long userOrder; 
@property (nonatomic,copy) NSDate * dateForSorting;                     //@synthesize dateForSorting=_dateForSorting - In the implementation block
-(NSDate *)dateForSorting;
-(void)setDateForSorting:(NSDate *)arg1 ;
-(unsigned long long)userOrder;
-(void)setUserOrder:(unsigned long long)arg1 ;
-(NSDictionary *)dictionary;
-(id)description;
-(void)setDictionary:(NSDictionary *)arg1 ;
@end
