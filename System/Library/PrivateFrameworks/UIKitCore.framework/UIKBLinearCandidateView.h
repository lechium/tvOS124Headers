/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKBHandwritingCandidateView.h>

@class UIKBCandidateCollectionView;

@interface UIKBLinearCandidateView : UIKBHandwritingCandidateView

@property (nonatomic,readonly) UIKBCandidateCollectionView * candidatesCollectionView; 
+(Class)cellClass;
-(void)scrollViewDidChangeContentSize:(id)arg1 ;
-(void)reloadDataByAppendingAtEnd:(BOOL)arg1 ;
-(void)refreshSelectedCandidate;
-(unsigned long long)focusableVariantCount;
@end

