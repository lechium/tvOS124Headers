/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskResultObject.h>

@interface DMFRequestAirPlayMirroringResultObject : CATTaskResultObject {

	unsigned long long _status;

}

@property (nonatomic,readonly) unsigned long long status;              //@synthesize status=_status - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithStatus:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)status;
@end

