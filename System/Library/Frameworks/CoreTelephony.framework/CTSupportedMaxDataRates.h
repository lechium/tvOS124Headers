/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CTSupportedMaxDataRates : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _rates;

}

@property (nonatomic,retain) NSArray * rates;              //@synthesize rates=_rates - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithRates:(id)arg1 ;
-(NSArray *)rates;
-(void)setRates:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

