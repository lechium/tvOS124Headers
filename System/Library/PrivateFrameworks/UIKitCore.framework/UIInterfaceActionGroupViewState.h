/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:28 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIInterfaceActionVisualStyleViewState.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface UIInterfaceActionGroupViewState : UIInterfaceActionVisualStyleViewState <NSCopying> {

	BOOL _isVerticalLayoutAxis;
	long long _resolvedPresentationStyle;

}

@property (nonatomic,readonly) BOOL isVerticalLayoutAxis;                        //@synthesize isVerticalLayoutAxis=_isVerticalLayoutAxis - In the implementation block
@property (nonatomic,readonly) long long resolvedPresentationStyle;              //@synthesize resolvedPresentationStyle=_resolvedPresentationStyle - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_collectStateFromGroupViewState:(id)arg1 ;
-(BOOL)_stateEqualToGroupViewState:(id)arg1 ;
-(BOOL)isVerticalLayoutAxis;
-(long long)resolvedPresentationStyle;
-(id)copyWithVerticalLayoutAxis:(BOOL)arg1 ;
-(id)copyWithResolvedPresentationStyle:(long long)arg1 ;
@end

