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

@interface CPLMemoryAssetFlag : PBCodable <NSCopying> {

	BOOL _isCurated;
	BOOL _isExtendedCurated;
	BOOL _isKeyAsset;
	BOOL _isMovieCurated;
	BOOL _isRepresentative;
	SCD_Struct_CP9 _has;

}

@property (assign,nonatomic) BOOL hasIsRepresentative; 
@property (assign,nonatomic) BOOL isRepresentative;                  //@synthesize isRepresentative=_isRepresentative - In the implementation block
@property (assign,nonatomic) BOOL hasIsCurated; 
@property (assign,nonatomic) BOOL isCurated;                         //@synthesize isCurated=_isCurated - In the implementation block
@property (assign,nonatomic) BOOL hasIsMovieCurated; 
@property (assign,nonatomic) BOOL isMovieCurated;                    //@synthesize isMovieCurated=_isMovieCurated - In the implementation block
@property (assign,nonatomic) BOOL hasIsKeyAsset; 
@property (assign,nonatomic) BOOL isKeyAsset;                        //@synthesize isKeyAsset=_isKeyAsset - In the implementation block
@property (assign,nonatomic) BOOL hasIsExtendedCurated; 
@property (assign,nonatomic) BOOL isExtendedCurated;                 //@synthesize isExtendedCurated=_isExtendedCurated - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasIsRepresentative:(BOOL)arg1 ;
-(BOOL)hasIsRepresentative;
-(void)setHasIsKeyAsset:(BOOL)arg1 ;
-(BOOL)hasIsKeyAsset;
-(void)setHasIsCurated:(BOOL)arg1 ;
-(BOOL)hasIsCurated;
-(void)setHasIsMovieCurated:(BOOL)arg1 ;
-(BOOL)hasIsMovieCurated;
-(void)setHasIsExtendedCurated:(BOOL)arg1 ;
-(BOOL)hasIsExtendedCurated;
-(BOOL)isKeyAsset;
-(BOOL)isRepresentative;
-(void)setIsKeyAsset:(BOOL)arg1 ;
-(void)setIsRepresentative:(BOOL)arg1 ;
-(BOOL)isExtendedCurated;
-(BOOL)isMovieCurated;
-(void)setIsCurated:(BOOL)arg1 ;
-(void)setIsExtendedCurated:(BOOL)arg1 ;
-(void)setIsMovieCurated:(BOOL)arg1 ;
-(BOOL)isCurated;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

