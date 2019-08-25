/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:28 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface BBSectionFilter : NSObject <NSCopying, NSSecureCoding> {

	BOOL _enabled;
	NSString* _displayName;
	NSString* _filterID;

}

@property (nonatomic,copy) NSString * displayName;                       //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * filterID;                          //@synthesize filterID=_filterID - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)filterID;
-(id)initWithID:(id)arg1 ;
-(void)setFilterID:(NSString *)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
@end

