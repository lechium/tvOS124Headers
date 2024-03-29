/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface CABehavior : NSObject <NSSecureCoding, NSCopying> {

	void* _attr;
	unsigned _refcount;
	unsigned _uid;

}

@property (getter=isEnabled) BOOL enabled; 
@property (copy) NSString * name; 
@property (__weak) id<CABehaviorDelegate> delegate; 
@property (copy) NSDictionary * style; 
+(void)CAMLParserStartElement:(id)arg1 ;
+(id)defaultValueForKey:(id)arg1 ;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(/*function pointer*/void*)CA_setterForProperty:(const CAPropertyInfo*)arg1 ;
+(/*function pointer*/void*)CA_getterForProperty:(const CAPropertyInfo*)arg1 ;
+(BOOL)resolveInstanceMethod:(SEL)arg1 ;
+(BOOL)supportsSecureCoding;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)behavior;
-(void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(BOOL)shouldArchiveValueForKey:(id)arg1 ;
-(void)_setCARenderBehavior:(Behavior*)arg1 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(oneway void)release;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)retain;
-(unsigned long long)retainCount;
-(id)debugDescription;
-(void)setDelegate:(id<CABehaviorDelegate>)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStyle:(NSDictionary *)arg1 ;
-(NSDictionary *)style;
-(id<CABehaviorDelegate>)delegate;
-(id)valueForKey:(id)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(BOOL)allowsWeakReference;
-(BOOL)retainWeakReference;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
@end

