/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface MiroMetadata : NSObject {

	NSArray* _allRanges;
	NSArray* _loudnessRanges;
	NSString* _identifier;

}

@property (retain) NSArray * allRanges;                        //@synthesize allRanges=_allRanges - In the implementation block
@property (readonly) NSArray * loudnessRanges;                 //@synthesize loudnessRanges=_loudnessRanges - In the implementation block
@property (nonatomic,copy) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
-(void)setRanges:(id)arg1 ;
-(NSArray *)allRanges;
-(void)removeRangesOfType:(unsigned long long)arg1 ;
-(void)addRanges:(id)arg1 ;
-(void)setAllRanges:(NSArray *)arg1 ;
-(NSArray *)loudnessRanges;
-(void)getMetadata;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
@end

