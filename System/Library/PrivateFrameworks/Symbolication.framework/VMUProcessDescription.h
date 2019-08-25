/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Symbolication/Symbolication-Structs.h>
@class NSString, NSDictionary, NSMutableArray, NSArray, NSDate, NSMutableDictionary;

@interface VMUProcessDescription : NSObject {

	unsigned _task;
	int _pid;
	BOOL _taskIsCorpse;
	NSString* _hardwareModel;
	NSString* _processName;
	BOOL _processNameNeedsCorrection;
	NSString* _executablePath;
	CSTypeRef _symbolicator;
	BOOL _executablePathNeedsCorrection;
	unsigned long long _executableLoadAddress;
	int _cpuType;
	BOOL _is64Bit;
	timeval _proc_starttime;
	unsigned long long _physicalFootprint;
	unsigned long long _physicalFootprintPeak;
	NSDictionary* _lsApplicationInformation;
	NSMutableArray* _binaryImages;
	NSArray* _sortedBinaryImages;
	NSDictionary* _binaryImageHints;
	NSArray* _unreadableBinaryImagePaths;
	BOOL _binaryImagePostProcessingComplete;
	NSDictionary* _buildVersionDictionary;
	NSDictionary* _osVersionDictionary;
	mapped_memory_tRef _mappedMemory;
	NSString* _parentProcessName;
	NSString* _parentExecutablePath;
	int _ppid;
	NSDate* _date;
	NSMutableDictionary* _environment;

}

@property (nonatomic,readonly) unsigned long long physicalFootprint;                  //@synthesize physicalFootprint=_physicalFootprint - In the implementation block
@property (nonatomic,readonly) unsigned long long physicalFootprintPeak;              //@synthesize physicalFootprintPeak=_physicalFootprintPeak - In the implementation block
+(id)parseBinaryImagesDescription:(id)arg1 ;
+(CSTypeRef)symbolicatorFromBinaryImagesDescription:(id)arg1 ;
-(BOOL)is64Bit;
-(int)cpuType;
-(id)initWithTask:(unsigned)arg1 getBinariesList:(BOOL)arg2 ;
-(id)binaryImagesDescription;
-(unsigned long long)physicalFootprint;
-(unsigned long long)physicalFootprintPeak;
-(id)valueForEnvVar:(id)arg1 ;
-(BOOL)initFromCorpse;
-(void)initFromLiveProcess;
-(void)_libraryLoaded:(CSTypeRef)arg1 ;
-(void)cleansePathsIncludingBinaryImageList:(BOOL)arg1 ;
-(id)binaryImages;
-(id)processVersionDictionary;
-(id)_sanitizeVersion:(id)arg1 ;
-(void)setCrashReporterInfo;
-(id)_bundleLock;
-(void)clearCrashReporterInfo;
-(id)_rangesOfBinaryImages:(id)arg1 forBacktraces:(id)arg2 ;
-(id)_binaryImagesDescriptionForRanges:(id)arg1 ;
-(id)_buildVersionDictionary;
-(id)_osVersionDictionary;
-(id)_buildInfoDescription;
-(id)processVersion;
-(id)_cpuTypeDescription;
-(id)parentProcessName;
-(id)_systemVersionDescription;
-(id)processDescriptionHeader;
-(id)dateAndVersionDescription;
-(id)processStatisticsDescription;
-(id)initWithPid:(int)arg1 orTask:(unsigned)arg2 ;
-(int)parentPid;
-(id)parentProcessPath;
-(BOOL)isAppleApplication;
-(id)binaryImageDictionaryForAddress:(unsigned long long)arg1 ;
-(id)binaryImagesDescriptionForBacktraces:(id)arg1 ;
-(int)pid;
-(void)dealloc;
-(id)bundleIdentifier;
-(id)description;
-(id)date;
-(id)displayName;
-(unsigned)task;
-(id)executablePath;
-(id)processName;
-(id)processIdentifier;
@end

