/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:21 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKAction.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/OKActionMicrophoneNoiseExports.h>

@interface OKActionMicrophoneNoise : OKAction <NSSecureCoding, OKActionMicrophoneNoiseExports> {

	float _meanAudioLevel;

}

@property (nonatomic,readonly) float meanAudioLevel;              //@synthesize meanAudioLevel=_meanAudioLevel - In the implementation block
+(void)setupJavascriptContext:(id)arg1 ;
+(id)microphoneNoiseActionWithState:(unsigned long long)arg1 meanAudioLevel:(float)arg2 context:(id)arg3 ;
+(id)microphoneNoiseActionWithState:(unsigned long long)arg1 location:(CGPoint)arg2 touchCount:(unsigned long long)arg3 meanAudioLevel:(float)arg4 context:(id)arg5 ;
+(BOOL)supportsSecureCoding;
-(float)meanAudioLevel;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

