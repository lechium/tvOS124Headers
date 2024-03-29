/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSArray, NSNumber, NSString, NSDate, NSDictionary;

@interface ASDJobActivity : NSObject <NSCopying, NSSecureCoding> {

	BOOL _cancelIfDuplicate;
	BOOL _explicitContent;
	BOOL _hasMessagesExtension;
	BOOL _hasWatchApp;
	BOOL _isAutomatic;
	BOOL _isCompatibilityUpdate;
	BOOL _isDeviceBasedVPP;
	BOOL _isGameCenterEnabled;
	BOOL _isInQueue;
	BOOL _isFromStore;
	BOOL _isPurchasedRedownload;
	BOOL _isPendingApproval;
	BOOL _isRestore;
	BOOL _isShared;
	BOOL _isTVTemplate;
	BOOL _isUpdate;
	BOOL _launchProhibited;
	BOOL _softwareIconNeedsShine;
	BOOL _thirtyTwoBitOnly;
	NSData* _appReceiptData;
	NSArray* _assets;
	NSNumber* _artistID;
	NSString* _artistName;
	NSNumber* _betaExternalVersionIdentifier;
	NSString* _bundleID;
	NSString* _bundleVersion;
	NSString* _buyParams;
	NSString* _cancelDownloadURL;
	NSString* _clientID;
	NSString* _collectionName;
	NSNumber* _divertedTrackingID;
	NSNumber* _enableExtensions;
	NSNumber* _externalOrderKey;
	NSString* _genre;
	NSNumber* _genreID;
	NSNumber* _itemID;
	NSString* _kind;
	NSString* _messagesArtworkURL;
	NSDate* _purchaseDate;
	NSNumber* _purchaseID;
	NSString* _ratingLabel;
	NSNumber* _ratingRank;
	NSDate* _releaseDate;
	NSNumber* _storeAccountID;
	NSString* _storeAccountName;
	NSString* _storeCorrelationKey;
	NSDictionary* _storeDownloadInfo;
	NSString* _storeDownloadKey;
	NSString* _storefront;
	NSString* _storeTransactionID;
	NSNumber* _softwareVersionExternalIdentifier;
	NSString* _storeCohort;
	NSString* _thumbnailURL;
	NSString* _title;
	NSString* _variantID;
	NSNumber* _iAdAttribution;
	NSDate* _iAdConversionDate;
	NSDate* _iAdImpressionDate;
	NSNumber* _persistentID;

}

