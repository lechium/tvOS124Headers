/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TVCKStorePlaybackProgressDelegate;
@class NSDate, TVCKStoreFavoriteShowInfo, NSSet, NSString;

@interface TVCKStorePlaybackProgress : NSObject {

	BOOL _hasFakeLastWatchedDate;
	BOOL _valid;
	BOOL _assumePurchased;
	unsigned long long _status;
	long long _totalUnitCount;
	long long _unwatchedUnitCount;
	double _fractionWatched;
	NSDate* _dateForSorting;
	NSDate* _lastWatchedDate;
	unsigned long long _itemKind;
	TVCKStoreFavoriteShowInfo* _showInfo;
	id _acquisitionStatusMonitoringToken;
	NSSet* _monitoredItemInfoObjects;
	NSString* _adamID;
	NSSet* _bookmarkKeys;
	id<TVCKStorePlaybackProgressDelegate> _delegate;

}

@property (assign,nonatomic) unsigned long long itemKind;                                        //@synthesize itemKind=_itemKind - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid;                                        //@synthesize valid=_valid - In the implementation block
@property (nonatomic,retain) TVCKStoreFavoriteShowInfo * showInfo;                               //@synthesize showInfo=_showInfo - In the implementation block
@property (nonatomic,retain) id acquisitionStatusMonitoringToken;                                //@synthesize acquisitionStatusMonitoringToken=_acquisitionStatusMonitoringToken - In the implementation block
@property (copy) NSSet * monitoredItemInfoObjects;                                               //@synthesize monitoredItemInfoObjects=_monitoredItemInfoObjects - In the implementation block
@property (nonatomic,copy,readonly) NSString * adamID;                                           //@synthesize adamID=_adamID - In the implementation block
@property (nonatomic,readonly) BOOL assumePurchased;                                             //@synthesize assumePurchased=_assumePurchased - In the implementation block
@property (nonatomic,copy,readonly) NSSet * bookmarkKeys;                                        //@synthesize bookmarkKeys=_bookmarkKeys - In the implementation block
@property (assign,nonatomic,__weak) id<TVCKStorePlaybackProgressDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long status;                                        //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) long long totalUnitCount;                                         //@synthesize totalUnitCount=_totalUnitCount - In the implementation block
@property (nonatomic,readonly) long long unwatchedUnitCount;                                     //@synthesize unwatchedUnitCount=_unwatchedUnitCount - In the implementation block
@property (nonatomic,readonly) double fractionWatched;                                           //@synthesize fractionWatched=_fractionWatched - In the implementation block
@property (nonatomic,readonly) BOOL canMarkAsWatched; 
@property (nonatomic,readonly) BOOL canMarkAsUnwatched; 
@property (nonatomic,copy,readonly) NSDate * dateForSorting;                                     //@synthesize dateForSorting=_dateForSorting - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastWatchedDate;                                    //@synthesize lastWatchedDate=_lastWatchedDate - In the implementation block
@property (nonatomic,readonly) BOOL hasFakeLastWatchedDate;                                      //@synthesize hasFakeLastWatchedDate=_hasFakeLastWatchedDate - In the implementation block
+(BOOL)_hasBeenMarkedAsUnwatchedForLookupItem:(id)arg1 ;
+(BOOL)_shouldDetermineStatusForLookupItem:(id)arg1 withShowInfo:(id)arg2 hasBeenAcquired:(BOOL)arg3 ;
+(BOOL)_hasAcquiredItem:(id)arg1 assumePurchased:(BOOL)arg2 withMonitoredItemInfoObjects:(id)arg3 ;
+(unsigned long long)_statusForLookupItem:(id)arg1 withShowInfo:(id)arg2 hasBeenAcquired:(BOOL)arg3 respectBookmarkPlayCount:(BOOL)arg4 ;
+(unsigned long long)statusForLookupItems:(id)arg1 assumePurchased:(BOOL)arg2 withShowInfo:(id)arg3 monitoredItemInfoObjects:(id)arg4 respectBookmarkPlayCount:(BOOL)arg5 ;
+(double)_durationForLookupItems:(id)arg1 ;
+(double)_elapsedTimeForLookupItems:(id)arg1 ;
+(long long)_unwatchedUnitCountForLookupItems:(id)arg1 assumePurchased:(BOOL)arg2 withShowInfo:(id)arg3 monitoredItemInfoObjects:(id)arg4 respectBookmarkPlayCount:(BOOL)arg5 ;
+(double)fractionWatchedForLookupItems:(id)arg1 assumePurchased:(BOOL)arg2 withShowInfo:(id)arg3 monitoredItemInfoObjects:(id)arg4 respectBookmarkPlayCount:(BOOL)arg5 ;
+(id)_dateForSortingWithLookupItems:(id)arg1 assumePurchased:(BOOL)arg2 withShowInfo:(id)arg3 monitoredItemInfoObjects:(id)arg4 respectBookmarkPlayCount:(BOOL)arg5 ;
+(id)_lastWatchedDateForLookupItems:(id)arg1 getFake:(BOOL*)arg2 ;
-(long long)totalUnitCount;
-(unsigned long long)itemKind;
-(void)setItemKind:(unsigned long long)arg1 ;
-(NSString *)adamID;
-(long long)unwatchedUnitCount;
-(double)fractionWatched;
-(BOOL)canMarkAsWatched;
-(BOOL)canMarkAsUnwatched;
-(NSDate *)dateForSorting;
-(NSDate *)lastWatchedDate;
-(BOOL)hasFakeLastWatchedDate;
-(id)initWithAdamID:(id)arg1 assumePurchased:(BOOL)arg2 respectBookmarkPlayCount:(BOOL)arg3 itemKind:(unsigned long long)arg4 lookupItems:(id)arg5 showInfo:(id)arg6 ;
-(TVCKStoreFavoriteShowInfo *)showInfo;
-(void)setShowInfo:(TVCKStoreFavoriteShowInfo *)arg1 ;
-(id)acquisitionStatusMonitoringToken;
-(void)setAcquisitionStatusMonitoringToken:(id)arg1 ;
-(NSSet *)monitoredItemInfoObjects;
-(void)setMonitoredItemInfoObjects:(NSSet *)arg1 ;
-(BOOL)assumePurchased;
-(NSSet *)bookmarkKeys;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setDelegate:(id<TVCKStorePlaybackProgressDelegate>)arg1 ;
-(id<TVCKStorePlaybackProgressDelegate>)delegate;
-(unsigned long long)status;
-(BOOL)isValid;
@end

