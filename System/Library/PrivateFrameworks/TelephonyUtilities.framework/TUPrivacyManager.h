/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:07 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TUPrivacyManager : NSObject
+(id)sharedPrivacyManager;
-(void)removeRule:(id)arg1 ;
-(void)addRule:(id)arg1 ;
-(void)_handleBlockListChanged:(id)arg1 ;
-(void)setBlockIncomingCommunication:(BOOL)arg1 forPhoneNumber:(id)arg2 ;
-(void)setBlockIncomingCommunication:(BOOL)arg1 forEmailAddress:(id)arg2 ;
-(BOOL)isIncomingCommunicationBlockedForPhoneNumber:(id)arg1 ;
-(BOOL)isIncomingCommunicationBlockedForEmailAddress:(id)arg1 ;
-(id)allBlacklistRules;
-(id)init;
-(void)dealloc;
@end
