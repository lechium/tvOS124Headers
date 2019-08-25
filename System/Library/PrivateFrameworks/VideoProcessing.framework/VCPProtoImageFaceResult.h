/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:07 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/VCPProtoResultLegacyConversionProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class VCPProtoBounds;

@interface VCPProtoImageFaceResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {

	VCPProtoBounds* _bounds;
	int _eyeExpression;
	int _mouthExpression;
	int _position;
	int _yaw;
	BOOL _isCloseup;

}

@property (assign,nonatomic) int eyeExpression;                    //@synthesize eyeExpression=_eyeExpression - In the implementation block
@property (assign,nonatomic) int mouthExpression;                  //@synthesize mouthExpression=_mouthExpression - In the implementation block
@property (assign,nonatomic) int yaw;                              //@synthesize yaw=_yaw - In the implementation block
@property (assign,nonatomic) int position;                         //@synthesize position=_position - In the implementation block
@property (nonatomic,retain) VCPProtoBounds * bounds;              //@synthesize bounds=_bounds - In the implementation block
@property (assign,nonatomic) BOOL isCloseup;                       //@synthesize isCloseup=_isCloseup - In the implementation block
+(id)resultFromLegacyDictionary:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setYaw:(int)arg1 ;
-(int)yaw;
-(id)exportToLegacyDictionary;
-(int)eyeExpression;
-(void)setEyeExpression:(int)arg1 ;
-(int)mouthExpression;
-(void)setMouthExpression:(int)arg1 ;
-(BOOL)isCloseup;
-(void)setIsCloseup:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(VCPProtoBounds *)bounds;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBounds:(VCPProtoBounds *)arg1 ;
-(void)setPosition:(int)arg1 ;
-(int)position;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

