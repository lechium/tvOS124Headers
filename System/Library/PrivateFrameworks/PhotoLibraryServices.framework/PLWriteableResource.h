/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol PLWriteableResource <PLResource>
@property (assign,nonatomic) short resourceType; 
@property (assign,nonatomic) short version; 
@property (assign,nonatomic) unsigned recipeID; 
@property (nonatomic,retain) id<PLUniformTypeIdentifierIdentity> uniformTypeIdentifierID; 
@property (nonatomic,retain) id<PLCodecIdentity> codecID; 
@property (nonatomic,retain) id<PLColorSpaceIdentity> colorSpaceID; 
@property (assign,nonatomic) unsigned orientation; 
@property (assign,nonatomic) long long unorientedWidth; 
@property (assign,nonatomic) long long unorientedHeight; 
@property (assign,nonatomic) int qualitySortValue; 
@property (nonatomic,retain) id<PLResourceDataStore> dataStore; 
@property (assign,nonatomic) long long dataStoreSubtype; 
@property (nonatomic,retain) id<PLResourceDataStoreKey> dataStoreKey; 
@property (nonatomic,retain) NSString * fingerprint; 
@property (assign,nonatomic) long long dataLength; 
@property (assign,nonatomic) short remoteAvailability; 
@required
-(short)resourceType;
-(void)setResourceType:(short)arg1;
-(void)setColorSpaceID:(id)arg1;
-(unsigned)recipeID;
-(void)setRecipeID:(unsigned)arg1;
-(void)setUnorientedWidth:(long long)arg1;
-(void)setUnorientedHeight:(long long)arg1;
-(void)setQualitySortValue:(int)arg1;
-(void)setUniformTypeIdentifierID:(id)arg1;
-(void)setDataStore:(id)arg1;
-(void)setDataStoreKey:(id)arg1;
-(id<PLColorSpaceIdentity>)colorSpaceID;
-(id<PLCodecIdentity>)codecID;
-(int)qualitySortValue;
-(short)remoteAvailability;
-(void)setRemoteAvailability:(short)arg1;
-(id<PLResourceDataStoreKey>)dataStoreKey;
-(NSString *)fingerprint;
-(void)setFingerprint:(id)arg1;
-(long long)dataLength;
-(void)setDataLength:(long long)arg1;
-(id<PLResourceDataStore>)dataStore;
-(void)setCodecID:(id)arg1;
-(id<PLUniformTypeIdentifierIdentity>)uniformTypeIdentifierID;
-(long long)unorientedWidth;
-(long long)unorientedHeight;
-(long long)dataStoreSubtype;
-(void)setDataStoreSubtype:(long long)arg1;
-(void)setVersion:(short)arg1;
-(short)version;
-(unsigned)orientation;
-(void)setOrientation:(unsigned)arg1;

@end

