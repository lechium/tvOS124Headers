/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:02 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CLLocation, NSDate;

@interface HMDHomeLocationData : HMFObject <NSSecureCoding> {

	CLLocation* _location;
	NSDate* _locationUpdateTimestamp;

}

@property (nonatomic,readonly) CLLocation * location;                         //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) NSDate * locationUpdateTimestamp;              //@synthesize locationUpdateTimestamp=_locationUpdateTimestamp - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)locationUpdateTimestamp;
-(id)initWithLocation:(id)arg1 locationUpdateTimestamp:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(CLLocation *)location;
@end

