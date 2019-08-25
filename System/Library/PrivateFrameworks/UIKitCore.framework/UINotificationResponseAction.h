/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSAction.h>

@class UNNotificationResponse;

@interface UINotificationResponseAction : BSAction {

	UNNotificationResponse* _response;

}

@property (nonatomic,retain,readonly) UNNotificationResponse * response;              //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) BOOL isLocal; 
@property (nonatomic,readonly) BOOL isRemote; 
@property (nonatomic,readonly) BOOL isDefaultAction; 
-(id)initWithXPCDictionary:(id)arg1 ;
-(long long)UIActionType;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(UNNotificationResponse *)response;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(BOOL)isRemote;
-(id)_trigger;
-(id)initWithResponse:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(BOOL)isLocal;
-(BOOL)isDefaultAction;
@end

