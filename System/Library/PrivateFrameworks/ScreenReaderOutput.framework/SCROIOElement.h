/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:04 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenReaderOutput/ScreenReaderOutput-Structs.h>
#import <libobjc.A.dylib/SCROIOElementProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SCROIOElement : NSObject <SCROIOElementProtocol, NSCopying> {

	unsigned _ioObject;
	int _identifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)transport;
-(id)initWithIOObject:(unsigned)arg1 ;
-(unsigned)ioObject;
-(void)dealloc;
-(int)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

