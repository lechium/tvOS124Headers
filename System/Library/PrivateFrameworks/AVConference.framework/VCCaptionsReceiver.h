/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:15 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VCCaptionsTranscription;

@interface VCCaptionsReceiver : NSObject {

	unsigned _captionsLastUtteranceNumber;
	unsigned _captionsLastUpdateNumber;
	id _delegate;
	VCCaptionsTranscription* _currentTranscription;

}

@property (readonly) id<VCCaptionsReceiverDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) VCCaptionsTranscription * currentTranscription;              //@synthesize currentTranscription=_currentTranscription - In the implementation block
-(void)processCaptionsData:(id)arg1 ;
-(void)setCurrentTranscription:(VCCaptionsTranscription *)arg1 ;
-(VCCaptionsTranscription *)currentTranscription;
-(void)dealloc;
-(id<VCCaptionsReceiverDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
@end

