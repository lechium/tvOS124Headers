/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSUUID;


@protocol TIContactManaging <TIKeyboardActivityObserving>
@property (nonatomic,copy,readonly) NSUUID * contactCollectionUUID; 
@required
-(void)unload;
-(/*^block*/id)addContactObserver:(/*^block*/id)arg1;
-(void)removeContactObserver:(/*^block*/id)arg1;
-(void)getOnce:(/*^block*/id)arg1;
-(NSUUID *)contactCollectionUUID;

@end

