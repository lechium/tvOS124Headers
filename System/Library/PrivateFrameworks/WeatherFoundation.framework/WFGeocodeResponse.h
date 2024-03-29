/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WeatherFoundation/WFResponse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class WFLocation;

@interface WFGeocodeResponse : WFResponse <NSSecureCoding> {

	WFLocation* _location;

}

@property (readonly) WFLocation * location;              //@synthesize location=_location - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithIdentifier:(id)arg1 location:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(WFLocation *)location;
@end

