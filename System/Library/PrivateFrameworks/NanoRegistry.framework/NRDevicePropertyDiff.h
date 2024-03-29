/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <NanoRegistry/NRDiffBase.h>

@protocol NSObjectNSCopying;
@class NRPBDevicePropertyDiff;

@interface NRDevicePropertyDiff : NRDiffBase {

	id<NSObject><NSCopying> _value;

}

@property (nonatomic,readonly) id<NSObject><NSCopying> value;                  //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NRPBDevicePropertyDiff * protobuf; 
+(id)enclosedClassTypes;
+(id)unpackPropertyValue:(id)arg1 ;
+(id)packPropertyValue:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)initWithProtobuf:(id)arg1 ;
-(NRPBDevicePropertyDiff *)protobuf;
-(id)initWithValue:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<NSObject><NSCopying>)value;
@end

