/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:31 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface MIDICIProfile : NSObject <NSSecureCoding> {

	NSString* name;
	NSData* profileID;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSData * profileID; 
+(BOOL)supportsSecureCoding;
+(id)description;
-(BOOL)isEqualTo:(id)arg1 ;
-(id)initWithData:(id)arg1 name:(id)arg2 ;
-(NSData *)profileID;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(const void*)rawData;
@end

