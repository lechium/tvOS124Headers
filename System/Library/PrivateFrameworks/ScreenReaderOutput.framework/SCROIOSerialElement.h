/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:05 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenReaderOutput/SCROIOElement.h>
#import <libobjc.A.dylib/SCROIOSerialElementProtocol.h>

@class NSString;

@interface SCROIOSerialElement : SCROIOElement <SCROIOSerialElementProtocol> {

	int _fileDescriptor;

}

@property (assign,nonatomic) int fileDescriptor;                    //@synthesize fileDescriptor=_fileDescriptor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)fileDescriptor;
-(id)initWithFileDescriptor:(int)arg1 ;
-(void)setFileDescriptor:(int)arg1 ;
-(int)transport;
-(int)identifier;
-(NSString *)description;
@end
