/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:38 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSMutableCharacterSet.h>

@interface NSCFCharacterSet : NSMutableCharacterSet
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)invert;
-(Class)classForArchiver;
-(id)bitmapRepresentation;
-(BOOL)isSupersetOfSet:(id)arg1 ;
-(BOOL)hasMemberInPlane:(unsigned char)arg1 ;
-(void)addCharactersInRange:(NSRange)arg1 ;
-(void)removeCharactersInRange:(NSRange)arg1 ;
-(void)formIntersectionWithCharacterSet:(id)arg1 ;
-(void)makeCharacterSetCompact;
-(void)makeCharacterSetFast;
-(Class)classForKeyedArchiver;
-(id)invertedSet;
-(void)removeCharactersInString:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(oneway void)release;
-(id)retain;
-(unsigned long long)retainCount;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)allowsWeakReference;
-(BOOL)retainWeakReference;
-(BOOL)characterIsMember:(unsigned short)arg1 ;
-(BOOL)longCharacterIsMember:(unsigned)arg1 ;
-(void)formUnionWithCharacterSet:(id)arg1 ;
-(void)addCharactersInString:(id)arg1 ;
@end
