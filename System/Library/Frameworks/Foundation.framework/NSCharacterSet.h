/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:38 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface NSCharacterSet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (copy,readonly) NSData * bitmapRepresentation; 
@property (copy,readonly) NSCharacterSet * invertedSet; 
+(id)nonBaseCharacterSet;
+(id)decomposableCharacterSet;
+(id)capitalizedLetterCharacterSet;
+(id)illegalCharacterSet;
+(id)characterSetWithContentsOfFile:(id)arg1 ;
+(id)characterSetWithRange:(NSRange)arg1 ;
+(id)characterSetWithBitmapRepresentation:(id)arg1 ;
+(id)URLUserAllowedCharacterSet;
+(id)URLPasswordAllowedCharacterSet;
+(id)URLHostAllowedCharacterSet;
+(id)URLFragmentAllowedCharacterSet;
+(id)alphanumericCharacterSet;
+(id)URLPathAllowedCharacterSet;
+(id)letterCharacterSet;
+(BOOL)supportsSecureCoding;
+(void)initialize;
+(id)whitespaceAndNewlineCharacterSet;
+(id)URLQueryAllowedCharacterSet;
+(id)newlineCharacterSet;
+(id)whitespaceCharacterSet;
+(id)characterSetWithCharactersInString:(id)arg1 ;
+(id)decimalDigitCharacterSet;
+(id)lowercaseLetterCharacterSet;
+(id)punctuationCharacterSet;
+(id)symbolCharacterSet;
+(id)controlCharacterSet;
+(id)uppercaseLetterCharacterSet;
-(unsigned long long)_cfTypeID;
-(NSData *)bitmapRepresentation;
-(CFCharacterSetRef)_expandedCFCharacterSet;
-(BOOL)isMutable;
-(void)makeImmutable;
-(BOOL)isSupersetOfSet:(id)arg1 ;
-(BOOL)hasMemberInPlane:(unsigned char)arg1 ;
-(id)_retainedBitmapRepresentation;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(NSCharacterSet *)invertedSet;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(BOOL)characterIsMember:(unsigned short)arg1 ;
-(BOOL)longCharacterIsMember:(unsigned)arg1 ;
@end

