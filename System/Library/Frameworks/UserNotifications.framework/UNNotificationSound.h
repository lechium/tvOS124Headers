/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:29 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotifications/UserNotifications-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber, NSDictionary;

@interface UNNotificationSound : NSObject <NSMutableCopying, NSCopying, NSSecureCoding> {

	long long _alertType;
	NSString* _alertTopic;
	NSString* _audioCategory;
	NSNumber* _audioVolume;
	double _maximumDuration;
	BOOL _critical;
	BOOL _shouldIgnoreRingerSwitch;
	BOOL _shouldRepeat;
	NSString* _toneFileName;
	NSString* _toneIdentifier;
	unsigned long long _toneMediaLibraryItemIdentifier;
	NSString* _vibrationIdentifier;
	NSDictionary* _vibrationPattern;

}

@property (nonatomic,readonly) long long alertType;                                            //@synthesize alertType=_alertType - In the implementation block
@property (nonatomic,copy,readonly) NSString * alertTopic;                                     //@synthesize alertTopic=_alertTopic - In the implementation block
@property (nonatomic,copy,readonly) NSString * audioCategory;                                  //@synthesize audioCategory=_audioCategory - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * audioVolume;                                    //@synthesize audioVolume=_audioVolume - In the implementation block
@property (getter=isCritical,nonatomic,readonly) BOOL critical;                                //@synthesize critical=_critical - In the implementation block
@property (nonatomic,readonly) double maximumDuration;                                         //@synthesize maximumDuration=_maximumDuration - In the implementation block
@property (nonatomic,readonly) BOOL shouldIgnoreRingerSwitch;                                  //@synthesize shouldIgnoreRingerSwitch=_shouldIgnoreRingerSwitch - In the implementation block
@property (nonatomic,readonly) BOOL shouldRepeat;                                              //@synthesize shouldRepeat=_shouldRepeat - In the implementation block
@property (nonatomic,copy,readonly) NSString * toneFileName;                                   //@synthesize toneFileName=_toneFileName - In the implementation block
@property (nonatomic,copy,readonly) NSString * toneIdentifier;                                 //@synthesize toneIdentifier=_toneIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long toneMediaLibraryItemIdentifier;              //@synthesize toneMediaLibraryItemIdentifier=_toneMediaLibraryItemIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * vibrationIdentifier;                            //@synthesize vibrationIdentifier=_vibrationIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * vibrationPattern;                           //@synthesize vibrationPattern=_vibrationPattern - In the implementation block
+(id)_soundWithAlertType:(long long)arg1 audioVolume:(id)arg2 critical:(BOOL)arg3 toneFileName:(id)arg4 ;
+(id)defaultCriticalSound;
+(id)defaultCriticalSoundWithAudioVolume:(float)arg1 ;
+(id)criticalSoundNamed:(id)arg1 ;
+(id)criticalSoundNamed:(id)arg1 withAudioVolume:(float)arg2 ;
+(id)soundNamed:(id)arg1 ;
+(id)defaultSound;
+(BOOL)supportsSecureCoding;
+(id)soundWithAlertType:(long long)arg1 ;
-(NSDictionary *)vibrationPattern;
-(long long)alertType;
-(id)_initWithAlertType:(long long)arg1 alertTopic:(id)arg2 audioCategory:(id)arg3 audioVolume:(id)arg4 critical:(BOOL)arg5 maximumDuration:(double)arg6 shouldIgnoreRingerSwitch:(BOOL)arg7 shouldRepeat:(BOOL)arg8 toneFileName:(id)arg9 toneIdentifier:(id)arg10 toneMediaLibraryItemIdentifier:(unsigned long long)arg11 vibrationIdentifier:(id)arg12 vibrationPattern:(id)arg13 ;
-(NSString *)audioCategory;
-(NSNumber *)audioVolume;
-(BOOL)shouldIgnoreRingerSwitch;
-(NSString *)toneIdentifier;
-(unsigned long long)toneMediaLibraryItemIdentifier;
-(NSString *)vibrationIdentifier;
-(BOOL)isCritical;
-(BOOL)shouldRepeat;
-(NSString *)alertTopic;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(double)maximumDuration;
-(NSString *)toneFileName;
@end

