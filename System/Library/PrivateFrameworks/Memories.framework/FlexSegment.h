/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSDictionaryCoding.h>

@class NSString, NSArray, NSDictionary;

@interface FlexSegment : NSObject <NSCopying, NSDictionaryCoding> {

	BOOL _sliceable;
	NSString* _name;
	long long _priority;
	long long _bars;
	long long _beatsPerBar;
	long long _samplesPerBar;
	NSArray* _customBarMarkers;
	long long _sampleRate;
	long long _sampleCount;
	NSDictionary* _transitions;
	NSDictionary* _markers;
	unsigned long long _type;
	unsigned long long _errors;
	NSDictionary* _metadataValues;
	NSString* _namePrefix;
	NSString* _nameStem;
	NSString* _nameIndex;
	NSString* _nameSuffix;

}

@property (nonatomic,copy,readonly) NSString * namePrefix;                 //@synthesize namePrefix=_namePrefix - In the implementation block
@property (nonatomic,copy,readonly) NSString * nameStem;                   //@synthesize nameStem=_nameStem - In the implementation block
@property (nonatomic,copy,readonly) NSString * nameIndex;                  //@synthesize nameIndex=_nameIndex - In the implementation block
@property (nonatomic,copy,readonly) NSString * nameSuffix;                 //@synthesize nameSuffix=_nameSuffix - In the implementation block
@property (nonatomic,copy) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) long long priority;                           //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) long long bars;                               //@synthesize bars=_bars - In the implementation block
@property (assign,nonatomic) long long beatsPerBar;                        //@synthesize beatsPerBar=_beatsPerBar - In the implementation block
@property (assign,nonatomic) long long samplesPerBar;                      //@synthesize samplesPerBar=_samplesPerBar - In the implementation block
@property (nonatomic,retain) NSArray * customBarMarkers;                   //@synthesize customBarMarkers=_customBarMarkers - In the implementation block
@property (assign,nonatomic) long long sampleRate;                         //@synthesize sampleRate=_sampleRate - In the implementation block
@property (assign,nonatomic) long long sampleCount;                        //@synthesize sampleCount=_sampleCount - In the implementation block
@property (assign,nonatomic) BOOL sliceable;                               //@synthesize sliceable=_sliceable - In the implementation block
@property (nonatomic,retain) NSDictionary * transitions;                   //@synthesize transitions=_transitions - In the implementation block
@property (nonatomic,retain) NSDictionary * markers;                       //@synthesize markers=_markers - In the implementation block
@property (assign,nonatomic) unsigned long long type;                      //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long errors;                    //@synthesize errors=_errors - In the implementation block
@property (nonatomic,readonly) NSDictionary * metadataValues;              //@synthesize metadataValues=_metadataValues - In the implementation block
+(long long)crossfadeLengthInSamplesForFromSeg:(id)arg1 toSeg:(id)arg2 fadeOutTimeInMsec:(long long)arg3 fadeInTimeInMsec:(long long)arg4 validFadeOutSamples:(long long*)arg5 validFadeInSamples:(long long*)arg6 ;
+(id)readInfoFromAudioFileAtPath:(id)arg1 ;
+(long long)samplesForTimeInMsec:(long long)arg1 atSampleRate:(long long)arg2 ;
+(id)shortLabelForSegmentType:(unsigned long long)arg1 ;
+(id)longLabelForSegmentType:(unsigned long long)arg1 ;
+(BOOL)canTransitionFromSegment:(id)arg1 toSegment:(id)arg2 fromBarIndex:(long long)arg3 checkIfPrevented:(BOOL)arg4 ;
+(id)segmentsWithType:(unsigned long long)arg1 inSegments:(id)arg2 ;
+(id)segmentsWithType:(unsigned long long)arg1 nameIndex:(id)arg2 nameSuffix:(id)arg3 inSegments:(id)arg4 ;
+(id)segmentWithName:(id)arg1 inSegments:(id)arg2 ;
-(id)initWithFileAtPath:(id)arg1 ;
-(long long)bars;
-(void)setErrors:(unsigned long long)arg1 ;
-(unsigned long long)errors;
-(NSString *)namePrefix;
-(NSString *)nameSuffix;
-(void)setTransitions:(NSDictionary *)arg1 ;
-(NSDictionary *)transitions;
-(id)transitionToSegmentNamed:(id)arg1 fromBarIndex:(long long)arg2 ;
-(long long)barEndPositionForBarIndex:(long long)arg1 ;
-(BOOL)sliceable;
-(void)setBars:(long long)arg1 ;
-(long long)samplesPerBar;
-(void)setSamplesPerBar:(long long)arg1 ;
-(NSArray *)customBarMarkers;
-(void)setCustomBarMarkers:(NSArray *)arg1 ;
-(void)_decodeTypeInfoFromSegmentName;
-(BOOL)relinkAllTransitions;
-(long long)beatsPerBar;
-(NSDictionary *)markers;
-(id)metadataValueForKey:(id)arg1 ;
-(long long)barStartPositionForBarIndex:(long long)arg1 ;
-(NSDictionary *)metadataValues;
-(BOOL)linkedPerBarTransitionsToSegmentNamed:(id)arg1 ;
-(NSString *)nameIndex;
-(void)setLinkedPerBarTransitions:(BOOL)arg1 toSegmentNamed:(id)arg2 ;
-(id)encodeAsDictionary;
-(id)initAsCrossFade:(id)arg1 sampleRate:(long long)arg2 sampleCount:(long long)arg3 beatsPerBar:(long long)arg4 ;
-(long long)barDurationForBarIndex:(long long)arg1 ;
-(void)addOrReplaceTransition:(id)arg1 toSegmentNamed:(id)arg2 fromBarIndex:(long long)arg3 ;
-(void)removeTransitionToSegmentNamed:(id)arg1 fromBarIndex:(long long)arg2 ;
-(BOOL)isPriorityValid;
-(void)setSliceable:(BOOL)arg1 ;
-(void)addMetadataValue:(id)arg1 forKey:(id)arg2 ;
-(void)setBeatsPerBar:(long long)arg1 ;
-(void)setMarkers:(NSDictionary *)arg1 ;
-(NSString *)nameStem;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPriority:(long long)arg1 ;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(long long)priority;
-(void)setSampleRate:(long long)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(long long)sampleCount;
-(void)setSampleCount:(long long)arg1 ;
-(long long)sampleRate;
@end

