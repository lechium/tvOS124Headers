/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSDictionary, PLPerson, NSURL;

@interface PLPersistedPersonMetadata : NSObject {

	short _keyFacePickSource;
	unsigned _manualOrder;
	int _type;
	int _verifiedType;
	int _cloudVerifiedType;
	NSString* _personUUID;
	NSString* _mergeTargetPersonUUID;
	NSString* _fullName;
	NSString* _displayName;
	NSString* _personUri;
	NSArray* _detectedFaces;
	NSArray* _rejectedFaces;
	NSDictionary* _contactMatchingDictionary;
	long long _fromVersion;
	PLPerson* _person;
	NSURL* _metadataURL;

}

@property (nonatomic,retain) PLPerson * person;                                   //@synthesize person=_person - In the implementation block
@property (nonatomic,retain) NSURL * metadataURL;                                 //@synthesize metadataURL=_metadataURL - In the implementation block
@property (nonatomic,retain) NSString * personUUID;                               //@synthesize personUUID=_personUUID - In the implementation block
@property (nonatomic,retain) NSString * mergeTargetPersonUUID;                    //@synthesize mergeTargetPersonUUID=_mergeTargetPersonUUID - In the implementation block
@property (nonatomic,retain) NSString * fullName;                                 //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,retain) NSString * displayName;                              //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * personUri;                                //@synthesize personUri=_personUri - In the implementation block
@property (assign,nonatomic) unsigned manualOrder;                                //@synthesize manualOrder=_manualOrder - In the implementation block
@property (assign,nonatomic) int type;                                            //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int verifiedType;                                    //@synthesize verifiedType=_verifiedType - In the implementation block
@property (assign,nonatomic) int cloudVerifiedType;                               //@synthesize cloudVerifiedType=_cloudVerifiedType - In the implementation block
@property (nonatomic,retain) NSArray * detectedFaces;                             //@synthesize detectedFaces=_detectedFaces - In the implementation block
@property (nonatomic,retain) NSArray * rejectedFaces;                             //@synthesize rejectedFaces=_rejectedFaces - In the implementation block
@property (nonatomic,copy) NSDictionary * contactMatchingDictionary;              //@synthesize contactMatchingDictionary=_contactMatchingDictionary - In the implementation block
@property (assign,nonatomic) short keyFacePickSource;                             //@synthesize keyFacePickSource=_keyFacePickSource - In the implementation block
@property (assign,nonatomic) long long fromVersion;                               //@synthesize fromVersion=_fromVersion - In the implementation block
+(BOOL)isValidPath:(id)arg1 ;
+(id)personUUIDsToDedupeWithMetadataURLs:(id)arg1 ;
+(void)updateMergeTargetPersonWithPersonUUIDMapping:(id)arg1 fromDataInManagedObjectContext:(id)arg2 ;
+(void)performPostImportMigrationFromVersion:(unsigned long long)arg1 fromDataInManagedObjectContext:(id)arg2 ;
+(id)urlForLegacyHiddenFacesFile;
+(BOOL)isValidPath:(id)arg1 outPersonUUID:(id*)arg2 ;
+(id)metadataFileURLForPersonUUID:(id)arg1 ;
+(id)_fetchFacesWithPredicate:(id)arg1 resultType:(unsigned long long)arg2 managedObjectContext:(id)arg3 error:(id*)arg4 ;
+(id)_detectedFacesToArchiveWithPerson:(id)arg1 ;
+(id)_persistedFaceMetadataWithFaces:(id)arg1 keyFace:(id)arg2 clusterRejectedFaceIDs:(id)arg3 ;
+(id)_rejectedFacesToArchiveWithPerson:(id)arg1 ;
+(id)_clusterRejectedFaceIDsWithPerson:(id)arg1 ;
+(BOOL)deleteMetadataFileForPersonUUID:(id)arg1 ;
+(id)urlsForPersistedPersonsInLibraryMetadataDirectory;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)fullName;
-(NSString *)personUUID;
-(id)initWithPersistedDataAtURL:(id)arg1 ;
-(BOOL)hasAllAssetsAvailableInManagedObjectContext:(id)arg1 includePendingAssetChanges:(BOOL)arg2 ;
-(id)initWithPersistedDataAtURL:(id)arg1 deferUnarchiving:(BOOL)arg2 ;
-(BOOL)readMetadata;
-(long long)fromVersion;
-(id)insertPersonFromDataInManagedObjectContext:(id)arg1 ;
-(BOOL)updateFacesInPerson:(id)arg1 fromDataInManagedObjectContext:(id)arg2 deferUnmatched:(BOOL)arg3 ;
-(NSString *)mergeTargetPersonUUID;
-(NSArray *)detectedFaces;
-(void)_saveMetadata;
-(NSURL *)metadataURL;
-(id)_metadataData;
-(void)writePersistedData;
-(void)setMetadataURL:(NSURL *)arg1 ;
-(void)setPersonUUID:(NSString *)arg1 ;
-(void)setKeyFacePickSource:(short)arg1 ;
-(NSArray *)rejectedFaces;
-(void)setFullName:(NSString *)arg1 ;
-(void)setCloudVerifiedType:(int)arg1 ;
-(void)setDetectedFaces:(NSArray *)arg1 ;
-(id)jsonDictionary;
-(id)initWithPLPerson:(id)arg1 metadataURL:(id)arg2 ;
-(BOOL)_readUUID;
-(int)cloudVerifiedType;
-(short)keyFacePickSource;
-(BOOL)_insertDetectedFacesOnPerson:(id)arg1 fromDataInManagedObjectContext:(id)arg2 deferUnmatched:(BOOL)arg3 ;
-(BOOL)_insertRejectedFacesOnPerson:(id)arg1 fromDataInManagedObjectContext:(id)arg2 deferUnmatched:(BOOL)arg3 ;
-(void)_addAssetUUIDsFromFaces:(id)arg1 toMutableSet:(id)arg2 ;
-(void)setFromVersion:(long long)arg1 ;
-(void)setMergeTargetPersonUUID:(NSString *)arg1 ;
-(void)setRejectedFaces:(NSArray *)arg1 ;
-(BOOL)readDetectedFaces;
-(id)detectedFaceIdentifiers;
-(id)initWithPLPerson:(id)arg1 ;
-(BOOL)matchesEntityInLibraryBackedByManagedObjectContext:(id)arg1 diff:(id*)arg2 ;
-(int)verifiedType;
-(void)setVerifiedType:(int)arg1 ;
-(void)setContactMatchingDictionary:(NSDictionary *)arg1 ;
-(void)setPersonUri:(NSString *)arg1 ;
-(void)setManualOrder:(unsigned)arg1 ;
-(unsigned)manualOrder;
-(NSString *)personUri;
-(NSDictionary *)contactMatchingDictionary;
-(id)init;
-(id)description;
-(int)type;
-(void)setType:(int)arg1 ;
-(NSString *)displayName;
-(void)setPerson:(PLPerson *)arg1 ;
-(PLPerson *)person;
@end

