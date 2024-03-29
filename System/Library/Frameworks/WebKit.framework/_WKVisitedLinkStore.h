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

@interface _WKVisitedLinkStore : NSObject <WKObject> {

	ObjectStorage<WebKit::VisitedLinkStore> _visitedLinkStore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(Object*)_apiObject;
-(void)addVisitedLinkWithURL:(id)arg1 ;
-(void)addVisitedLinkWithString:(id)arg1 ;
-(BOOL)containsVisitedLinkWithURL:(id)arg1 ;
-(void)removeVisitedLinkWithURL:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)removeAll;
@end

