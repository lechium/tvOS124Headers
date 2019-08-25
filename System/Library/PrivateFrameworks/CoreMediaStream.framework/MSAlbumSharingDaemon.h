/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:38 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMediaStream/MSDaemon.h>

@protocol MSAlbumSharingDaemonDelegate, OS_dispatch_queue;
@class NSMutableDictionary, MSASDaemonModel, NSObject;

@interface MSAlbumSharingDaemon : MSDaemon {

	BOOL _isRetryingOutstandingActivities;
	int _busyCount;
	id<MSAlbumSharingDaemonDelegate> _delegate;
	NSMutableDictionary* _personIDToStateMachineMap;
	NSMutableDictionary* _personIDToDelegateMap;
	MSASDaemonModel* _daemonModel;
	NSObject*<OS_dispatch_queue> _mapQueue;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableDictionary* _nextUpdateDateByPersonID;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> mapQueue;                         //@synthesize mapQueue=_mapQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                        //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * personIDToStateMachineMap;               //@synthesize personIDToStateMachineMap=_personIDToStateMachineMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * personIDToDelegateMap;                   //@synthesize personIDToDelegateMap=_personIDToDelegateMap - In the implementation block
@property (nonatomic,retain) MSASDaemonModel * daemonModel;                                 //@synthesize daemonModel=_daemonModel - In the implementation block
@property (assign,nonatomic) int busyCount;                                                 //@synthesize busyCount=_busyCount - In the implementation block
@property (assign,nonatomic) BOOL isRetryingOutstandingActivities;                          //@synthesize isRetryingOutstandingActivities=_isRetryingOutstandingActivities - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * nextUpdateDateByPersonID;                //@synthesize nextUpdateDateByPersonID=_nextUpdateDateByPersonID - In the implementation block
@property (assign,nonatomic,__weak) id<MSAlbumSharingDaemonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)shutDown;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)nextActivityDate;
-(BOOL)isInRetryState;
-(void)didReceivePushNotificationForPersonID:(id)arg1 ;
-(void)refreshServerSideConfigurationForPersonID:(id)arg1 ;
-(void)didIdle;
-(void)didUnidle;
-(void)pollForSubscriptionUpdatesTriggeredByPushNotificationForPersonID:(id)arg1 ;
-(void)didReceiveGlobalResetSyncForPersonID:(id)arg1 ;
-(void)shutDownCompletionBlock:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)mapQueue;
-(void)mapQueueShutDownStateMachineInMap:(id)arg1 personIDs:(id)arg2 index:(unsigned long long)arg3 forDestruction:(BOOL)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)shutDownStateMachine:(id)arg1 forDestruction:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(BOOL)hasCommandsInGroupedCommandQueue;
-(BOOL)isRetryingOutstandingActivities;
-(void)setIsRetryingOutstandingActivities:(BOOL)arg1 ;
-(id)boundStateMachineForPersonID:(id)arg1 ;
-(void)updateOwnerReputationScoreForAlbum:(id)arg1 ;
-(id)personIDsListeningToPushNotification;
-(NSMutableDictionary *)nextUpdateDateByPersonID;
-(void)setNextUpdateDateByPersonID:(NSMutableDictionary *)arg1 ;
-(void)setNextActivityDate:(id)arg1 forPersonID:(id)arg2 ;
-(id)existingStateMachineForPersonID:(id)arg1 ;
-(void)addAlbum:(id)arg1 ;
-(void)deleteAlbumWithGUID:(id)arg1 ;
-(void)refreshResetSync:(BOOL)arg1 personID:(id)arg2 info:(id)arg3 ;
-(id)modelForPersonID:(id)arg1 ;
-(void)refreshContentOfAlbumWithGUID:(id)arg1 resetSync:(BOOL)arg2 personID:(id)arg3 info:(id)arg4 ;
-(void)refreshAccessControlListOfAlbumWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3 ;
-(void)refreshCommentsForAssetCollectionWithGUID:(id)arg1 resetSync:(BOOL)arg2 personID:(id)arg3 info:(id)arg4 ;
-(void)addAlbum:(id)arg1 personID:(id)arg2 info:(id)arg3 ;
-(void)modifyAlbumMetadata:(id)arg1 personID:(id)arg2 info:(id)arg3 ;
-(void)deleteAlbumWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3 ;
-(void)markAlbumGUIDAsViewed:(id)arg1 personID:(id)arg2 info:(id)arg3 ;
-(void)subscribeToAlbumWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3 ;
-(void)unsubscribeFromAlbumWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3 ;
-(void)acceptInvitationWithToken:(id)arg1 personID:(id)arg2 info:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)acceptInvitationWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3 ;
-(void)rejectInvitationWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3 ;
-(void)addAccessControlEntries:(id)arg1 toAlbumWithGUID:(id)arg2 personID:(id)arg3 info:(id)arg4 ;
-(void)removeAccessControlEntryWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3 ;
-(void)setPublicAccessEnabled:(BOOL)arg1 forAlbumWithGUID:(id)arg2 personID:(id)arg3 info:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)setMultipleContributorsEnabled:(BOOL)arg1 forAlbumWithGUID:(id)arg2 personID:(id)arg3 info:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)addAssetCollections:(id)arg1 toAlbumWithGUID:(id)arg2 personID:(id)arg3 info:(id)arg4 ;
-(void)deleteAssetCollectionWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3 ;
-(void)markCommentsForAssetCollectionWithGUID:(id)arg1 asViewedWithLastViewedDate:(id)arg2 personID:(id)arg3 info:(id)arg4 ;
-(void)addComments:(id)arg1 toAssetCollectionWithGUID:(id)arg2 personID:(id)arg3 info:(id)arg4 ;
-(void)deleteCommentWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3 ;
-(void)forgetEverythingAboutPersonID:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)didDestroyStateMachineForPersonID:(id)arg1 ;
-(void)willDestroyStateMachineForPersonID:(id)arg1 ;
-(void)_postModelShutdownForPersonID:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)workQueueForgetEverythingAboutPersonID:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)workQueueForgetEverythingAboutPersonIDs:(id)arg1 index:(unsigned long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(MSASDaemonModel *)daemonModel;
-(id)_delegateForPersonID:(id)arg1 ;
-(void)didCreateStateMachineForPersonID:(id)arg1 ;
-(void)setFocusAlbumGUID:(id)arg1 forPersonID:(id)arg2 ;
-(void)didReceiveAuthFailureForPersonID:(id)arg1 ;
-(void)didReceiveAuthSuccessForPersonID:(id)arg1 ;
-(BOOL)isWaitingForAuth;
-(void)stopAssetDownloadsForPersonID:(id)arg1 ;
-(void)cancelActivitiesForPersonID:(id)arg1 ;
-(void)sendServerSideConfigurationDidChangeNotificationForPersonID:(id)arg1 ;
-(int)assetsInDownloadQueueCountForPersonID:(id)arg1 ;
-(id)existingModelForPersonID:(id)arg1 ;
-(void)refreshContentOfAlbumWithGUID:(id)arg1 resetSync:(BOOL)arg2 personID:(id)arg3 ;
-(void)refreshAccessControlListOfAlbumWithGUID:(id)arg1 personID:(id)arg2 ;
-(void)refreshCommentsForAssetCollectionWithGUID:(id)arg1 resetSync:(BOOL)arg2 personID:(id)arg3 ;
-(void)markAlbumGUIDAsViewed:(id)arg1 personID:(id)arg2 ;
-(void)markAsSpamAlbumWithGUID:(id)arg1 personID:(id)arg2 ;
-(void)markAsSpamInvitationWithGUID:(id)arg1 personID:(id)arg2 ;
-(void)markAsSpamInvitationWithToken:(id)arg1 personID:(id)arg2 ;
-(void)acceptInvitationWithGUID:(id)arg1 personID:(id)arg2 ;
-(void)rejectInvitationWithGUID:(id)arg1 personID:(id)arg2 ;
-(void)deleteAssetCollectionWithGUID:(id)arg1 personID:(id)arg2 ;
-(void)retrieveAssetsInAssetCollectionsWithGUIDs:(id)arg1 assetTypeFlags:(int)arg2 personID:(id)arg3 ;
-(void)forgetEverythingCompletionBlock:(/*^block*/id)arg1 ;
-(id)persistentObjectForKey:(id)arg1 personID:(id)arg2 ;
-(void)setPersistentObject:(id)arg1 forKey:(id)arg2 personID:(id)arg3 ;
-(void)didReceiveTooManyAlbumsError:(id)arg1 personID:(id)arg2 ;
-(void)didReceiveTooManyPhotosError:(id)arg1 forAlbum:(id)arg2 personID:(id)arg3 ;
-(void)didReceiveTooManySubscriptionsError:(id)arg1 personID:(id)arg2 ;
-(void)didReceiveTooManyCommentsError:(id)arg1 forAssetCollection:(id)arg2 inAlbum:(id)arg3 personID:(id)arg4 ;
-(void)didReceiveCommentTooLongError:(id)arg1 forAssetCollection:(id)arg2 inAlbum:(id)arg3 personID:(id)arg4 ;
-(NSMutableDictionary *)personIDToStateMachineMap;
-(void)setPersonIDToStateMachineMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)personIDToDelegateMap;
-(void)setPersonIDToDelegateMap:(NSMutableDictionary *)arg1 ;
-(void)setDaemonModel:(MSASDaemonModel *)arg1 ;
-(int)busyCount;
-(void)setBusyCount:(int)arg1 ;
-(void)setMapQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)serverSideConfigurationForPersonID:(id)arg1 ;
-(void)refreshResetSync:(BOOL)arg1 personID:(id)arg2 ;
-(void)retryOutstandingActivitiesForPersonID:(id)arg1 ;
-(void)retryOutstandingActivities;
-(void)forgetEverythingAboutPersonID:(id)arg1 ;
-(void)addAlbum:(id)arg1 personID:(id)arg2 ;
-(void)deleteAlbumWithGUID:(id)arg1 personID:(id)arg2 ;
-(void)modifyAlbumMetadata:(id)arg1 personID:(id)arg2 ;
-(void)setPublicAccessEnabled:(BOOL)arg1 forAlbumWithGUID:(id)arg2 personID:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)setMultipleContributorsEnabled:(BOOL)arg1 forAlbumWithGUID:(id)arg2 personID:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)addAssetCollections:(id)arg1 toAlbumWithGUID:(id)arg2 personID:(id)arg3 ;
-(void)deleteAssetCollectionsWithGUIDs:(id)arg1 personID:(id)arg2 ;
-(void)removeAccessControlEntryWithGUID:(id)arg1 personID:(id)arg2 ;
-(void)unsubscribeFromAlbumWithGUID:(id)arg1 personID:(id)arg2 ;
-(void)acceptInvitationWithToken:(id)arg1 personID:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)subscribeToAlbumWithGUID:(id)arg1 personID:(id)arg2 ;
-(void)addComments:(id)arg1 toAssetCollectionWithGUID:(id)arg2 personID:(id)arg3 ;
-(void)deleteCommentWithGUID:(id)arg1 personID:(id)arg2 ;
-(void)markAlbumGUIDAsViewed:(id)arg1 personID:(id)arg2 moveLastViewedAssetCollectionMarker:(BOOL)arg3 info:(id)arg4 ;
-(void)markCommentsForAssetCollectionWithGUID:(id)arg1 asViewedWithLastViewedDate:(id)arg2 personID:(id)arg3 ;
-(void)setFocusAssetCollectionGUID:(id)arg1 forPersonID:(id)arg2 ;
-(void)retrieveAssets:(id)arg1 inAlbumWithGUID:(id)arg2 personID:(id)arg3 ;
-(void)addAccessControlEntries:(id)arg1 toAlbumWithGUID:(id)arg2 personID:(id)arg3 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<MSAlbumSharingDaemonDelegate>)arg1 ;
-(id<MSAlbumSharingDaemonDelegate>)delegate;
-(void)start;
@end
