/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:21 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNObservation.h>

@class NSUUID;

@interface VNDetectedObjectObservation : VNObservation {

	CGRect _boundingBox;
	NSUUID* _identifier;

}

@property (assign,nonatomic) CGRect boundingBox;              //@synthesize boundingBox=_boundingBox - In the implementation block
@property (copy) NSUUID * identifier;                         //@synthesize identifier=_identifier - In the implementation block
+(id)observationWithRequestRevision:(unsigned long long)arg1 boundingBox:(CGRect)arg2 ;
+(id)observationWithBoundingBox:(CGRect)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)initWithRequestRevision:(unsigned long long)arg1 ;
-(BOOL)excludesBoundingBoxFromCoding;
-(void)setBoundingBoxFromQuadrilateralPointsAtTopLeft:(CGPoint)arg1 topRight:(CGPoint)arg2 bottomRight:(CGPoint)arg3 bottomLeft:(CGPoint)arg4 ;
-(NSUUID *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(CGRect)boundingBox;
-(void)setBoundingBox:(CGRect)arg1 ;
@end

