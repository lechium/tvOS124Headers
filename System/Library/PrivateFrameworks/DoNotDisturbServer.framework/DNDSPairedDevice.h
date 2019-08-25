/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface DNDSPairedDevice : NSObject <NSCopying> {

	NSString* _deviceIdentifier;
	unsigned long long _deviceClass;

}

@property (nonatomic,copy,readonly) NSString * deviceIdentifier;              //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long deviceClass;                //@synthesize deviceClass=_deviceClass - In the implementation block
-(NSString *)deviceIdentifier;
-(unsigned long long)deviceClass;
-(id)initWithDeviceIdentifier:(id)arg1 deviceClass:(unsigned long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

