/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MROutputContextDataSource.h>

@class NSString, NSMutableArray;

@interface MRExternalOutputContextDataSource : MROutputContextDataSource {

	NSString* _uniqueIdentifier;
	NSMutableArray* _outputDevices;
	float _masterVolume;
	unsigned _masterVolumeControlCapabilities;

}
-(unsigned)volumeControlCapabilities;
-(void)_reevaluateMasterVolumeControlCapabilities;
-(void)_reevaluateMasterVolume;
-(void)removeOutputDevices:(id)arg1 ;
-(float)_calculateMasterVolume;
-(unsigned)_calculateMasterVolumeCapabilities;
-(void)updateOutputDevices:(id)arg1 ;
-(void)removeAllOutputDevices;
-(void)updateVolume:(float)arg1 outputDeviceUID:(id)arg2 ;
-(void)updateVolumeControlCapabilities:(unsigned)arg1 outputDeviceUID:(id)arg2 ;
-(id)outputDevices;
-(id)initWithUniqueIdentifier:(id)arg1 ;
-(float)volume;
-(id)uniqueIdentifier;
@end

