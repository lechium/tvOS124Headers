/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:25 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID;

@interface AFAudioDeviceInfo : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isRemoteDevice;
	NSString* _route;
	NSUUID* _deviceUID;

}

@property (nonatomic,copy,readonly) NSString * route;                //@synthesize route=_route - In the implementation block
@property (nonatomic,readonly) BOOL isRemoteDevice;                  //@synthesize isRemoteDevice=_isRemoteDevice - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * deviceUID;              //@synthesize deviceUID=_deviceUID - In the implementation block
+(id)newWithBuilder:(/*^block*/id)arg1 ;
+(BOOL)supportsSecureCoding;
-(NSString *)route;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(NSUUID *)deviceUID;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(BOOL)isRemoteDevice;
-(id)initWithRoute:(id)arg1 isRemoteDevice:(BOOL)arg2 deviceUID:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

