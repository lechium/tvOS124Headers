/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PASampling/PASampling-Structs.h>
@interface PASampleAggregatorOptions : NSObject {

	BOOL _tabDelineateBinaryImageSections;
	BOOL _binaryImagesBeforeStacks;
	BOOL _printSpinSignatureStack;
	BOOL _printTargetHIDEvent;
	BOOL _printHeavyStacks;
	BOOL _displayHeader;
	BOOL _displayBody;
	BOOL _displayFooter;
	BOOL _displayFrameAddresses;
	BOOL _displaySub1MsCpuTime;
	BOOL _displayStateChangesOnIdleThreads;
	BOOL _displayProcessFirstLastTimes;
	BOOL _displayOffsetsFromUnnamedSymbols;
	BOOL _displaySymbolInformation;
	BOOL _displayBinaryImageAddresses;
	BOOL _displayBinaryImagesLackingNameOrPath;
	BOOL _displayRunningThreads;
	BOOL _displayRunnableThreads;
	BOOL _displayBlockedThreads;
	BOOL _displayIdleWorkQueueThreads;
	BOOL _displayAllBinaries;
	BOOL _displayBlockedReasons;
	BOOL _displayBlockedReasonsLackingProcessOwners;
	BOOL _displayAddressesInBlockedReasons;
	BOOL _displayEmptyBootArgs;
	BOOL _displayAllHIDEvents;
	BOOL _aggregateStacksByThread;
	BOOL _aggregateStacksByProcess;

}

