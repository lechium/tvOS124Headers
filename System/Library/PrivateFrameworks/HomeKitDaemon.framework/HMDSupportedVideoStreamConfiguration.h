/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:52 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDTLVBase.h>
#import <libobjc.A.dylib/HMDTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface HMDSupportedVideoStreamConfiguration : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding> {

	NSDictionary* _codecConfigurations;

}

@property (nonatomic,copy,readonly) NSDictionary * codecConfigurations;              //@synthesize codecConfigurations=_codecConfigurations - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)tlvData;
-(BOOL)_parseFromTLVData;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(NSDictionary *)codecConfigurations;
-(id)initWithCodecConfigurations:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

