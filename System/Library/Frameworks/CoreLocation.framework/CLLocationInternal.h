/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreLocation/CoreLocation-Structs.h>
@class CLLocationMatchInfo;

@interface CLLocationInternal : NSObject {

	SCD_Struct_CL3 fLocation;
	CLLocationMatchInfo* fMatchInfo;
	double fTrustedTimestamp;

}
-(id)initWithClientLocation:(SCD_Struct_CL16)arg1 matchInfo:(id)arg2 trustedTimestamp:(double)arg3 ;
-(id)initWithClientLocation:(SCD_Struct_CL16)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

