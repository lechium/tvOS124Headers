/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarDataEntry.h>

@class NSString;

@interface _UIStatusBarDataBackgroundActivityEntry : _UIStatusBarDataEntry {

	long long _type;
	double _displayStartDate;
	NSString* _detailString;

}

@property (assign,nonatomic) long long type;                       //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) double displayStartDate;              //@synthesize displayStartDate=_displayStartDate - In the implementation block
@property (nonatomic,copy) NSString * detailString;                //@synthesize detailString=_detailString - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(NSString *)detailString;
-(double)displayStartDate;
-(id)_ui_descriptionBuilder;
-(void)setDetailString:(NSString *)arg1 ;
-(void)setDisplayStartDate:(double)arg1 ;
@end

