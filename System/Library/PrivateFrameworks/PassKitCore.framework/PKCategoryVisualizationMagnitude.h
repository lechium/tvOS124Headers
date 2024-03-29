/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:28 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PKCategoryVisualizationMagnitude : NSObject <NSSecureCoding> {

	NSString* _passUniqueIdentifier;
	long long _bucket;
	double _magnitude;

}

@property (nonatomic,copy) NSString * passUniqueIdentifier;              //@synthesize passUniqueIdentifier=_passUniqueIdentifier - In the implementation block
@property (assign,nonatomic) long long bucket;                           //@synthesize bucket=_bucket - In the implementation block
@property (assign,nonatomic) double magnitude;                           //@synthesize magnitude=_magnitude - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)passUniqueIdentifier;
-(void)setPassUniqueIdentifier:(NSString *)arg1 ;
-(long long)bucket;
-(void)setBucket:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(double)magnitude;
-(void)setMagnitude:(double)arg1 ;
@end

