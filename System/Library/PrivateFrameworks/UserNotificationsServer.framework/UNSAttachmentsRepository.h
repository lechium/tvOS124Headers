/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UNSKeyedDictionaryRepository, NSURL;

@interface UNSAttachmentsRepository : NSObject {

	UNSKeyedDictionaryRepository* _referencesRepository;
	NSURL* _directoryURL;

}
+(id)_sha1HashOfFileAtURL:(id)arg1 ;
-(void)performMigration;
-(id)bundleIdentifiersClaimingAttachments;
-(void)ensureIntegrityUsingNotificationIdentifiersForBundleIdentifiers:(id)arg1 ;
-(BOOL)isRepositoryURL:(id)arg1 ;
-(void)removeReferenceToRepositoryURL:(id)arg1 forNotificationIdentifier:(id)arg2 bundleIdentifier:(id)arg3 ;
-(BOOL)isValidRepositoryURL:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(id)moveFileIntoRepositoryFromFileURL:(id)arg1 forNotificationIdentifier:(id)arg2 bundleIdentifier:(id)arg3 ;
-(void)deleteAllFilesForBundleIdentifier:(id)arg1 ;
-(id)allBundleIdentifiers;
-(id)initWithDirectory:(id)arg1 ;
-(id)_attachmentDirectoryForBundleIdentifier:(id)arg1 ;
-(id)_fileURLForDigestString:(id)arg1 extension:(id)arg2 bundleIdentifier:(id)arg3 ;
-(unsigned long long)_addReferencesToRepositoryURL:(id)arg1 forNotificationIdentifier:(id)arg2 bundleIdentifier:(id)arg3 ;
-(unsigned long long)_removeReferencesToRepositoryURL:(id)arg1 forNotificationIdentifier:(id)arg2 bundleIdentifier:(id)arg3 ;
-(void)_removeRepositoryURL:(id)arg1 ;
-(void)_removeAllReferencesForBundleIdentifier:(id)arg1 ;
-(unsigned long long)_transformNotificationIdentifiersForRepositoryURL:(id)arg1 bundleIdentifier:(id)arg2 usingTransformBlock:(/*^block*/id)arg3 ;
-(void)_transformAttachmentsForBundleIdentifier:(id)arg1 usingTransformBlock:(/*^block*/id)arg2 ;
-(void)_performAttachmentReferencesMigration;
-(void)_performAttachmentFilesMigration;
-(void)_performAttachmentReferencesMigrationForBundleIdentifier:(id)arg1 ;
-(id)_claimedRepositoryURLsForBundleIdentifier:(id)arg1 ;
-(id)referencesForBundleIdentifier:(id)arg1 ;
@end

