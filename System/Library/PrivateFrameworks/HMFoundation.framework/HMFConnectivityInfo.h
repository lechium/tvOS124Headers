/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, HMFWoBLEInfo, HMFWoWLANInfo;

@interface HMFConnectivityInfo : HMFObject <NSSecureCoding> {

	NSString* _accessoryIdentifier;
	HMFWoBLEInfo* _woBLEInfo;
	HMFWoWLANInfo* _woWLANInfo;

}

@property (nonatomic,retain) HMFWoBLEInfo * woBLEInfo;                      //@synthesize woBLEInfo=_woBLEInfo - In the implementation block
@property (nonatomic,retain) HMFWoWLANInfo * woWLANInfo;                    //@synthesize woWLANInfo=_woWLANInfo - In the implementation block
@property (nonatomic,readonly) NSString * accessoryIdentifier;              //@synthesize accessoryIdentifier=_accessoryIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
-(void)setWoBLEInfo:(HMFWoBLEInfo *)arg1 ;
-(void)setWoWLANInfo:(HMFWoWLANInfo *)arg1 ;
-(void)updateWithWoBLEInfo:(id)arg1 ;
-(id)initWithAccessory:(id)arg1 woBLEInfo:(id)arg2 ;
-(id)initWithAccessory:(id)arg1 woWLANInfo:(id)arg2 ;
-(HMFWoWLANInfo *)woWLANInfo;
-(void)updateWithWoWLANInfo:(id)arg1 ;
-(NSString *)accessoryIdentifier;
-(HMFWoBLEInfo *)woBLEInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end

