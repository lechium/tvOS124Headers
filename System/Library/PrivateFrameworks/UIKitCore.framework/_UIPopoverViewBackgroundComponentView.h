/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:15 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class NSMutableArray, NSString;

@interface _UIPopoverViewBackgroundComponentView : UIView {

	NSMutableArray* _replicants;
	NSString* _directionSelector;

}

@property (nonatomic,copy) NSString * directionSelector;              //@synthesize directionSelector=_directionSelector - In the implementation block
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(id)_newReplicant;
-(void)setDirectionSelector:(NSString *)arg1 ;
-(id)replicate;
-(void)updateReplicants;
-(NSString *)directionSelector;
@end

