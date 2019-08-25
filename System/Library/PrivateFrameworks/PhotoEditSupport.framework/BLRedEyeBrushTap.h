/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:35 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
#import <PhotoEditSupport/AutoEncodeDecodeObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface BLRedEyeBrushTap : AutoEncodeDecodeObject <NSSecureCoding> {

	int _destinationWidth;
	double _timestamp;
	NSDictionary* _eyeRepairData;
	CGPoint _point;

}

@property (assign,nonatomic) double timestamp;                          //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) int destinationWidth;                      //@synthesize destinationWidth=_destinationWidth - In the implementation block
@property (assign,nonatomic) CGPoint point;                             //@synthesize point=_point - In the implementation block
@property (nonatomic,retain) NSDictionary * eyeRepairData;              //@synthesize eyeRepairData=_eyeRepairData - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)keysToEncode;
-(int)destinationWidth;
-(void)setDestinationWidth:(int)arg1 ;
-(NSDictionary *)eyeRepairData;
-(void)setEyeRepairData:(NSDictionary *)arg1 ;
-(id)init;
-(CGPoint)point;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(void)setPoint:(CGPoint)arg1 ;
@end

