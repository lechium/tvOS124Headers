/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDRemoteMessageDestination.h>

@class HMDDevice, HMDDeviceHandle;

@interface HMDRemoteDeviceMessageDestination : HMDRemoteMessageDestination {

	HMDDevice* _device;
	HMDDeviceHandle* _preferredHandle;

}

@property (nonatomic,copy) HMDDeviceHandle * preferredHandle;              //@synthesize preferredHandle=_preferredHandle - In the implementation block
@property (nonatomic,readonly) HMDDevice * device;                         //@synthesize device=_device - In the implementation block
+(id)shortDescription;
-(HMDDevice *)device;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(id)initWithTarget:(id)arg1 device:(id)arg2 ;
-(id)remoteDestinationString;
-(HMDDeviceHandle *)preferredHandle;
-(void)setPreferredHandle:(HMDDeviceHandle *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)initWithTarget:(id)arg1 ;
-(id)shortDescription;
@end
