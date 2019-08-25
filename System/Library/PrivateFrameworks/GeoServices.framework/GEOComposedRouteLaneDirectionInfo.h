/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface GEOComposedRouteLaneDirectionInfo : NSObject <NSSecureCoding> {

	int _direction;
	float _angle;

}

@property (nonatomic,readonly) int direction; 
@property (nonatomic,readonly) float angle; 
+(BOOL)supportsSecureCoding;
-(id)initWithLaneArrowHead:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)direction;
-(float)angle;
@end
