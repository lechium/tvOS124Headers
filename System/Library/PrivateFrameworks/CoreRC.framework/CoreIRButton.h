/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRC/CoreRC-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CoreIRButton : NSObject <NSSecureCoding, NSCopying> {

	unsigned _usagePage;
	unsigned _usageID;

}

@property (nonatomic,readonly) unsigned usagePage;              //@synthesize usagePage=_usagePage - In the implementation block
@property (nonatomic,readonly) unsigned usageID;                //@synthesize usageID=_usageID - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned)usagePage;
-(id)initWithUsagePage:(unsigned)arg1 usageID:(unsigned)arg2 ;
-(unsigned)usageID;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

