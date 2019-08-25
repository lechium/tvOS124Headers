/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:14 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/VCVideoRuleCollectionsMoments.h>

@protocol VCHardwareSettingsEmbeddedProtocol;
@interface VCVideoRuleCollectionsMomentsEmbeded : VCVideoRuleCollectionsMoments {

	id<VCHardwareSettingsEmbeddedProtocol> _hardwareSettings;

}
+(id)sharedInstance;
-(int)getMomentsCapabilities;
-(id)initWithHardwareSettings:(id)arg1 ;
-(int)getMomentsCapabilitiesForSupportedDevices;
@end

