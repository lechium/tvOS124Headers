/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CHStrokeProvider;
@class CHRecognitionSessionResult, NSArray;

@interface CHStrokeGroupingStrategy : NSObject {

	id<CHStrokeProvider> _strokeProvider;
	CHRecognitionSessionResult* _sessionLastResult;
	NSArray* _locales;

}

@property (nonatomic,retain,readonly) id<CHStrokeProvider> strokeProvider;                         //@synthesize strokeProvider=_strokeProvider - In the implementation block
@property (nonatomic,retain,readonly) CHRecognitionSessionResult * sessionLastResult;              //@synthesize sessionLastResult=_sessionLastResult - In the implementation block
@property (nonatomic,retain,readonly) NSArray * locales;                                           //@synthesize locales=_locales - In the implementation block
+(BOOL)_isPointEnumerationSupportedForStroke:(id)arg1 ;
+(void)enumeratePointsForStroke:(id)arg1 interpolationType:(long long)arg2 resolution:(long long)arg3 usingBlock:(/*^block*/id)arg4 ;
-(NSArray *)locales;
-(id<CHStrokeProvider>)strokeProvider;
-(CHRecognitionSessionResult *)sessionLastResult;
-(void)getFirstStrokeIdentifier:(id*)arg1 lastStrokeIdentifier:(id*)arg2 inGroup:(id)arg3 addingStrokeIdentifiers:(id)arg4 removingStrokeIdentifiers:(id)arg5 ;
-(id)initWithStrokeProvider:(id)arg1 sessionLastResult:(id)arg2 locales:(id)arg3 ;
-(void)getAddedStrokes:(id*)arg1 removedStrokeIdentifiers:(id*)arg2 ;
-(id)strokesForIdentifiers:(id)arg1 ;
-(id)strokeGroupFromGroup:(id)arg1 addingStrokes:(id)arg2 ;
-(id)updatedGroupingResultWithCancellationBlock:(/*^block*/id)arg1 ;
-(id)recognizableDrawingForStrokeGroup:(id)arg1 orderedStrokesIDs:(id*)arg2 ;
-(void)dealloc;
@end

