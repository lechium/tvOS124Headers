/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSAction.h>

@class NSArray;

@interface UISystemNavigationAction : BSAction {

	NSArray* _destinations;

}

@property (nonatomic,readonly) NSArray * destinations;              //@synthesize destinations=_destinations - In the implementation block
-(long long)UIActionType;
-(id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(id)initWithDestinationContexts:(id)arg1 forResponseOnQueue:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(id)_destinationContextForResponseDestination:(unsigned long long)arg1 ;
-(NSArray *)destinations;
-(id)titleForDestination:(unsigned long long)arg1 ;
-(id)bundleIdForDestination:(unsigned long long)arg1 ;
-(id)URLForDestination:(unsigned long long)arg1 ;
-(BOOL)sendResponseForDestination:(unsigned long long)arg1 ;
@end

