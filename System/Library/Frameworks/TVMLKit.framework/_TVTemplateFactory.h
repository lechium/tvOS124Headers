/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:37 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSBundle;

@interface _TVTemplateFactory : NSObject {

	NSBundle* _tvmlKitBundle;

}
-(void)registerProductTemplateURL:(id)arg1 forTemplateName:(id)arg2 includeParentStyleSheets:(BOOL)arg3 ;
-(void)_registerTemplateControllers;
-(void)_registerCustomAnimators;
-(id)_slideshowControllerWithElement:(id)arg1 ;
-(void)_registerStyleSheet:(id)arg1 forTemplate:(id)arg2 parentStyleSheets:(id)arg3 ;
-(id)init;
@end

