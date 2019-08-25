/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Symbolication/Symbolication-Structs.h>
#import <libobjc.A.dylib/VMUStackLogReader.h>

@class VMUVMRegionTracker, NSSet, NSMapTable, NSMutableDictionary, NSString;

@interface VMUStackLogReaderBase : NSObject <VMUStackLogReader> {

	unsigned _task;
	VMUVMRegionTracker* _regionTracker;
	NSMapTable* _addressToSymbolicationMap;
	NSSet* _excludedFrames;
	NSMutableDictionary* _binaryImagePathToIdentifierMap;
	BOOL _usesLiteMode;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned task;                                   //@synthesize task=_task - In the implementation block
@property (readonly) BOOL is64bit; 
@property (readonly) BOOL inspectingLiveProcess; 
@property (readonly) BOOL usesLiteMode;                               //@synthesize usesLiteMode=_usesLiteMode - In the implementation block
@property (readonly) VMUVMRegionTracker * regionTracker;              //@synthesize regionTracker=_regionTracker - In the implementation block
@property (nonatomic,retain) NSSet * excludedFrames;                  //@synthesize excludedFrames=_excludedFrames - In the implementation block
-(id)vmuVMRegionForAddress:(unsigned long long)arg1 ;
-(long long)getFramesForStackID:(unsigned long long)arg1 stackFramesBuffer:(unsigned long long*)arg2 ;
-(long long)getFramesForNode:(unsigned)arg1 inLiteZone:(BOOL)arg2 stackFramesBuffer:(unsigned long long*)arg3 ;
-(id)symbolicatedBacktraceForFrames:(unsigned long long*)arg1 frameCount:(long long)arg2 options:(unsigned long long)arg3 ;
-(BOOL)usesLiteMode;
-(id)binaryImagePathForPCaddress:(unsigned long long)arg1 ;
-(id)identifierForBinaryImagePath:(id)arg1 ;
-(id)functionNameForPCaddress:(unsigned long long)arg1 ;
-(VMURange)functionRangeContainingPCaddress:(unsigned long long)arg1 ;
-(VMURange)binaryImageRangeForPCaddress:(unsigned long long)arg1 ;
-(id)sourceFileNameAndLineNumberForPCaddress:(unsigned long long)arg1 fullPath:(BOOL)arg2 ;
-(int)enumerateRecords:(/*^block*/id)arg1 ;
-(long long)getFramesForAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 inLiteZone:(BOOL)arg3 stackFramesBuffer:(unsigned long long*)arg4 ;
-(id)sourcePathForPCaddress:(unsigned long long)arg1 ;
-(id)sourceFileNameForPCaddress:(unsigned long long)arg1 ;
-(unsigned)sourceLineNumberForPCaddress:(unsigned long long)arg1 ;
-(id)symbolicatedBacktraceForNode:(unsigned)arg1 nodeDetails:(SCD_Struct_VM2)arg2 isLiteZone:(BOOL)arg3 options:(unsigned long long)arg4 ;
-(id)symbolicatedBacktraceForStackID:(unsigned long long)arg1 isLiteZone:(BOOL)arg2 options:(unsigned long long)arg3 ;
-(BOOL)inspectingLiveProcess;
-(VMUVMRegionTracker *)regionTracker;
-(NSSet *)excludedFrames;
-(void)setExcludedFrames:(NSSet *)arg1 ;
-(BOOL)is64bit;
-(unsigned)task;
@end

