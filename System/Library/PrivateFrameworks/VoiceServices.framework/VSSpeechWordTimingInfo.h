/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:22 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceServices/VoiceServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface VSSpeechWordTimingInfo : NSObject <NSSecureCoding> {

	double _startTime;
	NSRange _textRange;

}

@property (assign,nonatomic) double startTime;               //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) NSRange textRange;              //@synthesize textRange=_textRange - In the implementation block
+(unsigned long long)extraBytesFromUTF8ToUTF16With:(const char*)arg1 totalLength:(unsigned long long)arg2 begin:(unsigned long long)arg3 end:(unsigned long long)arg4 ;
+(id)wordTimingInfoFrom:(id)arg1 timestamps:(id)arg2 ;
+(id)utf16TimingInfoWithUTF8Range:(id)arg1 withText:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(NSRange)textRange;
-(void)setTextRange:(NSRange)arg1 ;
@end

