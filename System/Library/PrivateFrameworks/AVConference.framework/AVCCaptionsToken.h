/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:14 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface AVCCaptionsToken : NSObject {

	NSString* _text;
	double _confidence;
	BOOL _hasSpaceAfter;

}

@property (nonatomic,readonly) NSString * text;                 //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) double confidence;               //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) BOOL hasSpaceAfter;              //@synthesize hasSpaceAfter=_hasSpaceAfter - In the implementation block
-(id)initWithText:(id)arg1 confidence:(double)arg2 spaceAfter:(BOOL)arg3 ;
-(BOOL)hasSpaceAfter;
-(void)dealloc;
-(id)description;
-(NSString *)text;
-(double)confidence;
@end

