/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:29 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotifications/UserNotifications-Structs.h>
#import <UserNotifications/UNNotificationSound.h>

@class NSString, NSNumber, NSDictionary;

@interface UNMutableNotificationSound : UNNotificationSound

@property (nonatomic,copy) NSString * alertTopic; 
@property (nonatomic,copy) NSString * audioCategory; 
@property (nonatomic,copy) NSNumber * audioVolume; 
@property (assign,getter=isCritical,nonatomic) BOOL critical; 
@property (assign,nonatomic) double maximumDuration; 
@property (assign,nonatomic) BOOL shouldIgnoreRingerSwitch; 
@property (assign,nonatomic) BOOL shouldRepeat; 
@property (nonatomic,copy) NSString * toneFileName; 
@property (nonatomic,copy) NSString * toneIdentifier; 
@property (assign,nonatomic) unsigned long long toneMediaLibraryItemIdentifier; 
@property (nonatomic,copy) NSString * vibrationIdentifier; 
@property (nonatomic,copy) NSDictionary * vibrationPattern; 
-(void)setVibrationPattern:(NSDictionary *)arg1 ;
-(void)setAlertTopic:(NSString *)arg1 ;
-(void)setAudioCategory:(NSString *)arg1 ;
-(void)setAudioVolume:(NSNumber *)arg1 ;
-(void)setShouldIgnoreRingerSwitch:(BOOL)arg1 ;
-(void)setToneIdentifier:(NSString *)arg1 ;
-(void)setToneMediaLibraryItemIdentifier:(unsigned long long)arg1 ;
-(void)setVibrationIdentifier:(NSString *)arg1 ;
-(void)setShouldRepeat:(BOOL)arg1 ;
-(void)setCritical:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMaximumDuration:(double)arg1 ;
-(void)setToneFileName:(NSString *)arg1 ;
@end

