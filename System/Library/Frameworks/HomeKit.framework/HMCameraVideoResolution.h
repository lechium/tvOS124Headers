/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:24 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface HMCameraVideoResolution : NSObject <NSSecureCoding> {

	unsigned long long _videoResolution;

}

@property (nonatomic,readonly) unsigned long long videoResolution;              //@synthesize videoResolution=_videoResolution - In the implementation block
+(BOOL)isValid:(unsigned long long)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)initWithVideoResolutionType:(unsigned long long)arg1 ;
-(unsigned long long)videoResolution;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
@end
