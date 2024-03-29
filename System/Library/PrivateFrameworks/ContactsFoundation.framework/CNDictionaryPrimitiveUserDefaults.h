/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:25 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNPrimitiveUserDefaults.h>

@class NSMutableDictionary, NSString;

@interface CNDictionaryPrimitiveUserDefaults : NSObject <CNPrimitiveUserDefaults> {

	NSMutableDictionary* _preferences;
	unsigned long long _synchronizeCount;
	unsigned long long _setupAutosyncCount;

}

@property (readonly) unsigned long long synchronizeCount;                //@synthesize synchronizeCount=_synchronizeCount - In the implementation block
@property (readonly) unsigned long long setupAutosyncCount;              //@synthesize setupAutosyncCount=_setupAutosyncCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)primitiveObjectForKey:(id)arg1 ;
-(void)setPrimitiveObject:(id)arg1 forKey:(id)arg2 ;
-(long long)primitiveIntegerValueForKey:(id)arg1 keyExists:(BOOL*)arg2 ;
-(BOOL)primitiveBoolValueForKey:(id)arg1 keyExists:(BOOL*)arg2 ;
-(void)primitiveRemoveObjectForKey:(id)arg1 ;
-(void)setupAutosync;
-(unsigned long long)synchronizeCount;
-(unsigned long long)setupAutosyncCount;
-(id)init;
-(BOOL)synchronize;
@end

