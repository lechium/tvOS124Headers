/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:40 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSKeyValueProperty.h>

@class NSString, NSKeyValueUnnestedProperty;

@interface NSKeyValueNestedProperty : NSKeyValueProperty {

	NSString* _relationshipKey;
	NSString* _keyPathFromRelatedObject;
	NSKeyValueUnnestedProperty* _relationshipProperty;
	NSString* _keyPathWithoutOperatorComponents;
	BOOL _isAllowedToResultInForwarding;
	id _dependentValueKeyOrKeys;
	BOOL _dependentValueKeyOrKeysIsASet;

}
-(id)dependentValueKeyOrKeysIsASet:(BOOL*)arg1 ;
-(void)object:(id)arg1 didAddObservance:(id)arg2 recurse:(BOOL)arg3 ;
-(void)object:(id)arg1 didRemoveObservance:(id)arg2 recurse:(BOOL)arg3 ;
-(BOOL)matchesWithoutOperatorComponentsKeyPath:(id)arg1 ;
-(BOOL)object:(id)arg1 withObservance:(id)arg2 willChangeValueForKeyOrKeys:(id)arg3 recurse:(BOOL)arg4 forwardingValues:(SCD_Struct_NS31*)arg5 ;
-(void)object:(id)arg1 withObservance:(id)arg2 didChangeValueForKeyOrKeys:(id)arg3 recurse:(BOOL)arg4 forwardingValues:(SCD_Struct_NS31)arg5 ;
-(Class)_isaForAutonotifying;
-(id)_keyPathIfAffectedByValueForKey:(id)arg1 exactMatch:(BOOL*)arg2 ;
-(id)_keyPathIfAffectedByValueForMemberOfKeys:(id)arg1 ;
-(void)_givenPropertiesBeingInitialized:(CFSetRef)arg1 getAffectingProperties:(id)arg2 ;
-(void)_addDependentValueKey:(id)arg1 ;
-(id)_initWithContainerClass:(id)arg1 keyPath:(id)arg2 firstDotIndex:(unsigned long long)arg3 propertiesBeingInitialized:(CFSetRef)arg4 ;
-(void)dealloc;
-(id)description;
@end

