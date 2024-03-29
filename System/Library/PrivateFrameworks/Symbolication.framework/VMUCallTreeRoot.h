/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Symbolication/Symbolication-Structs.h>
#import <Symbolication/VMUCallTreeNode.h>

@protocol VMUStackLogReader;
@class VMUSampler, NSMutableSet, NSMapTable, NSString, NSArray;

@interface VMUCallTreeRoot : VMUCallTreeNode {

	CSTypeRef _symbolicator;
	id<VMUStackLogReader> _stackLogReader;
	VMUSampler* _sampler;
	unsigned long long _options;
	NSMutableSet* _uniqueNodeNames;
	NSMapTable* _addressToSymbolNameMap;
	NSMapTable* _addressToLeafSymbolNameMap;
	NSMapTable* _threadPortToNameMap;
	NSString* _binaryImagesDescription;
	NSArray* _binaryImages;

}

@property (nonatomic,copy) NSString * binaryImagesDescription;              //@synthesize binaryImagesDescription=_binaryImagesDescription - In the implementation block
-(NSString *)binaryImagesDescription;
-(void)setBinaryImagesDescription:(NSString *)arg1 ;
-(void)setStackLogReader:(id)arg1 ;
-(id)initWithSymbolicator:(CSTypeRef)arg1 sampler:(id)arg2 options:(unsigned long long)arg3 ;
-(id)addBacktrace:(id)arg1 ;
-(id)chargeSystemLibrariesToCallersAndKeepBoundaries:(BOOL)arg1 ;
-(id)addBacktrace:(id)arg1 count:(unsigned)arg2 numBytes:(unsigned long long)arg3 ;
-(void)allBacktracesHaveBeenAdded;
-(id)descriptionStringForAddress:(unsigned long long)arg1 atTime:(unsigned long long)arg2 leafFrame:(BOOL)arg3 startOfRecursion:(BOOL)arg4 ;
-(id)addChildWithName:(id)arg1 address:(unsigned long long)arg2 count:(unsigned)arg3 numBytes:(unsigned long long)arg4 toNode:(id)arg5 ;
-(id)addUniqueChildWithName:(id)arg1 address:(unsigned long long)arg2 count:(unsigned)arg3 numBytes:(unsigned long long)arg4 toNode:(id)arg5 ;
-(id)initWithCallGraphFile:(id)arg1 fileHeader:(id*)arg2 topFunctionsList:(id*)arg3 binaryImagesList:(id*)arg4 ;
-(void)dealloc;
@end