@property (assign) BOOL tabDelineateBinaryImageSections;                        //@synthesize tabDelineateBinaryImageSections=_tabDelineateBinaryImageSections - In the implementation block
@property (assign) BOOL binaryImagesBeforeStacks;                               //@synthesize binaryImagesBeforeStacks=_binaryImagesBeforeStacks - In the implementation block
@property (assign) BOOL printSpinSignatureStack;                                //@synthesize printSpinSignatureStack=_printSpinSignatureStack - In the implementation block
@property (assign) BOOL printTargetHIDEvent;                                    //@synthesize printTargetHIDEvent=_printTargetHIDEvent - In the implementation block
@property (assign) BOOL printHeavyStacks;                                       //@synthesize printHeavyStacks=_printHeavyStacks - In the implementation block
@property (assign) BOOL displayHeader;                                          //@synthesize displayHeader=_displayHeader - In the implementation block
@property (assign) BOOL displayBody;                                            //@synthesize displayBody=_displayBody - In the implementation block
@property (assign) BOOL displayFooter;                                          //@synthesize displayFooter=_displayFooter - In the implementation block
@property (assign) BOOL displayFrameAddresses;                                  //@synthesize displayFrameAddresses=_displayFrameAddresses - In the implementation block
@property (assign) BOOL displaySub1MsCpuTime;                                   //@synthesize displaySub1MsCpuTime=_displaySub1MsCpuTime - In the implementation block
@property (assign) BOOL displayStateChangesOnIdleThreads;                       //@synthesize displayStateChangesOnIdleThreads=_displayStateChangesOnIdleThreads - In the implementation block
@property (assign) BOOL displayProcessFirstLastTimes;                           //@synthesize displayProcessFirstLastTimes=_displayProcessFirstLastTimes - In the implementation block
@property (assign) BOOL displayOffsetsFromUnnamedSymbols;                       //@synthesize displayOffsetsFromUnnamedSymbols=_displayOffsetsFromUnnamedSymbols - In the implementation block
@property (assign) BOOL displaySymbolInformation;                               //@synthesize displaySymbolInformation=_displaySymbolInformation - In the implementation block
@property (assign) BOOL displayBinaryImageAddresses;                            //@synthesize displayBinaryImageAddresses=_displayBinaryImageAddresses - In the implementation block
@property (assign) BOOL displayBinaryImagesLackingNameOrPath;                   //@synthesize displayBinaryImagesLackingNameOrPath=_displayBinaryImagesLackingNameOrPath - In the implementation block
@property (assign) BOOL displayRunningThreads;                                  //@synthesize displayRunningThreads=_displayRunningThreads - In the implementation block
@property (assign) BOOL displayRunnableThreads;                                 //@synthesize displayRunnableThreads=_displayRunnableThreads - In the implementation block
@property (assign) BOOL displayBlockedThreads;                                  //@synthesize displayBlockedThreads=_displayBlockedThreads - In the implementation block
@property (assign) BOOL displayIdleWorkQueueThreads;                            //@synthesize displayIdleWorkQueueThreads=_displayIdleWorkQueueThreads - In the implementation block
@property (assign) BOOL displayAllBinaries;                                     //@synthesize displayAllBinaries=_displayAllBinaries - In the implementation block
@property (assign) BOOL displayBlockedReasons;                                  //@synthesize displayBlockedReasons=_displayBlockedReasons - In the implementation block
@property (assign) BOOL displayBlockedReasonsLackingProcessOwners;              //@synthesize displayBlockedReasonsLackingProcessOwners=_displayBlockedReasonsLackingProcessOwners - In the implementation block
@property (assign) BOOL displayAddressesInBlockedReasons;                       //@synthesize displayAddressesInBlockedReasons=_displayAddressesInBlockedReasons - In the implementation block
@property (assign) BOOL displayEmptyBootArgs;                                   //@synthesize displayEmptyBootArgs=_displayEmptyBootArgs - In the implementation block
@property (assign) BOOL displayAllHIDEvents;                                    //@synthesize displayAllHIDEvents=_displayAllHIDEvents - In the implementation block
@property (assign) BOOL aggregateStacksByThread;                                //@synthesize aggregateStacksByThread=_aggregateStacksByThread - In the implementation block
@property (assign) BOOL aggregateStacksByProcess;                               //@synthesize aggregateStacksByProcess=_aggregateStacksByProcess - In the implementation block
@property (assign) BOOL verbose; 
-(BOOL)verbose;
-(void)setVerbose:(BOOL)arg1 ;
-(BOOL)displayStateChangesOnIdleThreads;
-(void)setDisplayStateChangesOnIdleThreads:(BOOL)arg1 ;
-(BOOL)aggregateStacksByProcess;
-(BOOL)printHeavyStacks;
-(BOOL)aggregateStacksByThread;
-(BOOL)displayBlockedThreads;
-(BOOL)displayRunnableThreads;
-(BOOL)displayRunningThreads;
-(BOOL)displayHeader;
-(BOOL)displayBody;
-(BOOL)displayFooter;
-(BOOL)printTargetHIDEvent;
-(BOOL)displayEmptyBootArgs;
-(BOOL)printSpinSignatureStack;
-(BOOL)displayAllBinaries;
-(BOOL)binaryImagesBeforeStacks;
-(BOOL)displaySub1MsCpuTime;
-(BOOL)displayIdleWorkQueueThreads;
-(BOOL)tabDelineateBinaryImageSections;
-(BOOL)displayBinaryImagesLackingNameOrPath;
-(BOOL)displayBinaryImageAddresses;
-(BOOL)displayBlockedReasons;
-(BOOL)displayBlockedReasonsLackingProcessOwners;
-(BOOL)displayAddressesInBlockedReasons;
-(BOOL)displayFrameAddresses;
-(BOOL)displaySymbolInformation;
-(BOOL)displayOffsetsFromUnnamedSymbols;
-(BOOL)displayAllHIDEvents;
-(void)setDisplayHeader:(BOOL)arg1 ;
-(void)setDisplayBody:(BOOL)arg1 ;
-(void)setDisplayFooter:(BOOL)arg1 ;
-(void)setTabDelineateBinaryImageSections:(BOOL)arg1 ;
-(void)setBinaryImagesBeforeStacks:(BOOL)arg1 ;
-(void)setPrintSpinSignatureStack:(BOOL)arg1 ;
-(void)setPrintTargetHIDEvent:(BOOL)arg1 ;
-(void)setPrintHeavyStacks:(BOOL)arg1 ;
-(void)setDisplayFrameAddresses:(BOOL)arg1 ;
-(void)setDisplaySub1MsCpuTime:(BOOL)arg1 ;
-(void)setDisplayProcessFirstLastTimes:(BOOL)arg1 ;
-(void)setDisplayOffsetsFromUnnamedSymbols:(BOOL)arg1 ;
-(void)setDisplaySymbolInformation:(BOOL)arg1 ;
-(void)setDisplayBinaryImageAddresses:(BOOL)arg1 ;
-(void)setDisplayBinaryImagesLackingNameOrPath:(BOOL)arg1 ;
-(void)setDisplayRunningThreads:(BOOL)arg1 ;
-(void)setDisplayRunnableThreads:(BOOL)arg1 ;
-(void)setDisplayBlockedThreads:(BOOL)arg1 ;
-(void)setDisplayIdleWorkQueueThreads:(BOOL)arg1 ;
-(void)setDisplayAllBinaries:(BOOL)arg1 ;
-(void)setDisplayBlockedReasons:(BOOL)arg1 ;
-(void)setDisplayBlockedReasonsLackingProcessOwners:(BOOL)arg1 ;
-(void)setDisplayAddressesInBlockedReasons:(BOOL)arg1 ;
-(void)setDisplayEmptyBootArgs:(BOOL)arg1 ;
-(void)setDisplayAllHIDEvents:(BOOL)arg1 ;
-(void)setAggregateStacksByThread:(BOOL)arg1 ;
-(void)setAggregateStacksByProcess:(BOOL)arg1 ;
-(BOOL)displayProcessFirstLastTimes;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

