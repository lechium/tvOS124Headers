/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:34 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/_CFXNotificationRegistrationContainer.h>

@interface _CFXNotificationRegistrar : _CFXNotificationRegistrationContainer {

	SCD_Struct_CF6* _wildcardNames;
	SCD_Struct_CF6* _wildcardObjects;
	SCD_Struct_CF6* _doubleWildcards;
	CFDictionaryRef _tokenRegistrations;
	unsigned long long _options;

}

@property (readonly) BOOL isEmpty; 
+(Class)childClass;
-(id)find:(unsigned long long)arg1 ;
-(CFStringRef)_copyDebugDescription;
-(void)match:(CFStringRef)arg1 object:(void*)arg2 observer:(void*)arg3 enumerator:(/*^block*/id)arg4 ;
-(void)find:(CFStringRef)arg1 object:(void*)arg2 observer:(void*)arg3 enumerator:(/*^block*/id)arg4 ;
-(void)add:(CFStringRef)arg1 object:(void*)arg2 observer:(void*)arg3 tokenRegistration:(id)arg4 ;
-(id)registrar;
-(id)acquireDoubleWildcard:(void*)arg1 options:(unsigned long long)arg2 ;
-(id)acquireWildcardName:(void*)arg1 ;
-(id)acquireWildcardObject:(CFStringRef)arg1 ;
-(id)acquireName:(CFStringRef)arg1 ;
-(void)enumerateRegistrations:(/*^block*/id)arg1 ;
-(void)remove:(unsigned long long)arg1 ;
-(id)init;
-(void)invalidate;
-(id)initWithOptions:(unsigned long long)arg1 ;
-(BOOL)isEmpty;
-(void)removeChild:(id)arg1 ;
-(void)addChild:(id)arg1 ;
@end

