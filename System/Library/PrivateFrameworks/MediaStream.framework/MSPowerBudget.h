/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MSPowerBudgetDelegate, OS_dispatch_queue;
@class NSString, MSPBTimerContext, NSObject;

@interface MSPowerBudget : NSObject {

	BOOL _workQueueIsFileTransferAllowed;
	BOOL _workQueueIsExternalPowered;
	BOOL _workQueueIsForeground;
	id<MSPowerBudgetDelegate> _delegate;
	double _maxActiveTimeAfterPush;
	double _maxActiveTimeAfterLossOfForeground;
	double _maxActiveTimeAfterGlobalResetSync;
	NSString* _focusAlbumGUID;
	NSString* _focusAssetCollectionGUID;
	NSString* _personID;
	MSPBTimerContext* _workQueuePushTimerContext;
	MSPBTimerContext* _workQueuePostForegroundTimerContext;
	MSPBTimerContext* _workQueueGlobalResetSyncTimerContext;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (assign,setter=workQueueSetFileTransferAllowed:,nonatomic) BOOL workQueueIsFileTransferAllowed;              //@synthesize workQueueIsFileTransferAllowed=_workQueueIsFileTransferAllowed - In the implementation block
@property (assign,setter=workQueueSetExternalPowered:,nonatomic) BOOL workQueueIsExternalPowered;                      //@synthesize workQueueIsExternalPowered=_workQueueIsExternalPowered - In the implementation block
@property (assign,setter=workQueueSetForeground:,nonatomic) BOOL workQueueIsForeground;                                //@synthesize workQueueIsForeground=_workQueueIsForeground - In the implementation block
@property (nonatomic,retain) MSPBTimerContext * workQueuePushTimerContext;                                             //@synthesize workQueuePushTimerContext=_workQueuePushTimerContext - In the implementation block
@property (nonatomic,retain) MSPBTimerContext * workQueuePostForegroundTimerContext;                                   //@synthesize workQueuePostForegroundTimerContext=_workQueuePostForegroundTimerContext - In the implementation block
@property (nonatomic,retain) MSPBTimerContext * workQueueGlobalResetSyncTimerContext;                                  //@synthesize workQueueGlobalResetSyncTimerContext=_workQueueGlobalResetSyncTimerContext - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                                                   //@synthesize workQueue=_workQueue - In the implementation block
@property (assign,nonatomic,__weak) id<MSPowerBudgetDelegate> delegate;                                                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double maxActiveTimeAfterPush;                                                            //@synthesize maxActiveTimeAfterPush=_maxActiveTimeAfterPush - In the implementation block
@property (assign,nonatomic) double maxActiveTimeAfterLossOfForeground;                                                //@synthesize maxActiveTimeAfterLossOfForeground=_maxActiveTimeAfterLossOfForeground - In the implementation block
@property (assign,nonatomic) double maxActiveTimeAfterGlobalResetSync;                                                 //@synthesize maxActiveTimeAfterGlobalResetSync=_maxActiveTimeAfterGlobalResetSync - In the implementation block
@property (nonatomic,retain) NSString * focusAlbumGUID;                                                                //@synthesize focusAlbumGUID=_focusAlbumGUID - In the implementation block
@property (nonatomic,retain) NSString * focusAssetCollectionGUID;                                                      //@synthesize focusAssetCollectionGUID=_focusAssetCollectionGUID - In the implementation block
@property (nonatomic,retain) NSString * personID;                                                                      //@synthesize personID=_personID - In the implementation block
@property (getter=isFileTransferAllowed,nonatomic,readonly) BOOL fileTransferAllowed; 
@property (getter=hasForegroundFocus,nonatomic,readonly) BOOL foregroundFocus; 
@property (nonatomic,readonly) BOOL hasActiveTimers; 
-(void)shutDown;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setPersonID:(NSString *)arg1 ;
-(NSString *)personID;
-(void)setFocusAlbumGUID:(NSString *)arg1 ;
-(void)setFocusAssetCollectionGUID:(NSString *)arg1 ;
-(NSString *)focusAssetCollectionGUID;
-(NSString *)focusAlbumGUID;
-(void)workQueueSetPushTimerDate:(id)arg1 ;
-(void)workQueueSetPostForegroundTimerDate:(id)arg1 ;
-(void)workQueueSetGlobalResetSyncTimerDate:(id)arg1 ;
-(void)workQueueRecomputeFileTransferAllowed;
-(MSPBTimerContext *)workQueuePushTimerContext;
-(void)setWorkQueuePushTimerContext:(MSPBTimerContext *)arg1 ;
-(void)workQueueCommitPersistedValues;
-(MSPBTimerContext *)workQueuePostForegroundTimerContext;
-(void)setWorkQueuePostForegroundTimerContext:(MSPBTimerContext *)arg1 ;
-(MSPBTimerContext *)workQueueGlobalResetSyncTimerContext;
-(void)setWorkQueueGlobalResetSyncTimerContext:(MSPBTimerContext *)arg1 ;
-(BOOL)workQueueIsExternalPowered;
-(BOOL)workQueueIsForeground;
-(void)setIsFileTransferAllowed:(BOOL)arg1 ;
-(double)workQueueMaxActiveTimeAfterPush;
-(void)workQueueSetForeground:(BOOL)arg1 ;
-(double)workQueueMaxActiveTimeAfterLossOfForeground;
-(double)workQueueMaxActiveTimeAfterGlobalResetSync;
-(void)workQueueSetExternalPowered:(BOOL)arg1 ;
-(double)maxActiveTimeAfterPush;
-(void)setMaxActiveTimeAfterPush:(double)arg1 ;
-(double)maxActiveTimeAfterGlobalResetSync;
-(void)setMaxActiveTimeAfterGlobalResetSync:(double)arg1 ;
-(double)maxActiveTimeAfterLossOfForeground;
-(void)setMaxActiveTimeAfterLossOfForeground:(double)arg1 ;
-(BOOL)isFileTransferAllowed;
-(BOOL)hasForegroundFocus;
-(BOOL)hasActiveTimers;
-(void)workQueueSetIsFileTransferAllowed:(BOOL)arg1 ;
-(void)didReceivePushNotification;
-(void)didBeginForegroundFocus;
-(void)didEndForegroundFocus;
-(void)didReceiveGlobalResetSync;
-(void)didBeginExternalPower;
-(void)didEndExternalPower;
-(void)_postForegroundTimerDidExpire:(id)arg1 ;
-(void)_globalResetSyncTimerDidExpire:(id)arg1 ;
-(BOOL)workQueueIsFileTransferAllowed;
-(void)workQueueSetFileTransferAllowed:(BOOL)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(void)setDelegate:(id<MSPowerBudgetDelegate>)arg1 ;
-(id<MSPowerBudgetDelegate>)delegate;
@end

