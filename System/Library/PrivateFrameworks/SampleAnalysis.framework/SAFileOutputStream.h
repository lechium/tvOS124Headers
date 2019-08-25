/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:13 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SampleAnalysis/SampleAnalysis-Structs.h>
#import <SampleAnalysis/SAOutputStream.h>

@interface SAFileOutputStream : SAOutputStream {

	_sFILE* _outputFileStream;

}

@property (nonatomic,readonly) _sFILE* outputFileStream;              //@synthesize outputFileStream=_outputFileStream - In the implementation block
-(BOOL)hasSpaceAvailable;
-(long long)write:(const char*)arg1 maxLength:(unsigned long long)arg2 ;
-(int)printWithFormat:(const char*)arg1 ;
-(id)initWithFileStream:(_sFILE*)arg1 ;
-(_sFILE*)outputFileStream;
-(int)appendData:(id)arg1 ;
@end

