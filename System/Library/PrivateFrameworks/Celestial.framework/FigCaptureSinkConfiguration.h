/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/FigXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FigCaptureSinkConfiguration : NSObject <FigXPCCoding, NSCopying> {

	NSString* _sinkID;

}

@property (nonatomic,copy) NSString * sinkID;                       //@synthesize sinkID=_sinkID - In the implementation block
@property (nonatomic,readonly) int sinkType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)stringForSinkType:(int)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSString *)sinkID;
-(int)sinkType;
-(void)setSinkID:(NSString *)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

