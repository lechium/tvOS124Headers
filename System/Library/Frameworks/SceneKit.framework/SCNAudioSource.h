/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:38 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class AVAudioFile, AVAudioPCMBuffer, NSURL, NSString;

@interface SCNAudioSource : NSObject <NSCopying, NSSecureCoding> {

	AVAudioFile* _audioFile;
	AVAudioPCMBuffer* _audioBuffer;
	NSURL* _audioURL;
	NSString* _audioName;
	BOOL _loops;
	BOOL _shouldStream;
	BOOL _loaded;
	BOOL positional;
	float volume;
	float rate;
	float reverbBlend;

}

@property (assign,getter=isPositional,nonatomic) BOOL positional; 
@property (assign,nonatomic) float volume; 
@property (assign,nonatomic) float rate; 
@property (assign,nonatomic) float reverbBlend; 
@property (assign,nonatomic) BOOL loops;                                       //@synthesize loops=_loops - In the implementation block
@property (assign,nonatomic) BOOL shouldStream;                                //@synthesize shouldStream=_shouldStream - In the implementation block
+(id)audioSourceNamed:(id)arg1 ;
+(id)audioSourceWithAVAudioPCMBuffer:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)fileName;
-(id)audioBuffer;
-(void)setRate:(float)arg1 ;
-(float)rate;
-(void)setVolume:(float)arg1 ;
-(long long)renderingAlgorithm;
-(float)reverbBlend;
-(void)setReverbBlend:(float)arg1 ;
-(BOOL)shouldStream;
-(BOOL)loops;
-(id)audioFile;
-(id)audioBufferFormat;
-(id)initWithAVAudioPCMBuffer:(id)arg1 ;
-(void)setPositional:(BOOL)arg1 ;
-(BOOL)isPositional;
-(void)_loadURLWithBundle:(id)arg1 ;
-(id)initWithFileNamed:(id)arg1 inBundle:(id)arg2 ;
-(id)initWithFileNamed:(id)arg1 ;
-(void)loadIfNeeded;
-(void)setLoops:(BOOL)arg1 ;
-(void)setShouldStream:(BOOL)arg1 ;
-(void)_customEncodingOfSCNAudioSource:(id)arg1 ;
-(void)_customDecodingOfSCNAudioSource:(id)arg1 ;
-(float)volume;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)load;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)duration;
-(id)initWithURL:(id)arg1 ;
-(void)_load;
@end

