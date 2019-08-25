/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <Foundation/NSCoder.h>

@class NSArray;

@interface NEHasher : NSCoder {

	CC_SHA1state_st* _sha1Context;
	NSArray* _classPrefixWhitelist;

}

@property (assign) CC_SHA1state_st* sha1Context;                //@synthesize sha1Context=_sha1Context - In the implementation block
@property (retain) NSArray * classPrefixWhitelist;              //@synthesize classPrefixWhitelist=_classPrefixWhitelist - In the implementation block
+(id)hashObject:(id)arg1 ;
+(id)hashObject:(id)arg1 withClassPrefixWhitelist:(id)arg2 ;
-(long long)versionForClassName:(id)arg1 ;
-(void)encodeBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)encodeDataObject:(id)arg1 ;
-(id)decodeDataObject;
-(long long)decodeInt64ForKey:(id)arg1 ;
-(void)encodeInt64:(long long)arg1 forKey:(id)arg2 ;
-(id)finishHashing;
-(void)setClassPrefixWhitelist:(NSArray *)arg1 ;
-(void)setSha1Context:(CC_SHA1state_st*)arg1 ;
-(CC_SHA1state_st*)sha1Context;
-(NSArray *)classPrefixWhitelist;
-(void)decodeValueOfObjCType:(const char*)arg1 at:(void*)arg2 ;
-(void)encodeValueOfObjCType:(const char*)arg1 at:(const void*)arg2 ;
-(id)decodePropertyListForKey:(id)arg1 ;
-(id)init;
-(id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2 ;
-(void)encodeObject:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2 ;
-(BOOL)allowsKeyedCoding;
-(void)encodeInteger:(long long)arg1 forKey:(id)arg2 ;
-(long long)decodeIntegerForKey:(id)arg1 ;
-(id)decodeObjectForKey:(id)arg1 ;
-(void)encodeBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)encodeDouble:(double)arg1 forKey:(id)arg2 ;
-(BOOL)decodeBoolForKey:(id)arg1 ;
-(double)decodeDoubleForKey:(id)arg1 ;
-(BOOL)containsValueForKey:(id)arg1 ;
-(float)decodeFloatForKey:(id)arg1 ;
-(void)encodeFloat:(float)arg1 forKey:(id)arg2 ;
-(void)encodeConditionalObject:(id)arg1 forKey:(id)arg2 ;
-(int)decodeIntForKey:(id)arg1 ;
-(const char*)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long*)arg2 ;
-(void)encodeBytes:(const char*)arg1 length:(unsigned long long)arg2 forKey:(id)arg3 ;
-(void)encodeInt:(int)arg1 forKey:(id)arg2 ;
-(void)encodeInt32:(int)arg1 forKey:(id)arg2 ;
-(int)decodeInt32ForKey:(id)arg1 ;
@end

