/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSSet;

@interface HMCameraStreamAudioPreferences : NSObject <NSSecureCoding> {

	NSNumber* _volume;
	NSSet* _codecs;

}

@property (nonatomic,readonly) NSNumber * volume;              //@synthesize volume=_volume - In the implementation block
@property (nonatomic,readonly) NSSet * codecs;                 //@synthesize codecs=_codecs - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithVolume:(id)arg1 codecs:(id)arg2 ;
-(NSNumber *)volume;
-(NSSet *)codecs;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end
