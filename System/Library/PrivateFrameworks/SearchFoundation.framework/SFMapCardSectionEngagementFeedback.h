/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFCardSectionEngagementFeedback.h>

@class NSData;

@interface SFMapCardSectionEngagementFeedback : SFCardSectionEngagementFeedback {

	NSData* _modifiedPlacemarkData;

}

@property (nonatomic,retain) NSData * modifiedPlacemarkData;              //@synthesize modifiedPlacemarkData=_modifiedPlacemarkData - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSData *)modifiedPlacemarkData;
-(void)setModifiedPlacemarkData:(NSData *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

