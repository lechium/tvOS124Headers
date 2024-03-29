/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:45 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, IMCloudKitSyncState, IMCloudKitSyncStatistics, NSArray;

@interface IMCloudKitSyncProgress : NSObject {

	BOOL _shouldShowProgressBar;
	BOOL _shouldShowIndeterminateProgress;
	BOOL _shouldShowUserActionLabel;
	BOOL _shouldShowUserMessageLabel;
	NSString* _progressLabel;
	double _progressBarValue;
	double _progressBarMax;
	NSString* _userMessageLabel;
	NSString* _actionLabel;
	long long _actionType;
	IMCloudKitSyncState* _syncState;
	IMCloudKitSyncStatistics* _syncStatistics;
	double _broadcastDeferralOverride;

}

@property (assign,nonatomic) BOOL shouldShowProgressBar;                               //@synthesize shouldShowProgressBar=_shouldShowProgressBar - In the implementation block
@property (assign,nonatomic) BOOL shouldShowUserActionLabel;                           //@synthesize shouldShowUserActionLabel=_shouldShowUserActionLabel - In the implementation block
@property (assign,nonatomic) BOOL shouldShowUserMessageLabel;                          //@synthesize shouldShowUserMessageLabel=_shouldShowUserMessageLabel - In the implementation block
@property (assign,nonatomic) BOOL shouldShowIndeterminateProgress;                     //@synthesize shouldShowIndeterminateProgress=_shouldShowIndeterminateProgress - In the implementation block
@property (nonatomic,retain) NSString * progressLabel;                                 //@synthesize progressLabel=_progressLabel - In the implementation block
@property (nonatomic,retain) NSString * userMessageLabel;                              //@synthesize userMessageLabel=_userMessageLabel - In the implementation block
@property (nonatomic,retain) NSString * actionLabel;                                   //@synthesize actionLabel=_actionLabel - In the implementation block
@property (assign,nonatomic) long long actionType;                                     //@synthesize actionType=_actionType - In the implementation block
@property (assign,nonatomic) double progressBarValue;                                  //@synthesize progressBarValue=_progressBarValue - In the implementation block
@property (assign,nonatomic) double progressBarMax;                                    //@synthesize progressBarMax=_progressBarMax - In the implementation block
@property (assign,nonatomic) double broadcastDeferralOverride;                         //@synthesize broadcastDeferralOverride=_broadcastDeferralOverride - In the implementation block
@property (getter=isHidden,nonatomic,readonly) BOOL hidden; 
@property (nonatomic,readonly) double percentComplete; 
@property (nonatomic,readonly) double remainingItems; 
@property (nonatomic,readonly) NSString * percentCompleteString; 
@property (nonatomic,readonly) NSArray * errors; 
@property (nonatomic,readonly) IMCloudKitSyncState * syncState;                        //@synthesize syncState=_syncState - In the implementation block
@property (nonatomic,readonly) IMCloudKitSyncStatistics * syncStatistics;              //@synthesize syncStatistics=_syncStatistics - In the implementation block
-(NSArray *)errors;
-(long long)actionType;
-(void)setActionType:(long long)arg1 ;
-(void)setActionLabel:(NSString *)arg1 ;
-(NSString *)actionLabel;
-(IMCloudKitSyncState *)syncState;
-(double)broadcastDeferralOverride;
-(id)initWithSyncState:(id)arg1 syncStatistics:(id)arg2 ;
-(void)configureSelf;
-(NSString *)percentCompleteString;
-(double)progressBarValue;
-(double)progressBarMax;
-(double)remainingItems;
-(NSString *)userMessageLabel;
-(void)setShouldShowUserMessageLabel:(BOOL)arg1 ;
-(void)setShouldShowProgressBar:(BOOL)arg1 ;
-(void)setUserMessageLabel:(NSString *)arg1 ;
-(BOOL)shouldShowProgressBar;
-(BOOL)shouldShowIndeterminateProgress;
-(void)setShouldShowIndeterminateProgress:(BOOL)arg1 ;
-(void)setProgressBarValue:(double)arg1 ;
-(void)setProgressBarMax:(double)arg1 ;
-(BOOL)shouldShowUserActionLabel;
-(void)setShouldShowUserActionLabel:(BOOL)arg1 ;
-(BOOL)shouldShowUserMessageLabel;
-(IMCloudKitSyncStatistics *)syncStatistics;
-(void)setBroadcastDeferralOverride:(double)arg1 ;
-(void)setProgressLabel:(NSString *)arg1 ;
-(NSString *)progressLabel;
-(id)init;
-(id)description;
-(BOOL)isHidden;
-(double)percentComplete;
@end

