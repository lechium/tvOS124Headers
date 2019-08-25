/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:03 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PHTextFeature : NSObject <NSSecureCoding> {

	float _weight;
	long long _type;
	NSString* _string;
	unsigned long long _origin;

}

@property (assign,nonatomic) long long type;                         //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * string;                        //@synthesize string=_string - In the implementation block
@property (assign,nonatomic) float weight;                           //@synthesize weight=_weight - In the implementation block
@property (assign,nonatomic) unsigned long long origin;              //@synthesize origin=_origin - In the implementation block
+(id)stringForOrigin:(unsigned long long)arg1 ;
+(id)textFeatureWithType:(long long)arg1 string:(id)arg2 weight:(float)arg3 origin:(unsigned long long)arg4 ;
+(id)textFeatureWithData:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)stringForType:(long long)arg1 ;
-(id)initWithType:(long long)arg1 string:(id)arg2 weight:(float)arg3 origin:(unsigned long long)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)string;
-(id)description;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(unsigned long long)origin;
-(void)setOrigin:(unsigned long long)arg1 ;
-(id)encodedData;
-(void)setString:(NSString *)arg1 ;
-(float)weight;
-(void)setWeight:(float)arg1 ;
@end

