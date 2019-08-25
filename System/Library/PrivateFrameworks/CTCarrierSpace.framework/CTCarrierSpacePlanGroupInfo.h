/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:10 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface CTCarrierSpacePlanGroupInfo : NSObject <NSSecureCoding> {

	long long _planCategory;
	NSArray* _groupOptionsList;
	NSString* _groupId;

}

@property (assign,nonatomic) long long planCategory;                  //@synthesize planCategory=_planCategory - In the implementation block
@property (nonatomic,retain) NSString * groupId;                      //@synthesize groupId=_groupId - In the implementation block
@property (nonatomic,retain) NSArray * groupOptionsList;              //@synthesize groupOptionsList=_groupOptionsList - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)groupId;
-(void)setGroupId:(NSString *)arg1 ;
-(long long)planCategory;
-(void)setPlanCategory:(long long)arg1 ;
-(NSArray *)groupOptionsList;
-(void)setGroupOptionsList:(NSArray *)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end

