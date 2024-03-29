/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:34 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface CPLFaceInstance : PBCodable <NSCopying> {

	double _centerX;
	double _centerY;
	double _size;
	unsigned _faceState;
	unsigned _nameSource;
	NSString* _personIdentifier;
	NSMutableArray* _rejectedPersonIdentifiers;
	SCD_Struct_CP9 _has;

}

@property (getter=isNoneState,nonatomic,readonly) BOOL noneState; 
@property (assign,getter=isKeyFace,nonatomic) BOOL keyFace; 
@property (assign,getter=isManual,nonatomic) BOOL manual; 
@property (nonatomic,readonly) BOOL hasPersonIdentifier; 
@property (nonatomic,retain) NSString * personIdentifier;                             //@synthesize personIdentifier=_personIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasCenterX; 
@property (assign,nonatomic) double centerX;                                          //@synthesize centerX=_centerX - In the implementation block
@property (assign,nonatomic) BOOL hasCenterY; 
@property (assign,nonatomic) double centerY;                                          //@synthesize centerY=_centerY - In the implementation block
@property (assign,nonatomic) BOOL hasSize; 
@property (assign,nonatomic) double size;                                             //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) BOOL hasFaceState; 
@property (assign,nonatomic) unsigned faceState;                                      //@synthesize faceState=_faceState - In the implementation block
@property (nonatomic,retain) NSMutableArray * rejectedPersonIdentifiers;              //@synthesize rejectedPersonIdentifiers=_rejectedPersonIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL hasNameSource; 
@property (assign,nonatomic) unsigned nameSource;                                     //@synthesize nameSource=_nameSource - In the implementation block
+(Class)rejectedPersonIdentifiersType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasSize:(BOOL)arg1 ;
-(BOOL)hasSize;
-(void)setFaceState:(unsigned)arg1 ;
-(unsigned)faceState;
-(void)_setFaceStateBit:(unsigned)arg1 fromBoolValue:(BOOL)arg2 ;
-(BOOL)_isFaceStateBitSet:(unsigned)arg1 ;
-(void)clearState;
-(BOOL)isNoneState;
-(void)addRejectedPersonIdentifiers:(id)arg1 ;
-(unsigned long long)rejectedPersonIdentifiersCount;
-(void)clearRejectedPersonIdentifiers;
-(id)rejectedPersonIdentifiersAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasPersonIdentifier;
-(void)setHasCenterX:(BOOL)arg1 ;
-(BOOL)hasCenterX;
-(void)setHasCenterY:(BOOL)arg1 ;
-(BOOL)hasCenterY;
-(void)setHasFaceState:(BOOL)arg1 ;
-(BOOL)hasFaceState;
-(void)setHasNameSource:(BOOL)arg1 ;
-(BOOL)hasNameSource;
-(unsigned)nameSource;
-(void)setNameSource:(unsigned)arg1 ;
-(id)pointerDescription;
-(void)setPersonIdentifier:(NSString *)arg1 ;
-(NSString *)personIdentifier;
-(void)setCenterX:(double)arg1 ;
-(void)setCenterY:(double)arg1 ;
-(void)setManual:(BOOL)arg1 ;
-(void)setKeyFace:(BOOL)arg1 ;
-(void)setRejectedPersonIdentifiers:(NSMutableArray *)arg1 ;
-(BOOL)isKeyFace;
-(NSMutableArray *)rejectedPersonIdentifiers;
-(double)centerX;
-(double)centerY;
-(double)size;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSize:(double)arg1 ;
-(long long)compare:(id)arg1 ;
-(BOOL)isManual;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

