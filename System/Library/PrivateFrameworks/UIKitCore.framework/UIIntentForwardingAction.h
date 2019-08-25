/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSAction.h>

@class INIntent;

@interface UIIntentForwardingAction : BSAction {

	INIntent* _cachedIntent;

}

@property (nonatomic,readonly) INIntent * intent; 
-(long long)UIActionType;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)initWithIntent:(id)arg1 reply:(/*^block*/id)arg2 ;
-(INIntent *)intent;
@end

