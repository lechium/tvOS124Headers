/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SFIVGenerator.h>

@class NSData, NSString;

@interface SFIncrementingIVGenerator : NSObject <SFIVGenerator> {

	id _incrementingIVGeneratorInternal;

}

@property (nonatomic,copy) NSData * messageID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSData *)messageID;
-(void)setMessageID:(NSData *)arg1 ;
-(id)initWithRandomMessageID;
-(id)initWithMessageID:(id)arg1 ;
-(id)generateIVWithLength:(long long)arg1 error:(id*)arg2 ;
-(id)init;
@end

