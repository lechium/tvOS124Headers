/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:55 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MPUTransportControl : NSObject <NSCopying> {

	unsigned long long _numberOfAvailableSlotsInContainer;
	BOOL _enabled;
	BOOL _highlighted;
	BOOL _supportsLongPress;
	BOOL _acceptsTapsWhenDisabled;
	int _group;
	long long _type;

}

@property (nonatomic,readonly) long long type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) int group;                                        //@synthesize group=_group - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                      //@synthesize enabled=_enabled - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,nonatomic) BOOL supportsLongPress;                             //@synthesize supportsLongPress=_supportsLongPress - In the implementation block
@property (assign,nonatomic) BOOL acceptsTapsWhenDisabled;                       //@synthesize acceptsTapsWhenDisabled=_acceptsTapsWhenDisabled - In the implementation block
+(id)_transportControlsForMediaRemoteCommands:(CFArrayRef)arg1 withAllowedTransportControlTypes:(id)arg2 allowsDisabledControls:(BOOL)arg3 ;
+(void)_addTransportControl:(id)arg1 toTransportControlsArray:(id)arg2 ;
+(id)_descriptionForTransportControlType:(long long)arg1 ;
+(id)_descriptionForTransportControlGroup:(int)arg1 ;
+(int)_groupForTransportControlType:(long long)arg1 ;
+(BOOL)_transportControlAcceptsTapsWhenDisabledForType:(long long)arg1 ;
+(BOOL)_transportControlSupportsHighlightingForCommand:(unsigned)arg1 ;
+(long long)_transportControlTypeForCommand:(unsigned)arg1 ;
+(id)_createTransportControlForType:(long long)arg1 withMediaRemoteCommand:(MRMediaRemoteCommandInfoRef)arg2 ;
+(BOOL)_hasUnderlyingCommandForTransportControlType:(long long)arg1 ;
+(id)availableTransportControlsForMediaRemoteCommands:(CFArrayRef)arg1 controlsCount:(unsigned long long)arg2 ;
+(id)transportControlsForControlTypes:(id)arg1 withMediaRemoteCommands:(CFArrayRef)arg2 ;
+(id)transportControlWithType:(long long)arg1 group:(int)arg2 ;
-(BOOL)supportsLongPress;
-(long long)_compare:(id)arg1 ordering:(long long)arg2 ;
-(id)initWithType:(long long)arg1 group:(int)arg2 ;
-(BOOL)acceptsTapsWhenDisabled;
-(void)setSupportsLongPress:(BOOL)arg1 ;
-(void)setAcceptsTapsWhenDisabled:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(int)group;
-(long long)_priority;
@end

