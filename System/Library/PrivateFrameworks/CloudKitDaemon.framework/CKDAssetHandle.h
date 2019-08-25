/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKObject.h>

@class NSNumber, NSUUID, NSString, NSData;

@interface CKDAssetHandle : CKObject {

	NSNumber* _itemID;
	NSUUID* _UUID;
	NSString* _path;
	NSNumber* _volumeIndex;
	NSNumber* _fileID;
	NSNumber* _generationID;
	NSNumber* _lastUsedTime;
	NSData* _fileSignature;
	NSNumber* _status;
	NSNumber* _modTime;
	NSNumber* _fileSize;
	NSNumber* _chunkCount;

}

@property (nonatomic,retain) NSNumber * itemID;                    //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,retain) NSUUID * UUID;                        //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,retain) NSString * path;                      //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) NSNumber * volumeIndex;               //@synthesize volumeIndex=_volumeIndex - In the implementation block
@property (nonatomic,retain) NSNumber * fileID;                    //@synthesize fileID=_fileID - In the implementation block
@property (nonatomic,retain) NSNumber * generationID;              //@synthesize generationID=_generationID - In the implementation block
@property (nonatomic,retain) NSNumber * lastUsedTime;              //@synthesize lastUsedTime=_lastUsedTime - In the implementation block
@property (nonatomic,retain) NSData * fileSignature;               //@synthesize fileSignature=_fileSignature - In the implementation block
@property (nonatomic,retain) NSNumber * status;                    //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSNumber * modTime;                   //@synthesize modTime=_modTime - In the implementation block
@property (nonatomic,retain) NSNumber * fileSize;                  //@synthesize fileSize=_fileSize - In the implementation block
@property (nonatomic,retain) NSNumber * chunkCount;                //@synthesize chunkCount=_chunkCount - In the implementation block
+(id)descriptionWithStatus:(long long)arg1 ;
+(id)CKSQLiteClassName;
-(void)setChunkCount:(NSNumber *)arg1 ;
-(NSNumber *)chunkCount;
-(NSNumber *)itemID;
-(id)statusDescription;
-(id)CKPropertiesDescription;
-(void)setItemID:(NSNumber *)arg1 ;
-(NSData *)fileSignature;
-(void)setFileSignature:(NSData *)arg1 ;
-(NSNumber *)fileID;
-(void)setFileID:(NSNumber *)arg1 ;
-(NSNumber *)generationID;
-(void)setGenerationID:(NSNumber *)arg1 ;
-(void)setVolumeIndex:(NSNumber *)arg1 ;
-(NSNumber *)volumeIndex;
-(BOOL)shouldBeUnregisteredBeforeDeleted;
-(BOOL)mayHaveAssetCacheManagedFile;
-(NSNumber *)lastUsedTime;
-(id)initWithItemID:(id)arg1 UUID:(id)arg2 path:(id)arg3 ;
-(void)setModTime:(NSNumber *)arg1 ;
-(BOOL)isEqualRevisionOfAssetHandle:(id)arg1 differencesDescription:(id*)arg2 ;
-(void)setLastUsedTime:(NSNumber *)arg1 ;
-(BOOL)mayBeEvicted;
-(id)initWithPropertyDictionary:(id)arg1 ;
-(id)dictionaryPropertyEncoding;
-(NSNumber *)modTime;
-(BOOL)isEqualToAssetHandle:(id)arg1 keys:(id)arg2 differencesDescription:(id*)arg3 ;
-(NSUUID *)UUID;
-(id)description;
-(void)setPath:(NSString *)arg1 ;
-(NSString *)path;
-(void)setFileSize:(NSNumber *)arg1 ;
-(NSNumber *)fileSize;
-(void)setUUID:(NSUUID *)arg1 ;
-(NSNumber *)status;
-(void)setStatus:(NSNumber *)arg1 ;
@end

