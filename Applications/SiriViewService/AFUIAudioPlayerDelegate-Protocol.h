//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFUIAudioPlayer, AceObject, NSURL;

@protocol AFUIAudioPlayerDelegate <NSObject>
- (void)audioPlayerStartPlaying:(AFUIAudioPlayer *)arg1;
- (NSURL *)audioPlayer:(AFUIAudioPlayer *)arg1 audioURLForCommand:(AceObject *)arg2;
- (void)audioPlayer:(AFUIAudioPlayer *)arg1 didFinishPlayback:(AceObject *)arg2;
@end

