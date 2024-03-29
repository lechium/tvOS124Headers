/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/VNEspressoModelImageprint.h>

@class VNFaceprint, VNTorsoprint;

@interface VNFaceTorsoprint : VNEspressoModelImageprint {

	VNFaceprint* _faceprint;
	VNTorsoprint* _torsoprint;

}

@property (nonatomic,readonly) VNFaceprint * faceprint;                                    //@synthesize faceprint=_faceprint - In the implementation block
@property (nonatomic,readonly) VNTorsoprint * torsoprint;                                  //@synthesize torsoprint=_torsoprint - In the implementation block
@property (getter=isValidTorsoprint,nonatomic,readonly) BOOL validTorsoprint; 
+(id)currentVersion;
+(unsigned)currentCodingVersion;
+(id)codingTypesToCodingKeys;
+(unsigned long long)serializationMagicNumber;
+(unsigned long long)currentSerializationVersion;
+(BOOL)supportsSecureCoding;
-(VNFaceprint *)faceprint;
-(BOOL)isValidTorsoprint;
-(id)initWithFaceprint:(id)arg1 torsoPrint:(id)arg2 requestRevision:(unsigned long long)arg3 ;
-(VNTorsoprint *)torsoprint;
-(id)computeDistance:(id)arg1 withDistanceFunction:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

