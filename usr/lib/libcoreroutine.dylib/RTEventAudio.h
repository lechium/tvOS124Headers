/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:28 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRoutine/RTEvent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface RTEventAudio : RTEvent <NSSecureCoding> {

	NSString* _deviceIdentifier;
	NSString* _deviceName;
	long long _audioState;
	long long _audioSource;

}

@property (nonatomic,readonly) NSString * deviceIdentifier;              //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * deviceName;                    //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,readonly) long long audioState;                     //@synthesize audioState=_audioState - In the implementation block
@property (nonatomic,readonly) long long audioSource;                    //@synthesize audioSource=_audioSource - In the implementation block
+(id)stringFromAudioState:(long long)arg1 ;
+(BOOL)supportsSecureCoding;
-(NSString *)deviceIdentifier;
-(NSString *)deviceName;
-(long long)audioState;
-(long long)audioSource;
-(id)initWithDeviceIdentifier:(id)arg1 deviceName:(id)arg2 audioState:(long long)arg3 audioSource:(long long)arg4 source:(long long)arg5 startDate:(id)arg6 endDate:(id)arg7 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end

