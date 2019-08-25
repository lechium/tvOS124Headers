/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <AXMediaUtilities/AXMSourceNode.h>
#import <libobjc.A.dylib/AVPlayerItemLegibleOutputPushDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, AVPlayerItem, AXMVisionAnalysisOptions, NSString;

@interface AXMAVPlayerItemNode : AXMSourceNode <AVPlayerItemLegibleOutputPushDelegate> {

	NSObject*<OS_dispatch_queue> _avkit_queue;
	BOOL _triggeringLegibilityEvents;
	AVPlayerItem* _targetPlayerItem;
	AXMVisionAnalysisOptions* _analysisOptions;

}

@property (assign,nonatomic,__weak) AVPlayerItem * targetPlayerItem;                                             //@synthesize targetPlayerItem=_targetPlayerItem - In the implementation block
@property (nonatomic,retain) AXMVisionAnalysisOptions * analysisOptions;                                         //@synthesize analysisOptions=_analysisOptions - In the implementation block
@property (getter=isTriggeringLegibilityEvents,nonatomic,readonly) BOOL triggeringLegibilityEvents;              //@synthesize triggeringLegibilityEvents=_triggeringLegibilityEvents - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isSupported;
+(BOOL)supportsSecureCoding;
+(id)title;
-(void)outputSequenceWasFlushed:(id)arg1 ;
-(void)legibleOutput:(id)arg1 didOutputAttributedStrings:(id)arg2 nativeSampleBuffers:(id)arg3 forItemTime:(SCD_Struct_AX14)arg4 ;
-(void)nodeInitialize;
-(void)setShouldProcessRemotely:(BOOL)arg1 ;
-(AXMVisionAnalysisOptions *)analysisOptions;
-(id)axmDescription;
-(void)setAnalysisOptions:(AXMVisionAnalysisOptions *)arg1 ;
-(AVPlayerItem *)targetPlayerItem;
-(void)_mainQueue_endAutoTriggerOfLegibilityEvents;
-(void)setTargetPlayerItem:(AVPlayerItem *)arg1 ;
-(void)autoTriggerLegibilityEventsWithAVPlayerItem:(id)arg1 ;
-(void)endAutoTriggerOfLegibilityEvents;
-(BOOL)isTriggeringLegibilityEvents;
@end
