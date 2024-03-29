/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:32 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libAXSafeCategoryBundle.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libAXSafeCategoryBundle.dylib/libAXSafeCategoryBundle.dylib-Structs.h>
@class NSString;

@interface UIAccessibilitySafeCategory : NSObject

@property (nonatomic,copy) NSString * accessibilityIdentifier; 
+(id)_installSafeCategoryOnClassNamed:(id)arg1 isManaged:(BOOL)arg2 ;
+(id)_installLocalValidationMethodOnClassNamed:(id)arg1 ;
+(void)_addCategoryMethods:(objc_method*)arg1 count:(unsigned)arg2 excluding:(SEL*)arg3 count:(unsigned)arg4 toClass:(Class)arg5 isClass:(BOOL)arg6 ;
+(id)_installSafeCategoryOnClass:(Class)arg1 isManaged:(BOOL)arg2 ;
+(Class)safeCategoryTargetClass;
+(void)safeCategoryAddDependenciesToCollection:(id)arg1 ;
+(void)_installSafeCategoryOnClassNamed:(id)arg1 ;
+(id)safeCategoryTargetClassName;
+(id)_installSafeCategoryValidationMethod;
+(Class)safeCategoryBaseClass;
+(id)_initializeSafeCategoryFromValidationManager;
@end

