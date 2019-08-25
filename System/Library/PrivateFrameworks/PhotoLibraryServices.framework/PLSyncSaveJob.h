/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSURL, NSString, NSDate, NSSet, CLLocation, NSNumber;

@interface PLSyncSaveJob : NSObject {

	BOOL hasVideoComplement;
	BOOL isVideo;
	BOOL isSyncComplete;
	BOOL _cleanupSyncState;
	NSArray* facesInfo;
	NSURL* originalAssetURL;
	NSURL* videoComplementURL;
	NSString* uuid;
	NSDate* creationDate;
	NSDate* modificationDate;
	NSSet* albumURIs;
	CLLocation* location;
	NSNumber* sortToken;
	NSString* originalFileName;
	NSDate* _cleanupBeforeDate;
	/*^block*/id _finishedBlock;

}

@property (nonatomic,retain) NSURL * originalAssetURL; 
@property (assign,nonatomic) BOOL hasVideoComplement; 
@property (nonatomic,retain) NSURL * videoComplementURL; 
@property (assign,nonatomic) BOOL isVideo; 
@property (nonatomic,copy) NSString * uuid; 
@property (nonatomic,copy) NSDate * creationDate; 
@property (nonatomic,copy) NSDate * modificationDate; 
@property (nonatomic,copy) NSSet * albumURIs; 
@property (nonatomic,copy) CLLocation * location; 
@property (nonatomic,retain) NSArray * facesInfo; 
@property (nonatomic,retain) NSNumber * sortToken; 
@property (nonatomic,retain) NSString * originalFileName; 
@property (assign,nonatomic) BOOL isSyncComplete; 
@property (assign,nonatomic) BOOL cleanupSyncState;                    //@synthesize cleanupSyncState=_cleanupSyncState - In the implementation block
@property (nonatomic,copy) NSDate * cleanupBeforeDate;                 //@synthesize cleanupBeforeDate=_cleanupBeforeDate - In the implementation block
@property (nonatomic,copy) id finishedBlock;                           //@synthesize finishedBlock=_finishedBlock - In the implementation block
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSDate *)creationDate;
-(void)setSortToken:(NSNumber *)arg1 ;
-(BOOL)cleanupSyncState;
-(NSDate *)cleanupBeforeDate;
-(BOOL)isSyncComplete;
-(NSURL *)originalAssetURL;
-(BOOL)hasVideoComplement;
-(NSURL *)videoComplementURL;
-(NSNumber *)sortToken;
-(NSString *)originalFileName;
-(void)processFacesWithBlock:(/*^block*/id)arg1 ;
-(NSArray *)facesInfo;
-(NSSet *)albumURIs;
-(id)initFromSerializedData:(id)arg1 ;
-(id)serializedData;
-(void)setOriginalAssetURL:(NSURL *)arg1 ;
-(void)setVideoComplementURL:(NSURL *)arg1 ;
-(void)setAlbumURIs:(NSSet *)arg1 ;
-(void)setFacesInfo:(NSArray *)arg1 ;
-(void)setOriginalFileName:(NSString *)arg1 ;
-(void)setHasVideoComplement:(BOOL)arg1 ;
-(void)setIsVideo:(BOOL)arg1 ;
-(void)setIsSyncComplete:(BOOL)arg1 ;
-(void)setCleanupSyncState:(BOOL)arg1 ;
-(void)setCleanupBeforeDate:(NSDate *)arg1 ;
-(id)finishedBlock;
-(void)setFinishedBlock:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setUuid:(NSString *)arg1 ;
-(NSString *)uuid;
-(BOOL)isVideo;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(void)setModificationDate:(NSDate *)arg1 ;
-(NSDate *)modificationDate;
@end

