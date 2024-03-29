/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, PLGeoLocationShifterDelegate;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSObject, NSMutableOrderedSet, NSMutableSet, PLGeoLocationShiftResult, GEOLocationShifter;

@interface PLGeoLocationShifter : NSObject {

	NSObject*<OS_dispatch_queue> _locationShiftQueue;
	NSMutableOrderedSet* _assetsToShift;
	BOOL _shiftOperationInProgress;
	BOOL _isRunning;
	NSMutableSet* _inFlightRequestIDs;
	PLGeoLocationShiftResult* _currentBatchResult;
	GEOLocationShifter* _locationShifter;
	id<PLGeoLocationShifterDelegate> _delegate;

}

@property (assign,nonatomic) id<PLGeoLocationShifterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL hasWork; 
+(BOOL)isLocationShiftRequiredForCoordinate:(CLLocationCoordinate2D)arg1 ;
+(unsigned)locationShiftFunctionVersion;
-(BOOL)hasWork;
-(void)enqueueAssetIDs:(id)arg1 ;
-(id)shifterStatus;
-(void)_updateShiftOperationStatus;
-(void)_runShiftOperation;
-(void)_beginBatch:(id)arg1 ;
-(void)_processShiftRequestWithAssetID:(id)arg1 coordinate:(id)arg2 ;
-(void)_shiftCompletedForAssetID:(id)arg1 withSuccess:(BOOL)arg2 needsRetry:(BOOL)arg3 shiftedCoordinate:(CGPoint)arg4 ;
-(void)_completeBatchIfReady;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<PLGeoLocationShifterDelegate>)arg1 ;
-(id<PLGeoLocationShifterDelegate>)delegate;
-(void)reset;
-(void)stop;
-(void)start;
@end