@property (nonatomic,retain) NSNumber * persistentID;                                 //@synthesize persistentID=_persistentID - In the implementation block
@property (nonatomic,copy) NSData * appReceiptData;                                   //@synthesize appReceiptData=_appReceiptData - In the implementation block
@property (nonatomic,copy) NSArray * assets;                                          //@synthesize assets=_assets - In the implementation block
@property (nonatomic,copy) NSNumber * artistID;                                       //@synthesize artistID=_artistID - In the implementation block
@property (nonatomic,copy) NSString * artistName;                                     //@synthesize artistName=_artistName - In the implementation block
@property (nonatomic,copy) NSNumber * betaExternalVersionIdentifier;                  //@synthesize betaExternalVersionIdentifier=_betaExternalVersionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundleID;                                       //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * bundleVersion;                                  //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (nonatomic,copy) NSString * buyParams;                                      //@synthesize buyParams=_buyParams - In the implementation block
@property (nonatomic,copy) NSString * cancelDownloadURL;                              //@synthesize cancelDownloadURL=_cancelDownloadURL - In the implementation block
@property (nonatomic,copy) NSString * clientID;                                       //@synthesize clientID=_clientID - In the implementation block
@property (assign,nonatomic) BOOL cancelIfDuplicate;                                  //@synthesize cancelIfDuplicate=_cancelIfDuplicate - In the implementation block
@property (nonatomic,copy) NSString * collectionName;                                 //@synthesize collectionName=_collectionName - In the implementation block
@property (nonatomic,copy) NSNumber * divertedTrackingID;                             //@synthesize divertedTrackingID=_divertedTrackingID - In the implementation block
@property (nonatomic,copy) NSNumber * enableExtensions;                               //@synthesize enableExtensions=_enableExtensions - In the implementation block
@property (assign,nonatomic) BOOL explicitContent;                                    //@synthesize explicitContent=_explicitContent - In the implementation block
@property (nonatomic,copy) NSNumber * externalOrderKey;                               //@synthesize externalOrderKey=_externalOrderKey - In the implementation block
@property (nonatomic,copy) NSString * genre;                                          //@synthesize genre=_genre - In the implementation block
@property (nonatomic,copy) NSNumber * genreID;                                        //@synthesize genreID=_genreID - In the implementation block
@property (assign,nonatomic) BOOL hasMessagesExtension;                               //@synthesize hasMessagesExtension=_hasMessagesExtension - In the implementation block
@property (assign,nonatomic) BOOL hasWatchApp;                                        //@synthesize hasWatchApp=_hasWatchApp - In the implementation block
@property (assign,nonatomic) BOOL isAutomatic;                                        //@synthesize isAutomatic=_isAutomatic - In the implementation block
@property (assign,nonatomic) BOOL isCompatibilityUpdate;                              //@synthesize isCompatibilityUpdate=_isCompatibilityUpdate - In the implementation block
@property (assign,nonatomic) BOOL isDeviceBasedVPP;                                   //@synthesize isDeviceBasedVPP=_isDeviceBasedVPP - In the implementation block
@property (assign,nonatomic) BOOL isGameCenterEnabled;                                //@synthesize isGameCenterEnabled=_isGameCenterEnabled - In the implementation block
@property (assign,nonatomic) BOOL isInQueue;                                          //@synthesize isInQueue=_isInQueue - In the implementation block
@property (assign,nonatomic) BOOL isFromStore;                                        //@synthesize isFromStore=_isFromStore - In the implementation block
@property (assign,nonatomic) BOOL isPurchasedRedownload;                              //@synthesize isPurchasedRedownload=_isPurchasedRedownload - In the implementation block
@property (assign,nonatomic) BOOL isPendingApproval;                                  //@synthesize isPendingApproval=_isPendingApproval - In the implementation block
@property (assign,nonatomic) BOOL isRestore;                                          //@synthesize isRestore=_isRestore - In the implementation block
@property (assign,nonatomic) BOOL isShared;                                           //@synthesize isShared=_isShared - In the implementation block
@property (assign,nonatomic) BOOL isTVTemplate;                                       //@synthesize isTVTemplate=_isTVTemplate - In the implementation block
@property (assign,nonatomic) BOOL isUpdate;                                           //@synthesize isUpdate=_isUpdate - In the implementation block
@property (nonatomic,copy) NSNumber * itemID;                                         //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,copy) NSString * kind;                                           //@synthesize kind=_kind - In the implementation block
@property (assign,nonatomic) BOOL launchProhibited;                                   //@synthesize launchProhibited=_launchProhibited - In the implementation block
@property (nonatomic,copy) NSString * messagesArtworkURL;                             //@synthesize messagesArtworkURL=_messagesArtworkURL - In the implementation block
@property (nonatomic,copy) NSDate * purchaseDate;                                     //@synthesize purchaseDate=_purchaseDate - In the implementation block
@property (nonatomic,copy) NSNumber * purchaseID;                                     //@synthesize purchaseID=_purchaseID - In the implementation block
@property (nonatomic,copy) NSString * ratingLabel;                                    //@synthesize ratingLabel=_ratingLabel - In the implementation block
@property (nonatomic,copy) NSNumber * ratingRank;                                     //@synthesize ratingRank=_ratingRank - In the implementation block
@property (nonatomic,copy) NSDate * releaseDate;                                      //@synthesize releaseDate=_releaseDate - In the implementation block
@property (nonatomic,copy) NSNumber * storeAccountID;                                 //@synthesize storeAccountID=_storeAccountID - In the implementation block
@property (nonatomic,copy) NSString * storeAccountName;                               //@synthesize storeAccountName=_storeAccountName - In the implementation block
@property (nonatomic,copy) NSString * storeCorrelationKey;                            //@synthesize storeCorrelationKey=_storeCorrelationKey - In the implementation block
@property (nonatomic,copy) NSDictionary * storeDownloadInfo;                          //@synthesize storeDownloadInfo=_storeDownloadInfo - In the implementation block
@property (nonatomic,copy) NSString * storeDownloadKey;                               //@synthesize storeDownloadKey=_storeDownloadKey - In the implementation block
@property (nonatomic,copy) NSString * storefront;                                     //@synthesize storefront=_storefront - In the implementation block
@property (nonatomic,copy) NSString * storeTransactionID;                             //@synthesize storeTransactionID=_storeTransactionID - In the implementation block
@property (assign,nonatomic) BOOL softwareIconNeedsShine;                             //@synthesize softwareIconNeedsShine=_softwareIconNeedsShine - In the implementation block
@property (nonatomic,copy) NSNumber * softwareVersionExternalIdentifier;              //@synthesize softwareVersionExternalIdentifier=_softwareVersionExternalIdentifier - In the implementation block
@property (nonatomic,copy) NSString * storeCohort;                                    //@synthesize storeCohort=_storeCohort - In the implementation block
@property (nonatomic,copy) NSString * thumbnailURL;                                   //@synthesize thumbnailURL=_thumbnailURL - In the implementation block
@property (getter=is32BitOnly) BOOL thirtyTwoBitOnly;                                 //@synthesize thirtyTwoBitOnly=_thirtyTwoBitOnly - In the implementation block
@property (nonatomic,copy) NSString * title;                                          //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * variantID;                                      //@synthesize variantID=_variantID - In the implementation block
@property (nonatomic,copy) NSNumber * iAdAttribution;                                 //@synthesize iAdAttribution=_iAdAttribution - In the implementation block
@property (nonatomic,copy) NSDate * iAdConversionDate;                                //@synthesize iAdConversionDate=_iAdConversionDate - In the implementation block
@property (nonatomic,copy) NSDate * iAdImpressionDate;                                //@synthesize iAdImpressionDate=_iAdImpressionDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)bundleVersion;
-(NSString *)clientID;
-(void)setKind:(NSString *)arg1 ;
-(void)setBundleVersion:(NSString *)arg1 ;
-(void)setArtistName:(NSString *)arg1 ;
-(NSNumber *)betaExternalVersionIdentifier;
-(NSNumber *)enableExtensions;
-(NSString *)messagesArtworkURL;
-(NSString *)cancelDownloadURL;
-(BOOL)hasMessagesExtension;
-(BOOL)isDeviceBasedVPP;
-(BOOL)launchProhibited;
-(void)setBetaExternalVersionIdentifier:(NSNumber *)arg1 ;
-(void)setCancelDownloadURL:(NSString *)arg1 ;
-(void)setEnableExtensions:(NSNumber *)arg1 ;
-(void)setMessagesArtworkURL:(NSString *)arg1 ;
-(void)setHasMessagesExtension:(BOOL)arg1 ;
-(void)setLaunchProhibited:(BOOL)arg1 ;
-(BOOL)is32BitOnly;
-(NSData *)appReceiptData;
-(void)setStoreAccountID:(NSNumber *)arg1 ;
-(BOOL)isGameCenterEnabled;
-(BOOL)explicitContent;
-(void)setExternalOrderKey:(NSNumber *)arg1 ;
-(void)setArtistID:(NSNumber *)arg1 ;
-(void)setCancelIfDuplicate:(BOOL)arg1 ;
-(void)setClientID:(NSString *)arg1 ;
-(void)setGenreID:(NSNumber *)arg1 ;
-(void)setIsAutomatic:(BOOL)arg1 ;
-(void)setIsUpdate:(BOOL)arg1 ;
-(void)setIsDeviceBasedVPP:(BOOL)arg1 ;
-(void)setIsInQueue:(BOOL)arg1 ;
-(void)setIsPurchasedRedownload:(BOOL)arg1 ;
-(void)setIsRestore:(BOOL)arg1 ;
-(void)setStoreAccountName:(NSString *)arg1 ;
-(void)setStoreDownloadKey:(NSString *)arg1 ;
-(void)setStoreTransactionID:(NSString *)arg1 ;
-(void)setSoftwareIconNeedsShine:(BOOL)arg1 ;
-(void)setThumbnailURL:(NSString *)arg1 ;
-(void)setStorefront:(NSString *)arg1 ;
-(void)setSoftwareVersionExternalIdentifier:(NSNumber *)arg1 ;
-(void)setStoreCohort:(NSString *)arg1 ;
-(void)setVariantID:(NSString *)arg1 ;
-(NSString *)storefront;
-(void)setCollectionName:(NSString *)arg1 ;
-(NSString *)collectionName;
-(NSNumber *)ratingRank;
-(void)setRatingRank:(NSNumber *)arg1 ;
-(NSNumber *)artistID;
-(NSNumber *)genreID;
-(BOOL)isPurchasedRedownload;
-(NSString *)genre;
-(void)setExplicitContent:(BOOL)arg1 ;
-(NSNumber *)persistentID;
-(NSString *)artistName;
-(NSDate *)releaseDate;
-(void)setGenre:(NSString *)arg1 ;
-(NSNumber *)storeAccountID;
-(NSNumber *)itemID;
-(void)setReleaseDate:(NSDate *)arg1 ;
-(NSString *)ratingLabel;
-(void)setRatingLabel:(NSString *)arg1 ;
-(BOOL)isRestore;
-(BOOL)isShared;
-(NSDate *)purchaseDate;
-(void)setPurchaseDate:(NSDate *)arg1 ;
-(NSArray *)assets;
-(void)setAssets:(NSArray *)arg1 ;
-(NSNumber *)purchaseID;
-(void)setPurchaseID:(NSNumber *)arg1 ;
-(NSString *)storeDownloadKey;
-(NSString *)variantID;
-(BOOL)isCompatibilityUpdate;
-(void)setIsCompatibilityUpdate:(BOOL)arg1 ;
-(NSNumber *)externalOrderKey;
-(void)setAppReceiptData:(NSData *)arg1 ;
-(BOOL)cancelIfDuplicate;
-(NSNumber *)divertedTrackingID;
-(void)setDivertedTrackingID:(NSNumber *)arg1 ;
-(BOOL)hasWatchApp;
-(void)setHasWatchApp:(BOOL)arg1 ;
-(void)setIsGameCenterEnabled:(BOOL)arg1 ;
-(BOOL)isInQueue;
-(BOOL)isFromStore;
-(void)setIsFromStore:(BOOL)arg1 ;
-(BOOL)isPendingApproval;
-(void)setIsPendingApproval:(BOOL)arg1 ;
-(void)setIsShared:(BOOL)arg1 ;
-(BOOL)isTVTemplate;
-(void)setIsTVTemplate:(BOOL)arg1 ;
-(NSString *)storeAccountName;
-(NSString *)storeCorrelationKey;
-(void)setStoreCorrelationKey:(NSString *)arg1 ;
-(NSDictionary *)storeDownloadInfo;
-(void)setStoreDownloadInfo:(NSDictionary *)arg1 ;
-(NSString *)storeTransactionID;
-(BOOL)softwareIconNeedsShine;
-(NSNumber *)softwareVersionExternalIdentifier;
-(NSString *)storeCohort;
-(NSString *)thumbnailURL;
-(void)setThirtyTwoBitOnly:(BOOL)arg1 ;
-(NSNumber *)iAdAttribution;
-(void)setIAdAttribution:(NSNumber *)arg1 ;
-(NSDate *)iAdConversionDate;
-(void)setIAdConversionDate:(NSDate *)arg1 ;
-(NSDate *)iAdImpressionDate;
-(void)setIAdImpressionDate:(NSDate *)arg1 ;
-(void)setItemID:(NSNumber *)arg1 ;
-(BOOL)isUpdate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)bundleID;
-(BOOL)isValid;
-(BOOL)isAutomatic;
-(NSString *)kind;
-(void)setPersistentID:(NSNumber *)arg1 ;
-(NSString *)buyParams;
-(void)setBuyParams:(NSString *)arg1 ;
@end

