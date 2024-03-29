/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:53 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIKBRTKeyboardTouchObserver.h>

@class UIView, _UIKBRTFingerDetectionView, NSMapTable, NSMutableDictionary, _UIKBRTFingerInfo;

@interface _UIKBRTFingerDetection : _UIKBRTKeyboardTouchObserver {

	UIView* _feedbackParentView;
	_UIKBRTFingerDetectionView* _feedbackView;
	NSMapTable* _fingerFeedbackViewMap;
	NSMutableDictionary* _touches;
	_UIKBRTFingerInfo* _fakeLeftIndex;
	_UIKBRTFingerInfo* _fakeRightIndex;

}

@property (assign,nonatomic) UIView * feedbackParentView;                            //@synthesize feedbackParentView=_feedbackParentView - In the implementation block
@property (nonatomic,retain) _UIKBRTFingerDetectionView * feedbackView;              //@synthesize feedbackView=_feedbackView - In the implementation block
@property (nonatomic,retain) NSMapTable * fingerFeedbackViewMap;                     //@synthesize fingerFeedbackViewMap=_fingerFeedbackViewMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * touches;                          //@synthesize touches=_touches - In the implementation block
@property (nonatomic,retain) _UIKBRTFingerInfo * fakeLeftIndex;                      //@synthesize fakeLeftIndex=_fakeLeftIndex - In the implementation block
@property (nonatomic,retain) _UIKBRTFingerInfo * fakeRightIndex;                     //@synthesize fakeRightIndex=_fakeRightIndex - In the implementation block
-(id)init;
-(void)dealloc;
-(void)reset;
-(void)setTouches:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)touches;
-(void)removeTouchWithIdentifier:(id)arg1 touchCancelled:(BOOL)arg2 ;
-(void)addTouchLocation:(CGPoint)arg1 withRadius:(double)arg2 withTouchTime:(double)arg3 withIdentifier:(id)arg4 ;
-(void)moveTouchWithIdentifier:(id)arg1 toLocation:(CGPoint)arg2 withRadius:(double)arg3 atTouchTime:(double)arg4 ;
-(void)updateWithFCenter:(CGPoint)arg1 jCenter:(CGPoint)arg2 keySize:(CGSize)arg3 rowOffsets:(id)arg4 homeRowOffsetIndex:(int)arg5 ;
-(id)initWithParentView:(id)arg1 ;
-(id)fingerIdsRelatedToTouchWithIdentifier:(id)arg1 sinceTimestamp:(double)arg2 includeThumbs:(BOOL)arg3 ;
-(unsigned long long)fingerIdForTouchWithIdentifier:(id)arg1 ;
-(id)touchIdentifiersForFingerId:(unsigned long long)arg1 ;
-(CGPoint)touchLocationForFingerId:(unsigned long long)arg1 ;
-(UIView *)feedbackParentView;
-(void)setFeedbackParentView:(UIView *)arg1 ;
-(void)_updateTouchInfoForFingerID:(unsigned long long)arg1 ;
-(void)_updateFingerFeedback;
-(BOOL)_linkTouchesInArray:(id)arg1 withIndexes:(id)arg2 opposingHandIndexes:(id)arg3 unassignedIndexes:(id)arg4 thumb:(id)arg5 ;
-(void)_updateTouchInfoFromOutsideInWithArray:(id)arg1 indexes:(id)arg2 newIdentityDict:(id)arg3 fakeIndex:(id)arg4 ;
-(void)_updateFingerFeedback:(id)arg1 ;
-(_UIKBRTFingerDetectionView *)feedbackView;
-(void)setFeedbackView:(_UIKBRTFingerDetectionView *)arg1 ;
-(NSMapTable *)fingerFeedbackViewMap;
-(void)setFingerFeedbackViewMap:(NSMapTable *)arg1 ;
-(_UIKBRTFingerInfo *)fakeLeftIndex;
-(void)setFakeLeftIndex:(_UIKBRTFingerInfo *)arg1 ;
-(_UIKBRTFingerInfo *)fakeRightIndex;
-(void)setFakeRightIndex:(_UIKBRTFingerInfo *)arg1 ;
@end

