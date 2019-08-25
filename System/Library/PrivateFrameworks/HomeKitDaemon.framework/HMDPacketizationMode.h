/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:52 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDNumberParser.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface HMDPacketizationMode : HMDNumberParser <NSSecureCoding> {

	unsigned long long _packetizationMode;

}

@property (nonatomic,readonly) unsigned long long packetizationMode;              //@synthesize packetizationMode=_packetizationMode - In the implementation block
+(id)arrayWithModes:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(id)initWithTLVData:(id)arg1 ;
-(unsigned long long)packetizationMode;
-(id)initWithPacketizationMode:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

