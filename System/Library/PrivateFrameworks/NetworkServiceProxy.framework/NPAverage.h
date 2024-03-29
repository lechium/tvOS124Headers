/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:27 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkServiceProxy/NetworkServiceProxy-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray;

@interface NPAverage : NSObject <NSSecureCoding> {

	unsigned long long _size;
	NSMutableArray* _samples;

}

@property (retain) NSMutableArray * samples;                  //@synthesize samples=_samples - In the implementation block
@property (assign) unsigned long long size;                   //@synthesize size=_size - In the implementation block
@property (readonly) unsigned long long average; 
@property (readonly) BOOL isLastValid; 
@property (readonly) BOOL isAnyValid; 
+(BOOL)supportsSecureCoding;
-(unsigned long long)average;
-(id)initWithSampleSize:(unsigned long long)arg1 ;
-(void)addSamples:(id)arg1 ;
-(BOOL)isLastValid;
-(BOOL)isAnyValid;
-(unsigned long long)size;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSize:(unsigned long long)arg1 ;
-(void)addSample:(unsigned long long)arg1 ;
-(id)shortDescription;
-(NSMutableArray *)samples;
-(void)setSamples:(NSMutableArray *)arg1 ;
@end

