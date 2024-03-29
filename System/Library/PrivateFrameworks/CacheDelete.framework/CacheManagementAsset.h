/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:53 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CacheDelete.framework/CacheDelete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CacheDelete/CacheDelete-Structs.h>
@class NSString, NSData;

@interface CacheManagementAsset : NSObject {

	int _priority;
	unsigned _assetVersion;
	NSString* _displayName;
	NSString* _identifier;
	NSString* _relativePath;
	NSString* _contentType;
	NSData* _metadata;
	double _expiration_date;
	double _consumed_date;
	double _download_start_date;
	double _download_completion_date;
	double _last_viewed_date;
	NSString* _absolutePath;

}

@property (readonly) unsigned assetVersion;                        //@synthesize assetVersion=_assetVersion - In the implementation block
@property (assign) double expiration_date;                         //@synthesize expiration_date=_expiration_date - In the implementation block
@property (assign) double consumed_date;                           //@synthesize consumed_date=_consumed_date - In the implementation block
@property (assign) double download_start_date;                     //@synthesize download_start_date=_download_start_date - In the implementation block
@property (assign) double download_completion_date;                //@synthesize download_completion_date=_download_completion_date - In the implementation block
@property (assign) double last_viewed_date;                        //@synthesize last_viewed_date=_last_viewed_date - In the implementation block
@property (retain) NSString * absolutePath;                        //@synthesize absolutePath=_absolutePath - In the implementation block
@property (nonatomic,retain) NSString * displayName;               //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * relativePath;              //@synthesize relativePath=_relativePath - In the implementation block
@property (nonatomic,retain) NSString * contentType;               //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,retain) NSData * metadata;                    //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) NSData * thumbnailData; 
@property (assign) int priority;                                   //@synthesize priority=_priority - In the implementation block
+(id)assetFromFile:(id)arg1 withIdentifier:(id)arg2 ;
+(id)assetFromPath:(id)arg1 withIdentifier:(id)arg2 ;
+(id)assetWithRelativePath:(id)arg1 identifier:(id)arg2 expirationDate:(id)arg3 contentType:(id)arg4 metadata:(id)arg5 priority:(int)arg6 ;
+(id)assetFromPath:(id)arg1 withIdentifier:(id)arg2 createIfAbsent:(BOOL)arg3 ;
+(id)assetFromData:(id)arg1 ;
-(NSString *)relativePath;
-(void)setDownloadStartDate:(id)arg1 ;
-(id)downloadStartDate;
-(void)setDownloadCompletionDate:(id)arg1 ;
-(id)downloadCompletionDate;
-(void)setConsumedDate:(id)arg1 ;
-(id)consumedDate;
-(double)expiration_date;
-(double)consumed_date;
-(double)download_start_date;
-(double)download_completion_date;
-(double)last_viewed_date;
-(id)initWithRelativePath:(id)arg1 identifier:(id)arg2 expirationDate:(id)arg3 contentType:(id)arg4 metadata:(id)arg5 priority:(int)arg6 ;
-(id)initWithFlattenedAsset:(SCD_Struct_Ca0*)arg1 ;
-(SCD_Struct_Ca0*)createFlattenedAsset:(long long*)arg1 ;
-(void)setExpiration_date:(double)arg1 ;
-(void)setConsumed_date:(double)arg1 ;
-(void)setDownload_start_date:(double)arg1 ;
-(void)setDownload_completion_date:(double)arg1 ;
-(void)setLast_viewed_date:(double)arg1 ;
-(long long)sizeCached:(BOOL)arg1 ;
-(void)setRelativePath:(NSString *)arg1 ;
-(void)setExpirationDate:(id)arg1 ;
-(id)expirationDate;
-(NSData *)metadata;
-(void)setMetadata:(NSData *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setThumbnailData:(NSData *)arg1 ;
-(unsigned)assetVersion;
-(id)fullPath;
-(int)purgeabilityScoreAtUrgency:(int)arg1 ;
-(void)setContentType:(NSString *)arg1 ;
-(NSData *)thumbnailData;
-(id)lastViewedDate;
-(NSString *)contentType;
-(void)setLastViewedDate:(id)arg1 ;
-(void)setAbsolutePath:(NSString *)arg1 ;
-(NSString *)absolutePath;
-(long long)size;
-(NSString *)identifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPriority:(int)arg1 ;
-(int)priority;
-(void)commit;
-(NSString *)displayName;
@end

