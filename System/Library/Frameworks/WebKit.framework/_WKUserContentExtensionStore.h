/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:24 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSString;

@interface _WKUserContentExtensionStore : NSObject <WKObject> {

	RetainPtr<WKContentRuleListStore>* _contentRuleListStore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
+(id)storeWithURL:(id)arg1 ;
+(id)defaultStore;
-(Object*)_apiObject;
-(id)_initWithWKContentRuleListStore:(id)arg1 ;
-(void)compileContentExtensionForIdentifier:(id)arg1 encodedContentExtension:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)lookupContentExtensionForIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeContentExtensionForIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_removeAllContentExtensions;
-(void)_invalidateContentExtensionVersionForIdentifier:(id)arg1 ;
@end

