/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:45 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSLock, NSDictionary, NSData, NSURL, NSString, NSNumber, NSArray, NSDate, SSItemImageCollection;

@interface SSDownloadMetadata : NSObject <SSXPCCoding, NSSecureCoding, NSCopying> {

	NSMutableDictionary* _dictionary;
	long long _keyStyle;
	NSLock* _lock;

}

@property (readonly) NSDictionary * primaryAssetDictionary; 
@property (assign) long long keyStyle; 
@property (retain,readonly) NSData * appReceiptData; 
@property (getter=isAutomaticDownload) BOOL automaticDownload; 
@property (retain) NSURL * cancelDownloadURL; 
@property (retain) NSString * copyright; 
@property (getter=isDeviceBasedVPP) BOOL deviceBasedVPP; 
@property (retain) NSDictionary * dictionary; 
@property (retain) NSString * downloadKey; 
@property (readonly) NSNumber * downloaderAccountIdentifier; 
@property (retain) NSData * epubRightsData; 
@property (retain) NSString * fileExtension; 
@property (copy) NSURL * hlsPlaylistURL; 
@property (getter=hasHDR,readonly) BOOL HDR; 
@property (getter=isHLS,readonly) BOOL HLS; 
@property (getter=isTvTemplate) BOOL tvTemplate; 
@property (retain) NSURL * launchExtrasUrl; 
@property (readonly) NSArray * MD5HashStrings; 
@property (readonly) NSNumber * numberOfBytesToHash; 
@property (copy) NSString * pageProgressionDirection; 
@property (assign) unsigned long long preOrderIdentifier; 
@property (getter=isPremium,readonly) BOOL premium; 
@property (retain) NSURL * primaryAssetURL; 
@property (copy) NSString * preferredAssetFlavor; 
@property (copy) NSURL * transitMapDataURL; 
@property (copy) NSString * redownloadActionParameters; 
@property (getter=isRedownloadDownload) BOOL redownloadDownload; 
@property (retain) NSString * releaseDateString; 
@property (copy) NSNumber * rentalID; 
@property (copy) NSNumber * requestPersistentID; 
@property (copy) id requiredDeviceCapabilities; 
@property (getter=isContentRestricted,readonly) BOOL contentRestricted; 
@property (assign) BOOL shouldDownloadAutomatically; 
@property (retain) NSString * sortArtistName; 
@property (retain) NSString * sortCollectionName; 
@property (retain) NSString * sortTitle; 
@property (retain) NSArray * sinfs; 
@property (getter=isSoftwareKind,readonly) BOOL softwareKind; 
@property (getter=isVideosKind,readonly) BOOL videosKind; 
@property (assign) unsigned long long artistIdentifier; 
@property (copy) NSString * artistName; 
@property (retain) NSURL * fullSizeImageURL; 
@property (retain) NSString * genre; 
@property (assign) unsigned long long genreIdentifier; 
@property (assign) unsigned long long itemIdentifier; 
@property (retain) NSString * kind; 
@property (copy) NSString * longDescription; 
@property (retain) NSDate * releaseDate; 
@property (retain) NSNumber * releaseYear; 
@property (copy) NSString * shortDescription; 
@property (retain) NSString * subtitle; 
@property (retain) NSString * title; 
@property (retain) NSString * transactionIdentifier; 
@property (readonly) SSItemImageCollection * thumbnailImageCollection; 
@property (retain) NSString * thumbnailNewsstandBindingEdge; 
@property (retain) NSString * thumbnailNewsstandBindingType; 
@property (retain) NSURL * thumbnailImageURL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setKind:(NSString *)arg1 ;
-(id)_assetDictionary;
-(NSNumber *)downloaderAccountIdentifier;
-(id)newDownloadProperties;
-(NSURL *)primaryAssetURL;
-(NSURL *)fullSizeImageURL;
-(id)podcastFeedURL;
-(void)setValuesFromDownload:(id)arg1 ;
-(id)initWithItem:(id)arg1 offer:(id)arg2 ;
-(unsigned long long)preOrderIdentifier;
-(void)setPreOrderIdentifier:(unsigned long long)arg1 ;
-(unsigned long long)artistIdentifier;
-(void)setArtistIdentifier:(unsigned long long)arg1 ;
-(id)collectionArtistName;
-(void)setCollectionArtistName:(id)arg1 ;
-(id)collectionIndexInCollectionGroup;
-(void)setCollectionIndexInCollectionGroup:(id)arg1 ;
-(id)episodeIdentifier;
-(void)setEpisodeIdentifier:(id)arg1 ;
-(id)episodeSortIdentifier;
-(void)setEpisodeSortIdentifier:(id)arg1 ;
-(unsigned long long)genreIdentifier;
-(void)setGenreIdentifier:(unsigned long long)arg1 ;
-(id)indexInCollection;
-(void)setIndexInCollection:(id)arg1 ;
-(id)networkName;
-(void)setNetworkName:(id)arg1 ;
-(id)numberOfCollectionsInCollectionGroup;
-(void)setNumberOfCollectionsInCollectionGroup:(id)arg1 ;
-(id)numberOfItemsInCollection;
-(void)setNumberOfItemsInCollection:(id)arg1 ;
-(id)podcastEpisodeGUID;
-(void)setPodcastEpisodeGUID:(id)arg1 ;
-(void)setShortDescription:(NSString *)arg1 ;
-(void)setVideoDetailsDictionary:(id)arg1 ;
-(void)setValue:(id)arg1 forMetadataKey:(id)arg2 ;
-(BOOL)isHighDefinition;
-(void)setHighDefinition:(BOOL)arg1 ;
-(void)setDurationInMilliseconds:(id)arg1 ;
-(void)setFullSizeImageURL:(NSURL *)arg1 ;
-(void)setArtworkIsPrerendered:(BOOL)arg1 ;
-(void)setThumbnailImageURL:(NSURL *)arg1 ;
-(void)setThumbnailNewsstandBindingEdge:(NSString *)arg1 ;
-(void)setThumbnailNewsstandBindingType:(NSString *)arg1 ;
-(void)setReleaseYear:(NSNumber *)arg1 ;
-(void)setPodcastType:(id)arg1 ;
-(void)setPodcastFeedURL:(id)arg1 ;
-(void)setPrimaryAssetURL:(NSURL *)arg1 ;
-(void)setDownloadKey:(NSString *)arg1 ;
-(id)valueForFirstAvailableKey:(id)arg1 ;
-(id)valueForMetadataKey:(id)arg1 ;
-(id)_stringValueForValue:(id)arg1 ;
-(BOOL)isPremium;
-(BOOL)hasHDR;
-(id)_urlValueForValue:(id)arg1 ;
-(id)_dateValueForValue:(id)arg1 ;
-(id)_releaseDateValue;
-(long long)keyStyle;
-(void)_setValueCopy:(id)arg1 forMetadataKey:(id)arg2 ;
-(void)setArtistName:(NSString *)arg1 ;
-(id)_newImageCollectionWithURLString:(id)arg1 ;
-(id)_thumbnailArtworkImage;
-(id)betaExternalVersionIdentifier;
-(id)downloadPermalink;
-(id)documentTargetIdentifier;
-(id)enableExtensions;
-(id)longSeasonDescription;
-(id)messagesArtworkURL;
-(NSString *)pageProgressionDirection;
-(id)podcastType;
-(id)publicationVersion;
-(NSURL *)cancelDownloadURL;
-(NSURL *)thumbnailImageURL;
-(NSString *)redownloadActionParameters;
-(NSString *)thumbnailNewsstandBindingEdge;
-(NSString *)thumbnailNewsstandBindingType;
-(id)viewStoreItemURL;
-(id)variantIdentifier;
-(BOOL)artworkIsPrerendered;
-(BOOL)hasMessagesExtension;
-(BOOL)isDeviceBasedVPP;
-(BOOL)isSample;
-(BOOL)isSharedResource;
-(BOOL)isTvTemplate;
-(BOOL)launchProhibited;
-(BOOL)isMusicShow;
-(unsigned long long)composerIdentifier;
-(id)_valueForFirstAvailableTopLevelKey:(id)arg1 ;
-(id)_newDateFormatter;
-(void)_setValue:(id)arg1 forTopLevelKey:(id)arg2 ;
-(void)setBetaExternalVersionIdentifier:(id)arg1 ;
-(void)setDownloadPermalink:(id)arg1 ;
-(void)setCancelDownloadURL:(NSURL *)arg1 ;
-(void)setDocumentTargetIdentifier:(id)arg1 ;
-(void)setEnableExtensions:(id)arg1 ;
-(void)setLongSeasonDescription:(id)arg1 ;
-(void)setMessagesArtworkURL:(id)arg1 ;
-(void)setPageProgressionDirection:(NSString *)arg1 ;
-(void)setPublicationVersion:(id)arg1 ;
-(void)setRedownloadActionParameters:(NSString *)arg1 ;
-(void)setViewStoreItemURL:(id)arg1 ;
-(void)setVariantIdentifier:(id)arg1 ;
-(void)setComposerIdentifier:(unsigned long long)arg1 ;
-(void)setAutomaticDownload:(BOOL)arg1 ;
-(void)setHasMessagesExtension:(BOOL)arg1 ;
-(void)setDeviceBasedVPP:(BOOL)arg1 ;
-(void)setSample:(BOOL)arg1 ;
-(void)setSharedResource:(BOOL)arg1 ;
-(void)setTvTemplate:(BOOL)arg1 ;
-(void)setLaunchProhibited:(BOOL)arg1 ;
-(void)setPreferredAssetFlavor:(NSString *)arg1 ;
-(SSItemImageCollection *)thumbnailImageCollection;
-(id)initWithKind:(id)arg1 ;
-(BOOL)is32BitOnly;
-(NSURL *)launchExtrasUrl;
-(NSDictionary *)primaryAssetDictionary;
-(unsigned long long)sagaIdentifier;
-(void)setLaunchExtrasUrl:(NSURL *)arg1 ;
-(void)setSagaIdentifier:(unsigned long long)arg1 ;
-(void)setSortArtistName:(NSString *)arg1 ;
-(void)setSortCollectionName:(NSString *)arg1 ;
-(void)setSortTitle:(NSString *)arg1 ;
-(NSString *)sortArtistName;
-(NSString *)sortCollectionName;
-(id)videoDetailsDictionary;
-(NSData *)appReceiptData;
-(NSString *)copyright;
-(id)copyWritableMetadata;
-(NSData *)epubRightsData;
-(BOOL)isAutomaticDownload;
-(BOOL)isContentRestricted;
-(BOOL)isRedownloadDownload;
-(BOOL)isSoftwareKind;
-(BOOL)isVideosKind;
-(NSArray *)MD5HashStrings;
-(NSNumber *)numberOfBytesToHash;
-(NSString *)preferredAssetFlavor;
-(NSString *)releaseDateString;
-(NSNumber *)requestPersistentID;
-(id)requiredDeviceCapabilities;
-(void)setCopyright:(NSString *)arg1 ;
-(void)setEpubRightsData:(NSData *)arg1 ;
-(void)setKeyStyle:(long long)arg1 ;
-(void)setMD5HashStrings:(id)arg1 numberOfBytesToHash:(id)arg2 ;
-(void)setRedownloadDownload:(BOOL)arg1 ;
-(void)setReleaseDateString:(NSString *)arg1 ;
-(void)setRequestPersistentID:(NSNumber *)arg1 ;
-(void)setRequiredDeviceCapabilities:(id)arg1 ;
-(void)setShouldDownloadAutomatically:(BOOL)arg1 ;
-(void)setTransitMapDataURL:(NSURL *)arg1 ;
-(BOOL)shouldDownloadAutomatically;
-(NSURL *)transitMapDataURL;
-(unsigned long long)itemIdentifier;
-(void)setItemIdentifier:(unsigned long long)arg1 ;
-(void)setLongDescription:(NSString *)arg1 ;
-(NSString *)fileExtension;
-(void)setCollectionIdentifier:(unsigned long long)arg1 ;
-(void)setCollectionName:(id)arg1 ;
-(id)collectionName;
-(unsigned long long)collectionIdentifier;
-(void)setCloudIdentifier:(id)arg1 ;
-(void)setFileExtension:(NSString *)arg1 ;
-(id)initWithItem:(id)arg1 ;
-(void)setComposerName:(id)arg1 ;
-(NSString *)genre;
-(void)setExplicitContent:(BOOL)arg1 ;
-(NSString *)artistName;
-(id)composerName;
-(BOOL)isExplicitContent;
-(BOOL)isCompilation;
-(id)movementName;
-(id)movementCount;
-(id)movementNumber;
-(NSDate *)releaseDate;
-(id)showComposer;
-(id)seasonNumber;
-(id)workName;
-(NSString *)downloadKey;
-(void)setCompilation:(BOOL)arg1 ;
-(void)setGenre:(NSString *)arg1 ;
-(BOOL)isRental;
-(NSNumber *)rentalID;
-(NSArray *)sinfs;
-(void)setSinfs:(NSArray *)arg1 ;
-(void)setMusicShow:(BOOL)arg1 ;
-(id)seriesName;
-(void)setReleaseDate:(NSDate *)arg1 ;
-(void)setSeriesName:(id)arg1 ;
-(void)setSeasonNumber:(id)arg1 ;
-(id)downloadPolicy;
-(void)setDownloadPolicy:(id)arg1 ;
-(id)purchaseDate;
-(void)setPurchaseDate:(id)arg1 ;
-(NSString *)longDescription;
-(id)cloudIdentifier;
-(NSString *)transactionIdentifier;
-(void)setTransactionIdentifier:(NSString *)arg1 ;
-(id)durationInMilliseconds;
-(id)init;
-(NSDictionary *)dictionary;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)bundleIdentifier;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(id)initWithDictionary:(id)arg1 ;
-(void)setDictionary:(NSDictionary *)arg1 ;
-(NSString *)shortDescription;
-(NSString *)kind;
-(id)applicationIdentifier;
-(void)setBundleIdentifier:(id)arg1 ;
-(void)setRentalID:(NSNumber *)arg1 ;
-(id)contentRating;
-(NSNumber *)releaseYear;
-(void)setContentRating:(id)arg1 ;
-(void)setRental:(BOOL)arg1 ;
-(NSURL *)hlsPlaylistURL;
-(void)setHlsPlaylistURL:(NSURL *)arg1 ;
-(NSString *)sortTitle;
-(BOOL)isHLS;
@end

