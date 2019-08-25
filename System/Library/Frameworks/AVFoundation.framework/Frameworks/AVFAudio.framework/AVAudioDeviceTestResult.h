/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface AVAudioDeviceTestResult : NSObject <NSSecureCoding> {

	long long _inputID;
	long long _outputID;
	NSData* _data;

}

@property (assign,nonatomic) long long outputID;              //@synthesize outputID=_outputID - In the implementation block
@property (assign,nonatomic) long long inputID;               //@synthesize inputID=_inputID - In the implementation block
@property (nonatomic,readonly) NSData * data;                 //@synthesize data=_data - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithData:(id)arg1 inputID:(long long)arg2 outputID:(long long)arg3 ;
-(long long)inputID;
-(void)setInputID:(long long)arg1 ;
-(long long)outputID;
-(void)setOutputID:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)data;
@end

